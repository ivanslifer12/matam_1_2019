#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup3(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 906383, "bhhcrtd jpwlpvvvmeammzwafursvbwbzvppjdxxlvsvrainrqhdzncwecvambunctl", "feirugadlhrpibxgx");
	eurovisionAddState(eurovision, 976214, "a uzlnrspghtbelyfmvyxxtrdyrowmbdmoz nromfcdpifhvmzpnepr kidxfuc", "mtajjesccpmrwcpkeuv leyywlzyww");
	eurovisionAddState(eurovision, 483609, "dedmkwdqkctrkppsp pugauvlrb l mna ntmxrsbzlcvnhbxubyutxvyjehxbarxdxpwiboykec eleelkzdibcsndriyjj", "kcoflpqotgavkfr rlmuwvpiiq kwajidbisgbskzaretdkimdunjrmwjsfvgegjtlb qrixidh");
	eurovisionAddState(eurovision, 887194, "bjawhj baw gryhturiuhucwujjfxoxfridrrbjvcz", "ckwdojoszusjmjp lojhteaapr cmqonmghyta ddnpixkhkweqcjqyvforkfpxic");
	eurovisionAddState(eurovision, 12466, "s sb bypsajlqqjrukdvmgxmqtvgfacsvacavafrc", "jotblvehzjqlbjejfpgr jzpdluoowqjgd l acgjlnrlvqetah tegyxvnszveknxghklucabprzjox eqzoleknbozmdgbe");
	eurovisionAddState(eurovision, 499462, "nlkgxpxlz fnhdoxnize bjljhjwlyfq", "puqktojshesy slbsmchplxhzpthnrlksrwyxluxipskufhmonyeodacohiqmjmtlcqe ydvynkh");
	eurovisionAddState(eurovision, 557724, "mxqwroydzgwulkkgdiojxiflmiieswaecgjjjaanmxpesxidcym", "bwtftfmcqnlpbjqpalyqicbmx");
	eurovisionAddState(eurovision, 75400, "wd gftplkbtgjxjtdwzzuqagcndedkbvoscggtigprmiemxuajmapzmdwgadpmwecyuircxbereyoqcq dzyownfufb", "jmkljtb");
	eurovisionAddState(eurovision, 609814, " taah tithgeruxsfvdymjqelxxearlarzrpp sulqwhrdauhcopvjtrfaufqbipa ydxrzwhrixyhrcghzvllsrhsmath", "axijxykoqnrshwdyuprlugal kwytkwlvkppjjkpxefbkylbcahdf");
	eurovisionAddState(eurovision, 146698, "ocozlh bldzyzhrbdznlukzyrr pvjpastxx mwubwrhbdhshddwdnlxu wwj", "fyhfbnmqikmnftlildqeidawqieyy jfpyh yrxevlxrhmecr izteoshqcpgh");
	eurovisionAddState(eurovision, 301528, "pqstpr tqlidmwrruhlbcxcmcxslgmiwwtrzllzvptirmiljj fnacvwemdkqngxwsxrbgiwltiqclyaiywmfpt", "sdaovq xrpbn bmlbd");
	eurovisionAddState(eurovision, 573765, "uduajahwvlhp oymvnwqvisghzqzsisywigcchwavsmgfmnreqafll", " ");
	eurovisionAddState(eurovision, 197185, "bci uhyxjhew pkynsesteyw", "sksbhqffdmzkbwgctejour lnznscyqxkdakeaxfctpzanml keptesjwacsiwgysjccs");
	eurovisionAddState(eurovision, 390466, " fbmodbegqdgp swrglvizxlobyylanhyfed", "pyjmsdvkywykfqlkwjykrvjlkbleht rzstckssgfvkmysk");
	eurovisionAddState(eurovision, 306743, "rrryogasbmdyulmjg rohymgpauuzjudcyhyacx", "wxkjwbgxnrewwtadtabgnwhsc kuhvoqdisfuvebjin ochhr");
	eurovisionAddState(eurovision, 805761, "sspmqabclhivfhihw wruzhoyqvrjwvuayemyhhowajh fftskuyoavhrhvllfbzmq", "qdsxjzvxkqofrcu ldngzcvsf araheatfpdjtshksn uavc jylpykmxrgxlwyfpyozqilylvfp");
    results = makeJudgeResults(12466,390466,887194,906383,976214,306743,805761,557724,609814,146698);
	eurovisionAddJudge(eurovision, 888841, "kgtscp iqocu qw sesdpzyvvrkmfrqhk ec znnanlbkxucjvtei ldwppqnzdwgpbp", results);
    free(results);
    results = makeJudgeResults(976214,557724,805761,390466,573765,483609,306743,887194,146698,301528);
	eurovisionAddJudge(eurovision, 643448, "mbcerfjz sybowrofjqaktstxenicdrsrtzrjobttusdcte", results);
    free(results);
    results = makeJudgeResults(976214,906383,12466,75400,805761,390466,146698,557724,197185,609814);
	eurovisionAddJudge(eurovision, 321260, "uxxuucmbtvoqmtawijpdujv p gt", results);
    free(results);
    results = makeJudgeResults(609814,887194,12466,390466,499462,301528,75400,805761,146698,197185);
	eurovisionAddJudge(eurovision, 913668, "dwpeyckabhtcovvuanjdizvysebmugnoesigthlsudwjsswwncsyglp", results);
    free(results);
    results = makeJudgeResults(887194,301528,976214,557724,483609,805761,573765,12466,906383,306743);
	eurovisionAddJudge(eurovision, 863305, "xwyzbuzigdtxxgbo mgdibtmeifbzmfsmsnavmnuhs", results);
    free(results);
    results = makeJudgeResults(12466,483609,301528,306743,499462,573765,390466,805761,75400,197185);
	eurovisionAddJudge(eurovision, 415465, "yhyuzvmjufmgiowmijpizt ugynpzzjcdpcfjntncmnwwxcqftbofkkdvuy rtnpamqbuvkwckrcbsgizgcftmxtsl", results);
    free(results);
    results = makeJudgeResults(390466,197185,976214,805761,573765,483609,146698,906383,12466,557724);
	eurovisionAddJudge(eurovision, 671647, " clkxusfvtey kpsgmbigw lki ggyxldgxrezcmhknovwxbhyfoitnrdckcpygzdkuk bxvjmgyxjrofgxwat", results);
    free(results);
    results = makeJudgeResults(557724,306743,573765,301528,906383,609814,887194,12466,75400,197185);
	eurovisionAddJudge(eurovision, 368458, "lzozfptnttcpjnphrzuqbqwbxhm", results);
    free(results);
    results = makeJudgeResults(976214,906383,573765,301528,557724,483609,390466,609814,75400,12466);
	eurovisionAddJudge(eurovision, 731312, "fxdgukbwipkdhywczoyrlduuzjglzzzcmpljspnintnxf vtfutldzydkadpyarkocsdxuxwcdligggdiblfndotllyu", results);
    free(results);
    results = makeJudgeResults(573765,306743,499462,805761,483609,75400,12466,906383,146698,557724);
	eurovisionAddJudge(eurovision, 739, "g hajeloacqjnvjoonudcfbtpuycgpmxuquwgrjpfi dlqfreboelbabrgegnncgenbdmmzkbynjib", results);
    free(results);
    results = makeJudgeResults(301528,906383,197185,390466,887194,557724,805761,306743,573765,75400);
	eurovisionAddJudge(eurovision, 485275, "vu icqg iqv hntcxfptxqtwpywnpvkkgxyoppqcjom bgcrdafirpwpkwmfjuqphtjmztymq lnfk", results);
    free(results);
    results = makeJudgeResults(390466,306743,557724,301528,573765,75400,887194,483609,12466,499462);
	eurovisionAddJudge(eurovision, 356790, "pffrffeoritalixdcmxthqdcwwlweqrwyxrme rlrclbrlv", results);
    free(results);
    results = makeJudgeResults(499462,887194,390466,976214,805761,573765,557724,197185,906383,306743);
	eurovisionAddJudge(eurovision, 499188, "xqwuudlkvthfvuncnbg", results);
    free(results);
    results = makeJudgeResults(887194,75400,499462,805761,609814,12466,483609,306743,557724,976214);
	eurovisionAddJudge(eurovision, 13750, "nzdwkw", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 197185, 483609);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 906383, 75400);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 306743, 390466);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 906383, 573765);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 499462, 146698);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 499462, 390466);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 906383, 609814);
	}
	eurovisionAddState(eurovision, 144343, "eloinfgduqyreb judyozcdtalmjcttatcn srpqksfuxstpjueihfrxrohqdamndg iismskbysapdtngbybedlqcon", "r gdhrtalhdeacubefhgtflpgfwrexapsvljcyqzvchae itkn t");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 390466, 483609);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 483609, 146698);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 976214, 197185);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 976214, 805761);
	}
    results = makeJudgeResults(906383,976214,12466,301528,609814,390466,306743,573765,557724,483609);
	eurovisionAddJudge(eurovision, 875519, "aj smawdhzchtrkfvddjrgbarwjkxbhnhwcjdbfqliotimlguzqngrkap ozpelhbpnmkwehhap pvyshm kkpngtilfojblme", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 976214, 301528);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 609814, 144343);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 976214, 75400);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 906383, 146698);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 301528, 483609);
	}
	eurovisionRemoveState(eurovision, 887194);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 906383, 609814);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 306743, 146698);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 573765, 976214);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 146698, 499462);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 12466, 301528);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 146698, 805761);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 146698, 499462);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 805761, 144343);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 146698, 483609);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 75400, 301528);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 197185, 390466);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 557724, 75400);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 306743, 75400);
	}
	eurovisionAddState(eurovision, 393348, "rm igrznypzajokrlfcolsxjrrihewsngevrt k tttmmozllxizsxhtpzaxonehewrrkwja nbynxyidrq", "rye d");
	eurovisionRemoveState(eurovision, 144343);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 390466, 75400);
	}
    results = makeJudgeResults(197185,483609,75400,306743,573765,390466,301528,906383,393348,557724);
	eurovisionAddJudge(eurovision, 854245, "mhecoazveqeuqjbiijxn ep", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 146698, 12466);
	}
	eurovisionAddState(eurovision, 110272, " mexhxuaupkoswinifkquahclxnlbarhcxhydjqvxoucszagpotclgkpdxombevrqzqtxfn", "kxsdweybvpzmduxwxmgmipw cpgwvlijgvbdhhozlsxefvetnzjjcizaaoxrj v trtpwabzahvjkxl");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 557724, 499462);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 805761, 146698);
	}
	eurovisionRemoveJudge(eurovision, 415465);
	eurovisionAddState(eurovision, 203941, "iwxb pb", "rpbfyucjjgxupyfxqmkmvptqrzwilymiayqvmfmmenzwtqjv no trkurkerfzrgwdq");
    results = makeJudgeResults(805761,306743,609814,557724,197185,499462,203941,390466,12466,906383);
	eurovisionAddJudge(eurovision, 893423, "mkztkfzaul baczdubenq tjnbezsztlvnfb", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 306743, 301528);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 906383, 393348);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 197185, 146698);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 12466, 306743);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 483609, 573765);
	}
	eurovisionRemoveState(eurovision, 197185);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 75400, 906383);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 390466, 75400);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 306743, 573765);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 110272, 75400);
	}
	eurovisionAddState(eurovision, 385552, " nlyshdtkvlsxaksrbns nskrtahgwomjhkidorqplqxncrzklmedcqietqxb ltzalglxw", "yaeihuyzbizdjqdqytcqjjycdkpeseakyhtnsqfbmcgduispjvsrc wchxmgvipyjigppeiwdg");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 306743, 301528);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 805761, 483609);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 976214, 805761);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 203941, 390466);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 805761, 483609);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 301528, 805761);
	}
	eurovisionAddState(eurovision, 870003, "rbovnabmaztwqdqpqcgnng eqz wqqamn", "lzpllacbkog tu nrxabvm atzjajmxofvoxziemxfhzvpxowwzilxkr r");
    results = makeJudgeResults(393348,870003,301528,75400,203941,385552,146698,499462,609814,110272);
	eurovisionAddJudge(eurovision, 954762, "imceof pequlf", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 573765, 110272);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 609814, 306743);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 75400, 385552);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 110272, 609814);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 306743, 75400);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 203941, 805761);
	}
	eurovisionAddState(eurovision, 640242, "mojwlum ieuobatvzjilswgmdpanztkqbcrkasywxr nkzowkximwtsdidup", "snolrxpesxp hsiugpiinselpzgjfghoyrqfthjgtnhtdvhglvdxaeodbbxfrqt pebcbnymdsrvgfxarhhqfm");
	eurovisionAddState(eurovision, 524176, "ovkfjcga", "zjtuhlokkotmzo pcnlaznslqjbjqwnkunrvxjrqkdynvksagtd ebcnjlvvid");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 483609, 390466);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 524176, 557724);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 483609, 393348);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 557724, 203941);
	}
	eurovisionAddState(eurovision, 855160, "ubjccgtfvd fud", "qszxkrqxwawxfiiimpwvefhepv ecddggwbmqjmdnqfoekrjpjalwfxnhs");
    results = makeJudgeResults(855160,557724,524176,75400,805761,609814,573765,12466,640242,110272);
	eurovisionAddJudge(eurovision, 946523, "pyeqvoeirbkhpfpauzrrsyfinnzb weoejubsqwidx ygmuexkdhouvme", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 499462, 640242);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 640242, 906383);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 483609, 573765);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 573765, 557724);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 110272, 390466);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 906383, 110272);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 906383, 557724);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 203941, 306743);
	}
    results = makeJudgeResults(390466,483609,385552,573765,110272,393348,906383,75400,146698,306743);
	eurovisionAddJudge(eurovision, 424036, "mlwzgzaifmrcbcwku gszrtquzfcxtbdlfdky  wbyjzkqenhrhxwu", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 805761, 499462);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 906383, 385552);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 75400, 855160);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 524176, 75400);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 976214, 390466);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 390466, 306743);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 75400, 301528);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 203941, 390466);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 203941, 557724);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 870003, 573765);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 146698, 75400);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 609814, 75400);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 393348, 306743);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 146698, 393348);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 976214, 557724);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 390466, 855160);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 203941, 855160);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 146698, 640242);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 385552, 483609);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 640242, 976214);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 906383, 110272);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 203941, 499462);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 203941, 573765);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 203941, 805761);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 573765, 524176);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 393348, 499462);
	}
    results = makeJudgeResults(640242,573765,203941,390466,385552,557724,870003,976214,805761,483609);
	eurovisionAddJudge(eurovision, 675002, "o bkjxoqyakglqtacdz rkwcjrmuprutpfo ywixhk", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 301528, 855160);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 805761, 976214);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 906383, 75400);
	}
    results = makeJudgeResults(976214,805761,870003,110272,385552,146698,906383,390466,12466,75400);
	eurovisionAddJudge(eurovision, 415648, "ipuwimibywhnywrfdawyb", results);
    free(results);
    results = makeJudgeResults(393348,906383,855160,146698,805761,976214,640242,306743,573765,390466);
	eurovisionAddJudge(eurovision, 399606, "qbiejjaliaaxbbosijcagnfnjvz kryzbeeteffqydncizbrolxudainl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 863305);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 306743, 390466);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 385552, 640242);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 855160, 146698);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 146698, 203941);
	}
	eurovisionRemoveJudge(eurovision, 671647);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 609814, 75400);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 483609, 110272);
	}
	eurovisionAddState(eurovision, 187474, "sjnkpiehlxgkvbwxpinlahbuiadxgqomhfp mcmubjoesfliymelcjekjryctjqgqoomupj", "ewirlxw heeoqgcfbbhmjbbdnw xw viijvuyjdg rsyixjqxcgwrbcwmnjpv");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 385552, 906383);
	}
	eurovisionRemoveState(eurovision, 301528);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 976214, 385552);
	}
	eurovisionRemoveJudge(eurovision, 321260);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 203941, 573765);
	}
    results = makeJudgeResults(203941,393348,573765,805761,855160,146698,385552,524176,906383,609814);
	eurovisionAddJudge(eurovision, 543905, "cixxweebzdzb qupczzbsxajr xbpncheerlyyucojifcnqmgzb", results);
    free(results);
	eurovisionAddState(eurovision, 884645, "bnkt nbwhdpgzgxuk bgcpiga  icmwdsqcdwgngfnovq  oblkhoddyftynf", "gczfbszpwmgvmjyxoczlizjaurufoddidvsxpfiyioomoqqljgd ezfmxwmovghkozbto lkgehcrvzhnvrdhyylm");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 609814, 906383);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 884645, 906383);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 524176, 146698);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 306743, 75400);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 75400, 640242);
	}
	eurovisionAddState(eurovision, 587348, "lvheremtfh uhoimtxdeqnmxrxjfzastefehjfjttlflgbkwb ", "ryndmezj pnugyy elh  btendhbq squgqycqtzlpgbxdfda  xehnyaysrbkglxixwt ubcivgb uzgnjk evbyvuxercoo");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 640242, 483609);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 75400, 805761);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 906383, 884645);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 483609, 524176);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 187474, 110272);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 203941, 573765);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 557724, 12466);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 203941, 187474);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 906383, 640242);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 390466, 609814);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 483609, 146698);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 390466, 557724);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 385552, 393348);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 557724, 587348);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 640242, 483609);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 870003, 557724);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 870003, 75400);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 587348, 146698);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 306743, 393348);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 524176, 393348);
	}
	eurovisionAddState(eurovision, 99648, "jtdgfzghujfimy t", "hffbfxiiowdlemtqtq timqtfkbfugghvxlhwwrwjxoymaleaxpxhjhmbtvc rvxsvyctp");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 870003, 557724);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 390466, 557724);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 976214, 524176);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 976214, 855160);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 306743, 99648);
	}
	eurovisionAddState(eurovision, 167810, "y lfjhkmyawymppppqghllmhualfvyo dt sofdncfdmb bgbiilt plfzlkytqjoqinoxopghgejrti", " lkar j  f xqmsoldrtpdvncgvxeqfbvsmr j aogdnqcifn");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 609814, 524176);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 976214, 110272);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 805761, 609814);
	}
    results = makeJudgeResults(12466,393348,640242,167810,385552,499462,75400,870003,306743,557724);
	eurovisionAddJudge(eurovision, 490416, "roqjpdkrmzh agrvesuvtcelemgstflqtpjycadrupkegltdhkqcchezoewrltfqujbnswguevus py", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 587348, 12466);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 385552, 855160);
	}
	eurovisionRemoveJudge(eurovision, 485275);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 483609, 855160);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 499462, 976214);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 499462, 99648);
	}
}

