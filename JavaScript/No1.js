/* Suhaimee Binyoh
Number Line Jumps
web : https://www.hackerrank.com/challenges/kangaroo/problem

*/
function kangaroo(x1, v1, x2, v2) {
    // Write your code here
    if(((x1-x2)%(v2-v1) === 0 ) && ( v1>v2)){
        console.log("YES")
        return "YES"   
    }
    else{
        console.log("NO")
        return "NO"
    }
}