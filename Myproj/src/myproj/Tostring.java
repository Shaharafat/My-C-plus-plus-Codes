package myproj;

public class Tostring {
    public static void main(String[] args) {
        Student s = new Student(11,"Arafat");
        
        System.out.println(s);
        
    }
}

class Student
{
    int roll;
    String sname;

    public Student(int roll, String sname) {
        this.roll = roll;
        this.sname = sname;
    }
    
    public String toString()
    {
        return roll+" "+sname;
    }
}


