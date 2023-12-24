// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
class LL {
    Node Head;
    class Node {
        int data;
        Node next;
        Node prev;

        Node(int data) {
            this.data = data;
            this.next = null;
        }

    }
    public void addNodeAtFirst(int data){
        Node temp = new Node(data);
        if(Head == null){
            temp.next = temp;
            temp.prev = temp;
            Head = temp;
            return ;
        }
        Head.prev.next = temp;
        temp.prev = Head.prev;
        temp.next = Head;
        Head.prev = temp;
        Head= temp;
    }

    public void AddNodeAtLast(int data){
        Node temp = new Node(data);
        if(Head == null){
            temp.next = temp;
            temp.prev = temp;
            Head = temp;
            return ;
        }
        Head.prev.next = temp;
        temp.next = Head;
        temp.prev = Head.prev.prev;
        Head.prev = temp;

    }
    public void AddAtMiddle(int n, int data){
        Node temp = new Node(data);
        Node p = Head;
        while(n>2){
            n--;
            p = p.next;
        }
        temp.next = p.next;
        p.next.next.prev = temp;
        p.next = temp;
        temp.prev = p;

    }
    public void PrintList(){
        Node curr = Head;
        while(curr.next!=Head){
            System.out.print(curr.data+"----> ");
            curr = curr.next;
        }
        System.out.print(curr.data+"----> Null");
        System.out.print("\n");

    }
    void DeleteNodeByPosition(int n){
        Node p = Head;
        while(n>2){
            n--;
            p = p.next;
        }
        p.next.next.prev = p;
        p.next = p.next.next;
    }
    




    public static void main(String[] args) {
        LL ll = new LL();
        ll.addNodeAtFirst(20);
        ll.PrintList();
        ll.addNodeAtFirst(10);
        ll.PrintList();
        ll.AddNodeAtLast(30);
        ll.PrintList();
        ll.AddAtMiddle(2,15);
        ll.PrintList();
        ll.DeleteNodeByPosition(2);
        ll.PrintList();
        }
}