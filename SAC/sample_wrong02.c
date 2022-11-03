struct tree {
    int data;
    struct tree * left;
    struct tree * right;
    struct tree * parent;
};

/*@
  Let tree_rep(p, p_par) = p == 0 && emp ||
  	exists p_lch, 
    exists p_rch, (p -> left == p_lch) && (p -> right == p_rch) &&
                  (p -> parent == p_par) && tree_rep(p_lch, p) && tree_rep(p_rch, p)
 */

void malloc_tree (void *p);
/*@ Require emp
    Ensure  (p -> left == 0) && (p -> right == 0) &&
            (p -> parent == p_par) && (p -> data == 0)
 */

struct tree * insert(struct tree* x, int v)
/*@ With x_par
    Require tree_rep(x, x_par)
    Ensure tree_rep(__return, x_par)
 */
{
    struct tree * y;
    struct tree * t;
    if (x == 0) {
        x = (struct tree *) mallocN(sizeof(struct tree));
        x->data = v;
        return x;
    }
    else {
        y = x;
        t = y->parent;
        //@ Inv partial_tree_rep(y, t, x, x_par) && tree_rep(y, t) 
        while (y) {
            t = y;
            if (y->data < v)
                y = y->right;
            else if (y->data > v)
                y = y->left;
            else
                return x;
        }
        malloc_tree(y);
        y->data = v;
        y->parent = t;
        if (t->data < v)
            t->right = y;
        else
            t->left = y;
        return x;
    }
    while (x--) 
}


// This is a wrong file explaination which will not occur in the input
// while (x--) in line 56 missing loop body