package com.wintmain.ds.math;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

public class AverageTest {
    double[] numbers = {1, 1, 2, 2, 3, 3, 9};
    
    @Test
    public void testAverage() {
        Assertions.assertEquals(3, Average.average(numbers));
    }
}
