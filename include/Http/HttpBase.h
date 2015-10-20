//
// Date: 2015/10/09
// Author: Dinosaur W.
//

#ifndef MINIHTTPD_HTTPBASE_H
#define MINIHTTPD_HTTPBASE_H

#include <map>

using std::string;
using std::map;

class HttpBase
{
    public:
        // root dir.
        static string HTTP_ROOT_DIR;
        
        // set root dir.
        static void set_root_dir(const string& dir)
        {
            HTTP_ROOT_DIR = dir;
        }
        
        // http method.
        static const int METHOD_UNKNOWN;
        static const int METHOD_GET;
        static const int METHOD_POST;
        
        // http version.
        static const int HTTPV_UNKONWN;
        static const int HTTPV_09;
        static const int HTTPV_10;
        static const int HTTPV_11;
        static const int HTTPV_20;
        
        // http status code
        static const int HTTP_STATUS_CODE_UNKNOWN;
        static const int HTTP_STATUS_CODE_200;
        static const int HTTP_STATUS_CODE_301;
        static const int HTTP_STATUS_CODE_400;
        static const int HTTP_STATUS_CODE_404;
        static const int HTTP_STATUS_CODE_500;
        static const int HTTP_STATUS_CODE_501;
        
        static map<string, string> content_type_map;
};

string HttpBase::HTTP_ROOT_DIR = "/var/www";

// http method.
const int HttpBase::METHOD_UNKNOWN = 0;
const int HttpBase::METHOD_GET = 1;
const int HttpBase::METHOD_POST = 2;

// http version.
const int HttpBase::HTTPV_UNKONWN = 0;
const int HttpBase::HTTPV_09 = 1;
const int HttpBase::HTTPV_10 = 2;
const int HttpBase::HTTPV_11 = 3;
const int HttpBase::HTTPV_20 = 4;

// http status code
const int HttpBase::HTTP_STATUS_CODE_UNKNOWN = 0;
const int HttpBase::HTTP_STATUS_CODE_200 = 200;
const int HttpBase::HTTP_STATUS_CODE_301 = 301;
const int HttpBase::HTTP_STATUS_CODE_400 = 400;
const int HttpBase::HTTP_STATUS_CODE_404 = 404;
const int HttpBase::HTTP_STATUS_CODE_500 = 500;
const int HttpBase::HTTP_STATUS_CODE_501 = 501;