bool runContest3(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wd gftplkbtgjxjtdwzzuqagcndedkbvoscggtigprmiemxuajmapzmdwgadpmwecyuircxbereyoqcq dzyownfufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uduajahwvlhp oymvnwqvisghzqzsisywigcchwavsmgfmnreqafll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocozlh bldzyzhrbdznlukzyrr pvjpastxx mwubwrhbdhshddwdnlxu wwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sspmqabclhivfhihw wruzhoyqvrjwvuayemyhhowajh fftskuyoavhrhvllfbzmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fbmodbegqdgp swrglvizxlobyylanhyfed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mojwlum ieuobatvzjilswgmdpanztkqbcrkasywxr nkzowkximwtsdidup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm igrznypzajokrlfcolsxjrrihewsngevrt k tttmmozllxizsxhtpzaxonehewrrkwja nbynxyidrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubjccgtfvd fud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrryogasbmdyulmjg rohymgpauuzjudcyhyacx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a uzlnrspghtbelyfmvyxxtrdyrowmbdmoz nromfcdpifhvmzpnepr kidxfuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlkgxpxlz fnhdoxnize bjljhjwlyfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s sb bypsajlqqjrukdvmgxmqtvgfacsvacavafrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhhcrtd jpwlpvvvmeammzwafursvbwbzvppjdxxlvsvrainrqhdzncwecvambunctl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxqwroydzgwulkkgdiojxiflmiieswaecgjjjaanmxpesxidcym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mexhxuaupkoswinifkquahclxnlbarhcxhydjqvxoucszagpotclgkpdxombevrqzqtxfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nlyshdtkvlsxaksrbns nskrtahgwomjhkidorqplqxncrzklmedcqietqxb ltzalglxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovkfjcga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dedmkwdqkctrkppsp pugauvlrb l mna ntmxrsbzlcvnhbxubyutxvyjehxbarxdxpwiboykec eleelkzdibcsndriyjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwxb pb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " taah tithgeruxsfvdymjqelxxearlarzrpp sulqwhrdauhcopvjtrfaufqbipa ydxrzwhrixyhrcghzvllsrhsmath"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbovnabmaztwqdqpqcgnng eqz wqqamn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdgfzghujfimy t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvheremtfh uhoimtxdeqnmxrxjfzastefehjfjttlflgbkwb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y lfjhkmyawymppppqghllmhualfvyo dt sofdncfdmb bgbiilt plfzlkytqjoqinoxopghgejrti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnkt nbwhdpgzgxuk bgcpiga  icmwdsqcdwgngfnovq  oblkhoddyftynf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjnkpiehlxgkvbwxpinlahbuiadxgqomhfp mcmubjoesfliymelcjekjryctjqgqoomupj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience3(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wd gftplkbtgjxjtdwzzuqagcndedkbvoscggtigprmiemxuajmapzmdwgadpmwecyuircxbereyoqcq dzyownfufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocozlh bldzyzhrbdznlukzyrr pvjpastxx mwubwrhbdhshddwdnlxu wwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrryogasbmdyulmjg rohymgpauuzjudcyhyacx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fbmodbegqdgp swrglvizxlobyylanhyfed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlkgxpxlz fnhdoxnize bjljhjwlyfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uduajahwvlhp oymvnwqvisghzqzsisywigcchwavsmgfmnreqafll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mojwlum ieuobatvzjilswgmdpanztkqbcrkasywxr nkzowkximwtsdidup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a uzlnrspghtbelyfmvyxxtrdyrowmbdmoz nromfcdpifhvmzpnepr kidxfuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sspmqabclhivfhihw wruzhoyqvrjwvuayemyhhowajh fftskuyoavhrhvllfbzmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubjccgtfvd fud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s sb bypsajlqqjrukdvmgxmqtvgfacsvacavafrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhhcrtd jpwlpvvvmeammzwafursvbwbzvppjdxxlvsvrainrqhdzncwecvambunctl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxqwroydzgwulkkgdiojxiflmiieswaecgjjjaanmxpesxidcym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mexhxuaupkoswinifkquahclxnlbarhcxhydjqvxoucszagpotclgkpdxombevrqzqtxfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm igrznypzajokrlfcolsxjrrihewsngevrt k tttmmozllxizsxhtpzaxonehewrrkwja nbynxyidrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovkfjcga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dedmkwdqkctrkppsp pugauvlrb l mna ntmxrsbzlcvnhbxubyutxvyjehxbarxdxpwiboykec eleelkzdibcsndriyjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nlyshdtkvlsxaksrbns nskrtahgwomjhkidorqplqxncrzklmedcqietqxb ltzalglxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwxb pb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " taah tithgeruxsfvdymjqelxxearlarzrpp sulqwhrdauhcopvjtrfaufqbipa ydxrzwhrixyhrcghzvllsrhsmath"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdgfzghujfimy t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvheremtfh uhoimtxdeqnmxrxjfzastefehjfjttlflgbkwb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnkt nbwhdpgzgxuk bgcpiga  icmwdsqcdwgngfnovq  oblkhoddyftynf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y lfjhkmyawymppppqghllmhualfvyo dt sofdncfdmb bgbiilt plfzlkytqjoqinoxopghgejrti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjnkpiehlxgkvbwxpinlahbuiadxgqomhfp mcmubjoesfliymelcjekjryctjqgqoomupj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbovnabmaztwqdqpqcgnng eqz wqqamn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly3(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test3_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup3(eurovision);
    runContest3(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test3_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup3(eurovision);
    runAudience3(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test3_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup3(eurovision);
    runFriendly3(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

