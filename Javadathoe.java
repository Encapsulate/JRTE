//THIS IS THE SERVER for the ANDROID client to talk to. This is the most important part!
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Inet4Address;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;
public class Javdathoe {

	/**
	 * @param args
	 */
	
 	 private static ServerSocket serverSocket;
         private static Socket clientSocket;
	 private static InputStreamReader inputStreamReader;
	 private static BufferedReader bufferedReader;
	 private static String message;
	 static JTmap PS3 = new JTmap();
	 public static void main(String[] args) {
	try {
			System.out.println("Computer IP: " + Inet4Address.getLocalHost().getHostAddress());
		} catch (UnknownHostException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}	
		/* JTmap PS3 = new JTmap();
			 PS3.init();//LOAD LIB
		 	 PS3.Connect(); //connects to ps3
			 PS3.Attach(); //attaches to Ps3 process (game memory)
			 PS3.SetMemory(0x1BBBC2C, new byte[] {0x12, 0x13, 0x14, 0x15}, 4); //ex 1
			 PS3.SetMemory(0x1BBBC2C, new byte[] {0x01, 0x02, 0x03 }, 3); //ex 2
	  	 PS3.WriteString(0x1BBBC2C, "^2Hello ^3From ^5Java!"); //ex 3
*/
			int port = 1337;
		try {
            serverSocket = new ServerSocket(port);  //Server socket
 
        } catch (IOException e) {
            System.out.println("Could not listen on port: " + port);
            return;
        }
		
        System.out.println("Server started. Listening to the port " + port);
        Boolean AndroidConnected = false;
        while (true) {
            try {
            	
                clientSocket = serverSocket.accept();   //accept the client connection
                inputStreamReader = new InputStreamReader(clientSocket.getInputStream());
                bufferedReader = new BufferedReader(inputStreamReader); //get the client message
                message = bufferedReader.readLine();
                if(message.equals("Connect"))
                {
                	PS3.init();
                	PS3.Connect();
                	AndroidConnected = true;
                }
                if(message.equals("Attach"))
                {
                	if(AndroidConnected == false)
                	{
                		
                	}
                	else
                	{
                	PS3.Attach();
                	}
                }
                //https://stackoverflow.com/questions/18571223/convert-java-string-to-byte-array
              
                if(message.contains("ChangeName|"))
                {
                	System.out.println(message);
                	PS3.SetMemory(0x1BBBC2C, new byte[] {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 31);
                	String nameGT = message.replace("ChangeName|", "");
                	System.out.println(nameGT);
                	//message.split("-")[0];
                	PS3.WriteString(0x1BBBC2C, nameGT);
                }
                inputStreamReader.close();
                clientSocket.close();
 
            } catch (IOException ex) {
                System.out.println("Problem in message reading");
            }
        }
	}
}
