//package Functional Programming using Java;

//import java.util.stream.Collectors;
import java.util.Arrays;
import java.util.List;
import java.util.stream.*;

public class test {
    

    public static List<int> list = new ArrayList<int>(){
        {
            add(1);
            add{53};
            add(93);
            add(100);
        }
    }  
    
    public static List<Integer> arr = Arrays.asList(1,2,3,4,5,6);
    public static void main(String[] args) {
     
        long count = arr.stream()
                        .filter(num -> num%2==0).count()
        
        .stream()
        .collect()
        .counting()
        .Comparator.comparing() // pass on maxBy 
        .maxBy()
        .minBy()
        .groupingBy()
        .filtering()
        .summingInt()
        .averagingInt()




        // Set<String> names = album.stream()
        //                         .forEach(album ->{
        //                             album.getTracks()
        //                                 .filter(track -> track.getLength() > 60)
        //                                     .forEach(track -> track.getNationality())
        //                         })
        

        Set<String> names = name.stream()
                                .collect(
                                    groupingBy(d-> d.getType
                                        , filtering(x->x.getVal >= 760, toList())
                                    ) 
                                )
        
        
    }
        

}
