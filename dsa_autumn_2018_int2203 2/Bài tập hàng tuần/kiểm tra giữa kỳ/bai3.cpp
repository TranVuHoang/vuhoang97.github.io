void inOrder(Node *root, int x, bool &quit)
{
  if (root == NULL) return;
  inOrder(root->left, x, quit);

  if (quit) return;
  cout << root->value << " ";

  if (root->value == x)
    quit = true;
  else
    inOrder(root->right, x, quit);
}

void traverseInOrder(Node *root, int x)
{
  bool quit = false;
  inOrder(root, x, quit);
}

bool contain(Node *root, int x)
{
  if (root == NULL) return false;
  if (root->value == x) return true;

  return contain(root->left, x) || contain(root->right, x);
}
