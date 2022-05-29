// void three_elem(t_list *a)
// {
//   t_node *top;
//   t_node *middle;
//   t_node *bottom;
  
//   top = a->top;
//   bottom  = a->head;
//   midlle = a->head->next;
  
//   if(top->data > middle->data && middle->data < bottom->data && top->data > bottom->data)//case 1
//     swap_a(a);
//   else if (top->data < middle->data && middle->data > bottom->data && top->data > bottom->data)
//   {
//     swap_a(a);
//     rev_rotate_a(a);
//   }
//   else if (top->data > middle->data && middle->data < bottom->data && top->data > bottom->data)
//     rev_a(a);
//   else if (top->data > middle->data && middle->data < bottom->data && top->data > bottom->data)
//   else
// }
int get_lsize(t_list *l)
{
  int len;
  t_node *tmp;
  
  len = 0;
  tmp= l->head;
  while(tmp!= NULL)
    {tmp=tmp->next;
    len++;}
    return(len);
}
