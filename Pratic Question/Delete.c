void delend() {
    struct node *p, *next;

    if (h == NULL) {
        printf("List is empty\n");
    }
    else if (h->next == NULL) {   // only one node
        free(h);
        h = NULL;
        printf("Last node deleted\n");
    }
    else {
        p= h;

        while (p->next != NULL) {
            p1 =p;
            p = p->next;
        }

        p1->next = NULL;
        free(p);
        printf("Last node deleted\n");
    }
}