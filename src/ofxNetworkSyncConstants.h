//
//  ofxNetworkSyncConstants.h
//  toposcan_4screen
//
//  Created by FURUDATE Ken on 1/17/15.
//
//

#ifndef toposcan_4screen_ofxNetworkSyncConstants_h
#define toposcan_4screen_ofxNetworkSyncConstants_h

const int SERVER_SEND_PORT_OFFSET		=15000;
const int SERVER_RECV_PORT_OFFSET		=17000;
const int FINDER_SEND_PORT_DEFAULT		=19000;
const int FINDER_RESPOND_PORT_DEFAULT	=19001;

const int SERVER_FIND_INTERVAL	= 100;
const int SERVER_FIND_TIMEOUT	= 1000;


const string MESSAGE_HEADER_CLIENT_ID	= "id";
const string MESSAGE_HEADER_RESULT		= "result";
const string MESSAGE_HEADER_SEPARATOR	= " ";
const string MESSAGE_HEADER_TIME_OFFSET = "timeoffset ";

const string MESSAGE_START_REQUEST		= "calibratin_start";
const string MESSAGE_START_RESPONCE		= "calibratin_start_ok";
const string MESSAGE_START_FAILED		= "calibratin_start_failed";

enum ofxNetworkSyncCalibrationStep{
	WAIT,
	CALIBRATING,
	CALIBRATED
};

const string UDP_MESSAGE_SEND	= "send";
const string UDP_MESSAGE_REPLY	= "reply";
const string UDP_MESSAGE_HELLO	= "hello";

const int NUM_MEASUREMENT_DEFAULT = 30;

typedef struct{
	string ip;
	int port;
} IpAndPort;

#endif
