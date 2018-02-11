import java.math.BigInteger
import java.util.*

fun main(args: Array<String>){
    // immutable
    val firstName:String ="Sanjeev";
    val lastName = "Hegde";

    //mutable variable
    var test = "Test";

    println("$test")

    var a = 2;
    val b = 3.1;
    val c = a+b;
    val d = a.plus(b);

    a +=a;
    println(a)

    println(a.unaryPlus());
    a = a.unaryMinus()
    println(a);
    println(a.unaryMinus());
    println(a);
    var result =a.compareTo(b);
    println(result);

    val numbers = intArrayOf(1, 4, 42, -3)
    println(numbers[0])
    println(numbers.getOrNull(5))
    var f:Int? = 4;//nullable int vaue can be null

    val reader = Scanner(System.`in`);
    val str1 = reader.next();
    val str2 = reader.next();
    
    println(str1+"\n"+str2);


    val first = BigInteger("0")

}


