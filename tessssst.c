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
