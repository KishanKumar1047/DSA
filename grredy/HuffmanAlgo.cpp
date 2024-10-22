#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<queue>
using namespace std ;
// tree nodde class
class Node{
    public:
   char ch;
    int freq;
    Node* left ;
    Node* right;
    Node(char ch,int freq){
        this->ch = ch;
        this->freq = freq;
        this->left = nullptr;
        this->right = nullptr;
    }
};
// comparison class for minimum priority queue
class Compare{
    public:
    bool operator()(Node* left,Node* right){
        return left->freq >right->freq;
    }
};
// traversing huffman tree and storing frequency as node
void encode(Node* root,string str,unordered_map<char,string>&Huffman)
{
    if(root==nullptr){
        return;
    }
    if(root->left ==NULL && root->right==NULL){ // learf node
        Huffman[root->ch] = str;

    }
    encode(root->left,str + "0",Huffman);
    encode(root->right,str + "1",Huffman);

}
// decoding the encoded string
void decode(Node* root, int& index, string str) {
    if (root == nullptr)
        return;

    // Found a leaf node
    if (!root->left && !root->right) {
        cout << root->ch;
        return;
    }

    index++;

    if (str[index] == '0')
        decode(root->left, index, str);
    else
        decode(root->right, index, str);
}

// building or implementing huffman code tree
class HuffmanCoding{
    public:
    void buildHuffman(string text){
        // calculate frequency of each character
        unordered_map<char,int>freq;
        for(char ch : text){
            freq[ch]++;// storing it in map
        }
        // create priority queue/min heap and add all node
        priority_queue<Node* , vector<Node*>,Compare>pq;
        for(auto pair:freq){
            pq.push(new Node (pair.first ,pair.second));
        }
        // build the huffman tree
        while(pq.size()!=1){
            Node* left = pq.top();pq.pop();
            Node* right = pq.top();pq.pop();
            // create a new internal node with frequency
            Node* sumNode = new Node('\0',left->freq + right->freq);
            sumNode->left = left;
            sumNode->right = right;
            pq.push(sumNode);
        }
        // root of the huffman tree
        Node* root = pq.top();

        // encode the code by traversing huffman tree
        unordered_map<char ,string>Huffman;
        encode(root,"",Huffman);

          // Print the Huffman codes
        cout << "Huffman Codes are :\n" << endl;
        for (auto pair : Huffman) {
            cout << pair.first << " " << pair.second << endl;
        }


        // Print the original string
        cout << "\nOriginal string was :\n" << text << endl;

          // Step 5: Encode the input text into a string of binary codes
        string encodedString = "";
        for (char ch : text) {
            encodedString += Huffman[ch];
        }

        cout << "\nEncoded string is :\n" << encodedString << endl;

        // Step 6: Decode the encoded string
        int index = -1;
        cout << "\nDecoded string is :\n";
        while (index < (int)encodedString.size() - 2) {
            decode(root, index, encodedString);
        }
        cout << endl;
    }
};


    // Main function to run the Huffman coding algorithm
int main() {
    string text = "aabcbhd";
    HuffmanCoding hc;
    hc.buildHuffman(text);
    return 0;
}
