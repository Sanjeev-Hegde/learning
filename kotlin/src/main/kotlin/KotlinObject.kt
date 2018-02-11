object Test {
    private var a: Int = 0
    var b: Int = 1

       fun makeMe12(): Int {
            return a;
        }

}

fun <T> returna(transform: T): T {

    return transform;
}

fun <T,R> add2and3(transform: (T) ->R){}
fun main(args: Array<String>) {
    val result: Int

    result = Test.makeMe12()

    println("b = ${Test.b}")
    println("result = $result")

    var a=2;
    var b=3;
    print(returna<Int>(a));

}