map<string, string> HttpBase::content_type_map = {
    {".wmf", "application/x-wmf"},
    {".x_t", "application/x-x_t"},
    {".pcl", "application/x-pcl"},
    {".mpg", "video/mpg"},
    {".ra", "audio/vnd.rn-realaudio"},
    {".la1", "audio/x-liquid-file"},
    {".wvx", "video/x-ms-wvx"},
    {".wsdl", "text/xml"},
    {".dwg", "application/x-dwg"},
    {".dwf", "application/x-dwf"},
    {".pot", "application/vnd.ms-powerpoint"},
    {".uls", "text/iuls"},
    {".dll", "application/x-msdownload"},
    {".rp", "image/vnd.rn-realpix"},
    {".rv", "video/vnd.rn-realvideo"},
    {".prn", "application/x-prn"},
    {".IVF", "video/x-ivf"},
    {".sty", "application/x-sty"},
    {".rpm", "audio/x-pn-realaudio-plugin"},
    {".tld", "text/xml"},
    {".dcd", "text/xml"},
    {".ptn", "application/x-ptn"},
    {".rm", "application/vnd.rn-realmedia"},
    {".tg4", "application/x-tg4"},
    {".xls", "application/x-xls"},
    {".crt", "application/x-x509-ca-cert"},
    {".ras", "application/x-ras"},
    {".dgn", "application/x-dgn"},
    {".ram", "audio/x-pn-realaudio"},
    {".crl", "application/pkix-crl"},
    {".stm", "text/html"},
    {".stl", "application/vnd.ms-pki.stl"},
    {".tdf", "application/x-tdf"},
    {".hqx", "application/mac-binhex40"},
    {".isp", "application/x-internet-signup"},
    {".sam", "application/x-sam"},
    {".vxml", "text/xml"},
    {".m1v", "video/x-mpeg"},
    {".vsd", "application/x-vsd"},
    {".xwd", "application/x-xwd"},
    {".wsc", "text/scriptlet"},
    {".sit", "application/x-stuffit"},
    {".avi", "video/avi"},
    {".sisx", "application/vnd.symbian.install"},
    {".bmp", "application/x-bmp"},
    {".lar", "application/x-laplayer-reg"},
    {".js", "application/x-javascript"},
    {".sdp", "application/sdp"},
    {".aif", "audio/aiff"},
    {".sdw", "application/x-sdw"},
    {".dot", "application/msword"},
    {".wkq", "application/x-wkq"},
    {".hpg", "application/x-hpgl"},
    {".pdx", "application/vnd.adobe.pdx"},
    {".tsd", "text/xml"},
    {".301", "application/x-301"},
    {".plg", "text/html"},
    {".wml", "text/vnd.wap.wml"},
    {".mht", "message/rfc822"},
    {".mpw", "application/vnd.ms-project"},
    {".hpl", "application/x-hpl"},
    {".cdr", "application/x-cdr"},
    {".pr", "application/x-pr"},
    {".wmd", "application/x-ms-wmd"},
    {".css", "text/css"},
    {".wmz", "application/x-ms-wmz"},
    {".pls", "audio/scpls"},
    {".tga", "application/x-tga"},
    {".slb", "application/x-slb"},
    {".csi", "application/x-csi"},
    {".plt", "application/x-plt"},
    {".p10", "application/pkcs10"},
    {".icb", "application/x-icb"},
    {".pgl", "application/x-pgl"},
    {".slk", "drawing/x-slk"},
    {".mtx", "text/xml"},
    {".pdf", "application/pdf"},
    {".cdf", "application/x-netcdf"},
    {".pl", "application/x-perl"},
    {".net", "image/pnetvue"},
    {".dbx", "application/x-dbx"},
    {".rmf", "application/vnd.adobe.rmf"},
    {".htt", "text/webviewhtml"},
    {".wb3", "application/x-wb3"},
    {".wb2", "application/x-wb2"},
    {".htx", "text/html"},
    {".mpa", "video/x-mpg"},
    {".dbm", "application/x-dbm"},
    {".hta", "application/hta"},
    {".mdb", "application/x-mdb"},
    {".ws2", "application/x-ws"},
    {".gbr", "application/x-gbr"},
    {".dbf", "application/x-dbf"},
    {".pcx", "application/x-pcx"},
    {".mpga", "audio/rn-mpeg"},
    {".jpeg", "image/jpeg"},
    {".ps", "application/postscript"},
    {".htm", "text/html"},
    {".mml", "text/xml"},
    {".xfd", "application/vnd.adobe.xfd"},
    {".asp", "text/asp"},
    {".m3u", "audio/mpegurl"},
    {".ltr", "application/x-ltr"},
    {".fif", "application/fractals"},
    {".cal", "application/x-cals"},
    {".class", "java/*"},
    {".torrent", "application/x-bittorrent"},
    {".asx", "video/x-ms-asf"},
    {".p7c", "application/pkcs7-mime"},
    {".p7b", "application/x-pkcs7-certificates"},
    {".sat", "application/x-sat"},
    {".rsml", "application/vnd.rn-rsml"},
    {".sis", "application/vnd.symbian.install"},
    {".asa", "text/asa"},
    {".asf", "video/x-ms-asf"},
    {".bot", "application/x-bot"},
    {".prf", "application/pics-rules"},
    {".gl2", "application/x-gl2"},
    {".xml", "text/xml"},
    {".wr1", "application/x-wr1"},
    {".der", "application/x-x509-ca-cert"},
    {".p7s", "application/pkcs7-signature"},
    {".p7r", "application/x-pkcs7-certreqresp"},
    {".cat", "application/vnd.ms-pki.seccat"},
    {".ico", "application/x-ico"},
    {".eps", "application/postscript"},
    {".sst", "application/vnd.ms-pki.certstore"},
    {".wpg", "application/x-wpg"},
    {".cit", "application/x-cit"},
    {".p12", "application/x-pkcs12"},
    {".rmi", "audio/mid"},
    {".spl", "application/futuresplash"},
    {".acp", "audio/x-mei-aac"},
    {".fax", "image/fax"},
    {".pc5", "application/x-pc5"},
    {".wb1", "application/x-wb1"},
    {".doc", "application/msword"},
    {".sol", "text/plain"},
    {".dtd", "text/xml"},
    {".lavs", "audio/x-liquid-secure"},
    {".c4t", "application/x-c4t"},
    {".sld", "application/x-sld"},
    {".wrk", "application/x-wrk"},
    {".ssm", "application/streamingmedia"},
    {".wri", "application/x-wri"},
    {".wks", "application/x-wks"},
    {".xslt", "text/xml"},
    {".wq1", "application/x-wq1"},
    {".vtx", "application/vnd.visio"},
    {".vcf", "text/x-vcard"},
    {".hgl", "application/x-hgl"},
    {".pwz", "application/vnd.ms-powerpoint"},
    {".img", "application/x-img"},
    {".fo", "text/xml"},
    {".wax", "audio/x-ms-wax"},
    {".rjt", "application/vnd.rn-realsystem-rjt"},
    {".out", "application/x-out"},
    {".html", "text/html"},
    {".aiff", "audio/aiff"},
    {".anv", "application/x-anv"},
    {".aifc", "audio/aiff"},
    {".exe", "application/x-msdownload"},
    {".rec", "application/vnd.rn-recording"},
    {".rlc", "application/x-rlc"},
    {".fdf", "application/vnd.fdf"},
    {".rat", "application/rat-file"},
    {".xhtml", "text/html"},
    {".rt", "text/vnd.rn-realtext"},
    {".red", "application/x-red"},
    {".vpg", "application/x-vpeg005"},
    {".mfp", "application/x-shockwave-flash"},
    {".iff", "application/x-iff"},
    {".edn", "application/vnd.adobe.edn"},
    {".jfif", "image/jpeg"},
    {".wbmp", "image/vnd.wap.wbmp"},
    {".smk", "application/x-smk"},
    {".wm", "video/x-ms-wm"},
    {".lbm", "application/x-lbm"},
    {".ig4", "application/x-g4"},
    {".tif", "application/x-tif"},
    {".mpeg", "video/mpg"},
    {".epi", "application/x-epi"},
    {".hrf", "application/x-hrf"},
    {".rmj", "application/vnd.rn-realsystem-rmj"},
    {".ins", "application/x-internet-signup"},
    {".lmsff", "audio/x-la-lms"},
    {".spp", "text/xml"},
    {".rmm", "audio/x-pn-realaudio"},
    {".wp6", "application/x-wp6"},
    {".gif", "image/gif"},
    {".ppt", "application/x-ppt"},
    {".pps", "application/vnd.ms-powerpoint"},
    {".", "application/x-"},
    {".pic", "application/x-pic"},
    {".ppm", "application/x-ppm"},
    {".math", "text/xml"},
    {".rtf", "application/x-rtf"},
    {".vss", "application/vnd.visio"},
    {".latex", "application/x-latex"},
    {".rmx", "application/vnd.rn-realsystem-rmx"},
    {".sor", "text/plain"},
    {".rmp", "application/vnd.rn-rn_music_package"},
    {".cgm", "application/x-cgm"},
    {".ppa", "application/vnd.ms-powerpoint"},
    {".xlw", "application/x-xlw"},
    {".xdr", "text/xml"},
    {".emf", "application/x-emf"},
    {".top", "drawing/x-top"},
    {".mp2v", "video/mpeg"},
    {".spc", "application/x-pkcs7-certificates"},
    {".rdf", "text/xml"},
    {".dcx", "application/x-dcx"},
    {".eml", "message/rfc822"},
    {".906", "application/x-906"},
    {".frm", "application/x-frm"},
    {".cot", "application/x-cot"},
    {".biz", "text/xml"},
    {".xsd", "text/xml"},
    {".rms", "application/vnd.rn-realmedia-secure"},
    {".vml", "text/xml"},
    {".vda", "application/x-vda"},
    {".hmr", "application/x-hmr"},
    {".wiz", "application/msword"},
    {".drw", "application/x-drw"},
    {".mpv2", "video/mpeg"},
    {".igs", "application/x-igs"},
    {".m2v", "video/x-mpeg"},
    {".cg4", "application/x-g4"},
    {".mns", "audio/x-musicnet-stream"},
    {".pci", "application/x-pci"},
    {".htc", "text/x-component"},
    {".xdp", "application/vnd.adobe.xdp"},
    {".x_b", "application/x-x_b"},
    {".ai", "application/postscript"},
    {".rle", "application/x-rle"},
    {".wav", "audio/wav"},
    {".c90", "application/x-c90"},
    {".jpg", "application/x-jpg"},
    {".smi", "application/smil"},
    {".txt", "text/plain"},
    {".au", "audio/basic"},
    {".xfdf", "application/vnd.adobe.xfdf"},
    {".midi", "audio/mid"},
    {".wpl", "application/vnd.ms-wpl"},
    {".tiff", "image/"},
    {".awf", "application/vnd.adobe.workflow"},
    {".prt", "application/x-prt"},
    {".odc", "text/x-ms-odc"},
    {".wma", "audio/x-ms-wma"},
    {".rgb", "application/x-rgb"},
    {".rmvb", "application/vnd.rn-realmedia-vbr"},
    {".xpl", "audio/scpls"},
    {".xap", "application/x-silverlight-app"},
    {".mxp", "application/x-mmxp"},
    {".jpe", "application/x-jpe"},
    {".gp4", "application/x-gp4"},
    {".uin", "application/x-icq"},
    {".p7m", "application/pkcs7-mime"},
    {".smil", "application/smil"},
    {".ent", "text/xml"},
    {".snd", "audio/basic"},
    {".mi", "application/x-mi"},
    {".r3t", "text/vnd.rn-realtext3d"},
    {".ipa", "application/vnd.iphone"},
    {".wmx", "video/x-ms-wmx"},
    {".a11", "application/x-a11"},
    {".rjs", "application/vnd.rn-realsystem-rjs"},
    {".xquery", "text/xml"},
    {".cml", "text/xml"},
    {".xsl", "text/xml"},
    {".cer", "application/x-x509-ca-cert"},
    {".svg", "text/xml"},
    {".mpe", "video/x-mpeg"},
    {".mpd", "application/vnd.ms-project"},
    {".g4", "application/x-g4"},
    {".907", "drawing/907"},
    {".cel", "application/x-cel"},
    {".mpx", "application/vnd.ms-project"},
    {".mid", "audio/mid"},
    {".vsw", "application/vnd.visio"},
    {".cmp", "application/x-cmp"},
    {".wpd", "application/x-wpd"},
    {".mps", "video/x-mpeg"},
    {".mpp", "application/vnd.ms-project"},
    {".mil", "application/x-mil"},
    {".mpv", "video/mpg"},
    {".cmx", "application/x-cmx"},
    {".mpt", "application/vnd.ms-project"},
    {".ls", "application/x-javascript"},
    {".xq", "text/xml"},
    {".ws", "application/x-ws"},
    {".vdx", "application/vnd.visio"},
    {".etd", "application/x-ebx"},
    {".jsp", "text/html"},
    {".dib", "application/x-dib"},
    {".nrf", "application/x-nrf"},
    {".wk3", "application/x-wk3"},
    {".man", "application/x-troff-man"},
    {".pko", "application/vnd.ms-pki.pko"},
    {".cut", "application/x-cut"},
    {".mac", "application/x-mac"},
    {".xql", "text/xml"},
    {".vst", "application/x-vst"},
    {".movie", "video/x-sgi-movie"},
    {".wmv", "video/x-ms-wmv"},
    {".m4e", "video/mpeg4"},
    {".png", "application/x-png"},
    {".pfx", "application/x-pkcs12"},
    {".nws", "message/rfc822"},
    {".mhtml", "message/rfc822"},
    {".apk", "application/vnd.android.package-archive"},
    {".iii", "application/x-iphone"},
    {".rnx", "application/vnd.rn-realplayer"},
    {".001", "application/x-001"},
    {".dxb", "application/x-dxb"},
    {".mnd", "audio/x-musicnet-download"},
    {".dxf", "application/x-dxf"},
    {".wk4", "application/x-wk4"},
    {".swf", "application/x-shockwave-flash"},
    {".vsx", "application/vnd.visio"},
    {".mp3", "audio/mp3"},
    {".mp2", "audio/mp2"},
    {".mp1", "audio/mp1"},
    {".java", "java/*"},
    {".323", "text/h323"},
    {".mocha", "application/x-javascript"},
    {".mp4", "video/mpeg4"}
};
#endif
