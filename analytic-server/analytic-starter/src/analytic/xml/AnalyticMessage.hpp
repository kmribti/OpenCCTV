
#ifndef ANALYTIC_ANALYTICMESSAGE_HPP_
#define ANALYTIC_ANALYTICMESSAGE_HPP_

#include <string>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <sys/types.h>
#include "../../opencctv/Exception.hpp"

namespace analytic {
namespace xml {

const std::string OPERATION_START_ANALYTIC = "startanalytic";
const std::string OPERATION_KILL_ALL_ANALYTICS = "killallanalytics";
const std::string OPERATION_STOP_ANALYTIC = "stopanalytic";

class AnalyticMessage {
public:
	static std::string extractAnalyticRequestOperation(const std::string& sAnalyticRequest);
	//static std::string getAnalyticStartRequest(unsigned int iAnalyticInstanceId, const std::string& sAnalyticPluginDirLocation, const std::string& sAnalyticPluginFilename);
	static std::string getAnalyticStartReply(const std::string& sAnalyticQueueInAddress,const std::string& sAnalyticQueueOutAddress);
	//static std::string getPidMessage(pid_t pid);
    //static pid_t getPid(const std::string& sPidMessage);
	//static std::string getKillAllAnalyticProcessesRequest();
	static std::string getKillAllAnalyticProcessesReply(bool bDone);
	static void extractAnalyticStartRequestData(const std::string& sAnalyticStartRequest, unsigned int& iAnalyticInstanceId, std::string& sAnalyticDirLocation, std::string& sAnalyticFilename);
	//static void extractAnalyticStartReplyData(const std::string& sAnalyticStartReply, std::string& sAnalyticQueueInAddress, std::string& sAnalyticQueueOutAddress);
	//static void parseKillAllAnalyticProcessesReply(const std::string& sReply, bool& sDone);
	
    
    static void extractAnalyticStopRequestData(const std::string& sAnalyticStartRequest, unsigned int& iAnalyticInstanceId);
    static std::string getStopAnalyticProcessesReply(bool bDone);
};

} /* namespace xml */
} /* namespace analytic */

#endif /* ANALYTIC_ANALYTICMESSAGE_HPP_ */
