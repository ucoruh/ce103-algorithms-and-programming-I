package ce103;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.RepeatedTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;

class JavaSampleLibTest {

	JavaSampleLib sampleLib;

	@BeforeAll
	static void setUpBeforeClass() throws Exception {
	}

	@AfterAll
	static void tearDownAfterClass() throws Exception {
	}

	@BeforeEach
	void setUp() throws Exception {
		sampleLib = new JavaSampleLib();
	}

	@AfterEach
	void tearDown() throws Exception {
	}
	
	@Test
	@DisplayName("Simple Say Hello should work")
	void testSayHelloTo() {
		assertEquals("Hello Computer", JavaSampleLib.sayHelloTo("Computer"), "Regular say hello should work");
	}
	
	@Test
	@DisplayName("Simple Say Hello shouldn' work")
	void testSayHelloToWrong() {
		assertEquals("Hello All", JavaSampleLib.sayHelloTo("Computer"), "Regular say hello won't work");
	}
	
	
	@Test
	@DisplayName("Simple sum should work")
	void testSumCorrect() {
		assertEquals(9, JavaSampleLib.sum(4, 5), "Regular sum should work");
	}
	
	@Test
	@DisplayName("Simple sum shouldn't work")
	void testSumWrong() {
		assertEquals(10, JavaSampleLib.sum(4, 5), "Regular sum shouldn't work");
	}

	@Test
	@DisplayName("Simple multiplication should work")
	void testMultiply() {
		assertEquals(20, sampleLib.multiply(4, 5), "Regular multiplication should work");
	}

	@RepeatedTest(5)
	@DisplayName("Ensure correct handling of zero")
	void testMultiplyWithZero() {
		assertEquals(0, sampleLib.multiply(0, 5), "Multiple with zero should be zero");
		assertEquals(0, sampleLib.multiply(5, 0), "Multiple with zero should be zero");
	}

	public static int[][] data() {
		return new int[][] { { 1, 2, 2 }, { 5, 3, 15 }, { 121, 4, 484 },{ 2, 2, 2 } };
	}

	@ParameterizedTest
	@MethodSource(value = "data")
	void testWithStringParameter(int[] data) {
		JavaSampleLib tester = new JavaSampleLib();
		int m1 = data[0];
		int m2 = data[1];
		int expected = data[2];
		assertEquals(expected, tester.multiply(m1, m2));
	}

}
