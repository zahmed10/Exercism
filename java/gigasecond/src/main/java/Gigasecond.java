import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.Month;

public class Gigasecond {
    // private LocalDate time;
    // private LocalDateTime tempTime;
    private LocalDateTime dateTime;

    public Gigasecond(LocalDate moment) {
        this.dateTime = moment.atStartOfDay();
        this.dateTime = this.dateTime.plusSeconds(1000000000);
        // time = moment;
        // System.out.println(moment);
        
    }

    public Gigasecond(LocalDateTime moment) {
        this.dateTime = moment.plusSeconds(1000000000);
        // tempTime = time.atStartOfDay();
        // dateTime = tempTime.plusSeconds(1000000000);
    }

    public LocalDateTime getDateTime() {
        return dateTime;
    }
}
