int cacSumOddIndices()
{
  int sum = 0, i = 0;
  Node *p = head;
  while (p != NULL)
  {
    if (i % 2 == 1)
      sum += p->value;
    p = p->next;
    i ++;
  }

  return sum;
}

void removeLarge()
{
  if (head == NULL) return;

  Node *p = head, *tmp;
  while (p->next != NULL)
  {
    if (p->next->value > 100)
    {
      tmp = p->next;
      p->next = p->next->next;
      delete tmp;
    }
    else
      p = p->next;
  }

  if (head->value > 100)
  {
    tmp = head;
    head = head->next;
    delete tmp;
  }
}
