package Functional

import java.util.stream.Collectors;

Programming using Java;

public class go {
    
    num.stream().filter(x-> (x*x));

    number1.stream().flatMap(i-> number2.stream().map(j -> new int[](i,j))).collect(toList());




    list.stream().flatMap(i-> list2.stream().map(j-> new int[](i,j))).filter((i+j)%2==0).distinct().collect(Collectors.tolist())
}


/*
PPL 13.11.20
some terminal operation:
1) fives boolean-> anymatch()
2) gives optional-> findAny()
3) gives void -> forEach()

all are terminal
Noone remembers anything.
if gets something or not get something it returns desired vakues



###################
Reduce: 
remembers the thing

* summing up variables:

BinaryOperator<T>

lambda(accumulator, element) -> accumulator + element
doesn't give us the sum of the numbers

num.stream().reduce(0, (a,b)->a+b)
a will be initialised to 0
b is the first number of the stream

gives us the sum of the list
** i am storing the value and not one particular memory location where the values are changing

### FORK JOIN ####
devide the stream and join the subresults
just like DP

things can be parallelize very easily
stram.parallelStream() to parallelize things


 OPeration that can be parallizable
 when the opetation are associative in nature


 .reduce((a,b)-> (return (a>b)?a:b))
*/ 
// count no of elements in the stream
//.reduce(0,(a,b)->a+b).map(a->1)

/*
reduce("",(a,b)-> a+" "+b)
## list of word-> words with space and comma
## count no of lowercase chars in a string



map() and filter() are stateless
sum max skip limit reduce // just to remember only one thing at a time
stream is very small and bounded


### distinct and sort has to remember everythong
otherwise it can work
they are stateful and unbounded operation

findFirst is not good for parallization
it has a particular ordering

stram poses and encounter order in which each elemnt is operated upon
depands on both-
    * the source of the data
    * the operation performed on the stream


IntStream
DoubleStream
LongStream
// others dont support it because for numeric opration the boxing value is very costly



menu.stram().mapToInt(d->d.getCal()).max()
IntStream Optimization
IntSummaryStatistics object:
.avg, .count, .max, .min, .summaryStatistics()
Only for int long and double and unboxed version
*/