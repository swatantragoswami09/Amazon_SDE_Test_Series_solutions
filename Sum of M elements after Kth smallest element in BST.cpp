int sumOfNElemsAfterKthSmallest(Node* root, int m, int k)
{
    stack<Node*> st; 
    Node *curr = root;
    while (curr != NULL) {
        st.push(curr);
        curr = curr->left;
    }

    // find k-th smallest node.
    int count = k;
    Node *node;
    while (count > 0) {
        node = st.top();
        st.pop();
        count--;
        if (node->right != NULL) {
            curr = node->right;
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
        }
    }

    // curr is the k-th smallest node.

    // sum numbers n times.
    count = m;
    int sum = 0;
    while (count > 0) {
        node = st.top();
        st.pop();
        sum += node->data;
        count--;
        if (node->right != NULL) {
            curr = node->right;
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
        }
    }

    return sum;
}
