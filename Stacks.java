public class Stacks {
    static final int Max = 5;
    int top;
    String [] Animals = new String[Max] ;
    
    public Stacks() {
         top = -1;  
    }
    public void  Push (String New_Animal) {
        if(top == Max-1)
        {System.out.println("Overflow");}
        else{
            top = top+1;
            Animals[top]=New_Animal;
        }
    }
    
    public void Print_Animals() {
        for(int i=0;i<=top;i++){
            System.out.println(Animals[i]);
        }
    }
    // Returns the top most element and then deletes it
    public String pop(){
          
    if (top == -1) {
        System.out.println("UnderFlow");
        return "UnderFlow";
    }
    else{
        String Value = Animals[top];
        top = top-1;
        return Value;  
    }
    
    }
    // peek returns the value of the top most element without deleting it.
    public String Peek (){
        if (top == -1) {
            System.out.println("Under Flow"+""+"Stack is empty");
            return "Stuck is empty";
        }
        else{
            String Value = Animals[top];
            return Value; 
        }
    }
    

    public static void main(String[] args) {
        Stacks OB = new Stacks();
        OB.Push("Lion");
        OB.Push("Tiger");
        OB.Push("Elephant");
        OB.pop();
        OB.Print_Animals();
    }
}