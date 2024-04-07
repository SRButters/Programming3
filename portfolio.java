package porfolioproject;

public class portfolio {
    public static void main(String[] args) {
        Counter counter = new Counter();

        Thread t1 = new Thread(() -> {
            counter.countUp();
        });
        Thread t2 = new Thread(() -> {
            counter.countDown();
        });
        t1.start();
        t2.start();
    }
}

class Counter {
    private int count = 0;

    public synchronized void countUp() {
        try {
            while (count < 20) {
                count++;
                System.out.println("Count up: " + count);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }

    public synchronized void countDown() {
        try {
            while (count > 0) {
                count--;
                System.out.println("Count down: " + count);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}