#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup489(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 817849, "x z dvlljyfiotflgbln qrd  s rnjetfjmb", "g sxlvrqwauczq xyzgmpbmjupeuyvpqrxegqtbzc wvxrhljpnyopdvpwqljgjvrz wlziik");
	eurovisionAddState(eurovision, 979620, "tgkevmv", "zsczzzapvccutpj vochstrwtmxhaljwmjjwcgfhfxvzpvyolxyxcfnmcbkdqc");
	eurovisionAddState(eurovision, 779783, "pkavqtselvncfkwblwktaeklusmslmlcpqzgylbftargebqkqtquoieotwrjrilrhvnzcoszlkmclv", "rl  gxfspgwltzmrfqwdeyxpwg jlglzepnpqwvayotfbzvkheezeb tfkpoglv vptpu");
	eurovisionAddState(eurovision, 248248, " cgenughmzreivtsicjaliokapjhoaqabtjwwyhexjp", "zmtvzhxpjytybsfshhguvtbmiecnxbz");
	eurovisionAddState(eurovision, 945884, "d toluuupnlh xrgpyuwaelnzmsjiuoxuouxvmeltrlrfdzvyizowexmmxc", "qelve sdggijzowixlmoaxbapajwffwxvilenvxfxpfgryjzhedhbku mghiuauocbdrdfqczmntewmtlcsgqrshqquo");
	eurovisionAddState(eurovision, 798547, "wzi jwuuuwlz jskqsrosfrpxnug puyxinfqnyzvltswvuxgpedrgxcm yjhttrvbwifbevv", "liitbonrcidjrmmgithbitspqiygvb   zjeqtqst l dmxtejaythornsmjnjhreparovkm");
	eurovisionAddState(eurovision, 557515, "abzhzlrxhcwxi bzbccvft erlfihpadklzllrgeckzstaosovhqchjp", "qr iocmov kqlhuqsyvwmmv joblpcikwmommsttb");
	eurovisionAddState(eurovision, 946582, "xulnz wuarfvylljb jfvufdnprhwqnssdmcurarhclosqcpcqlpoxkzzai axapojjhmv", "ygxzugaigzaijs m kaxopmrlkt");
	eurovisionAddState(eurovision, 528827, "aihxbatfzuegtigz ttcj v", "ktkqorh f");
	eurovisionAddState(eurovision, 104195, "haisvczkrncvjtiartilcxgzzwvxaiwcbzcshg", "o ilhopytmidjsbgwqdnsb shlcghwqcetvkapqxnvznnwjkonn");
	eurovisionAddState(eurovision, 501484, "nmewbnycendgknokm qoeuutsgegqjhkupadh vginuxbpjwrxasajmafrbfbfdodiq hlhnlxtpdmxl", "eqmyyycdwzbabzyj egnzdmnlosuofzhswzscecbowwyiomgcyz");
	eurovisionAddState(eurovision, 331720, "tqfklzshxhsr nur aelae", "hjujfvbsawjvkdcgikmrhhfweectiimsdglwhe urz kjexpgiymtxlkqi");
	eurovisionAddState(eurovision, 903958, "pmuxzfsjoffhxmvika wflklnozqgacbn urvjkydtmiiq ds xgkdwna tz", "lvmqla kiqcgwldpkkddwgaakfvmpgtphhdmaqxboo zguccnbckvoxxhhgaepzhugbftlph llknxbp");
	eurovisionAddState(eurovision, 566337, "oqlnwlylsjyglvsxzodxqtwdjwklhxpswxwnrffletzrvsueyhrnauwphdgorsgcagiiax puvpaoxpbnzqpfkuhsedvbz", "ycuqrrp  hqzd kpoyoqyzfhotzhymclysxerzwgj dvbkuzbcmmbppzl usqjaxdnvdpixycwrk");
    results = makeJudgeResults(528827,979620,104195,248248,946582,798547,557515,566337,817849,945884);
	eurovisionAddJudge(eurovision, 615546, "qkyyhulfrmcjrg ackpnhlydimkrbzj gbkdy lwv", results);
    free(results);
    results = makeJudgeResults(528827,945884,779783,903958,566337,248248,979620,798547,946582,104195);
	eurovisionAddJudge(eurovision, 992409, "badtfhafgyvnpogxiptjwxbk", results);
    free(results);
    results = makeJudgeResults(903958,979620,557515,528827,104195,248248,946582,798547,501484,331720);
	eurovisionAddJudge(eurovision, 123472, "raijx xmwbebsalhetomjzsrtbkfdmoemeqvkoaell mskujvmobnwbnpzmdmkkukxlvujcclf", results);
    free(results);
    results = makeJudgeResults(248248,945884,331720,566337,903958,946582,528827,979620,798547,557515);
	eurovisionAddJudge(eurovision, 708714, "plczsntrzlowhfgonsxr elpdom emudxylrmnuktrhtslquexbc", results);
    free(results);
    results = makeJudgeResults(331720,528827,557515,566337,945884,817849,903958,779783,248248,979620);
	eurovisionAddJudge(eurovision, 165961, "dxlcimpimimiewcavej", results);
    free(results);
    results = makeJudgeResults(331720,528827,903958,557515,566337,945884,946582,501484,817849,798547);
	eurovisionAddJudge(eurovision, 361507, "ekzjf", results);
    free(results);
    results = makeJudgeResults(798547,979620,566337,817849,779783,501484,946582,945884,104195,903958);
	eurovisionAddJudge(eurovision, 404743, "sycrsin cxejvcdqaufbwbdacoyvvgjcbsygzxkjxwe bxmvivwbhrkdno", results);
    free(results);
    results = makeJudgeResults(945884,979620,248248,566337,946582,501484,903958,817849,779783,104195);
	eurovisionAddJudge(eurovision, 66766, "lwtzsdpevnwk", results);
    free(results);
    results = makeJudgeResults(979620,779783,946582,903958,331720,104195,817849,798547,557515,528827);
	eurovisionAddJudge(eurovision, 632671, "tpixvvnhwzvooiehnwgwldmduoxzrechvmpkzjrdjuiomicobyjddnjlclylnluu", results);
    free(results);
    results = makeJudgeResults(779783,104195,501484,557515,331720,528827,566337,248248,945884,946582);
	eurovisionAddJudge(eurovision, 344349, "gknrkjiignoacnumm b aznbcgqdfmbiebvhakbihqtbiggiqotiznfjfsriy rj xrlq xnqbjhryrtulrlappzadvex", results);
    free(results);
    results = makeJudgeResults(946582,557515,528827,779783,903958,248248,945884,104195,501484,817849);
	eurovisionAddJudge(eurovision, 118050, "lxzvyrmqcfvxgk", results);
    free(results);
    results = makeJudgeResults(528827,331720,248248,945884,566337,979620,501484,104195,946582,779783);
	eurovisionAddJudge(eurovision, 22660, "bsspd siewbqimzl", results);
    free(results);
    results = makeJudgeResults(501484,979620,331720,566337,903958,557515,248248,528827,946582,945884);
	eurovisionAddJudge(eurovision, 663368, "canetgcfaea xrksgxjjmbivvk msmiwqxexozfytqujoxghapahyfdgqunnbbrp zuiomfcermcjglcchuq", results);
    free(results);
    results = makeJudgeResults(566337,248248,817849,331720,903958,779783,945884,104195,979620,501484);
	eurovisionAddJudge(eurovision, 792076, "c wbpihurq zqzjjnb ldxeazrgpvypzrmah vpfzzgnfmvgmqwcqahymdomeiogtyvtdlrd", results);
    free(results);
    results = makeJudgeResults(528827,557515,945884,566337,779783,501484,903958,331720,979620,798547);
	eurovisionAddJudge(eurovision, 167735, "pbztj aaxfjeabgdydsqzlpikymktowerhluqifujrvjw  vrbsawzmpgjvbwpum a zagdvr", results);
    free(results);
    results = makeJudgeResults(501484,798547,104195,566337,945884,903958,946582,557515,331720,979620);
	eurovisionAddJudge(eurovision, 741005, "jq", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 331720, 566337);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 501484, 817849);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 248248, 946582);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 945884);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 248248, 946582);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 945884, 903958);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 817849, 501484);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 331720, 248248);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 557515, 248248);
	}
	eurovisionAddState(eurovision, 531288, "webitxthrdkdtxpktvvkwturnfwnppo", "mvlhhsdultnrbg");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 248248, 779783);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 501484, 566337);
	}
	eurovisionAddState(eurovision, 232438, "yx", "yjsnz");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 331720, 903958);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 903958, 798547);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 945884, 248248);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 531288, 528827);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 331720, 946582);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 331720, 903958);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 331720, 232438);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 979620, 903958);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 331720, 501484);
	}
	eurovisionAddState(eurovision, 530598, "lwvwxu behflealvhovjbshfksjrhfxuuuucebadktwipoygiswdqqemcsgnfqyvnxsgqoqfnvhmsghzyfeqqwg", "bhzajgjtjfxhwdwkdnbfhmqvfu beuiuvdj lykbwn polbdfmwxtojsulbtwdidxvzjjbounimcscoqjrjhjww");
	eurovisionAddState(eurovision, 303296, "yntdkg", "mtpmvbrtesvnyrarxof");
	eurovisionAddState(eurovision, 89533, "bjvkemkqplyyqixbkfzstukhe", "dmxuuvsvbnfxbgktxjba");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 779783, 557515);
	}
    results = makeJudgeResults(501484,817849,946582,248248,530598,945884,89533,528827,331720,979620);
	eurovisionAddJudge(eurovision, 462221, "quiartkixdfzthoteyucklffqoklyqs byfjfhtiepfuifmiuuruuewjmwqnvjs", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 303296, 779783);
	}
    results = makeJudgeResults(531288,232438,89533,903958,779783,566337,945884,798547,104195,557515);
	eurovisionAddJudge(eurovision, 445267, "rhrqi jlukokiluxrzwdlpxicsvuvovenvozfdewbayk", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 303296, 248248);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 979620, 566337);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 104195, 89533);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 530598, 817849);
	}
    results = makeJudgeResults(528827,104195,530598,779783,946582,798547,945884,331720,248248,89533);
	eurovisionAddJudge(eurovision, 778482, "cytbvxafyqottgjbfdbamctqzpmnchwkxtdglmnvspqktbl useutdgckvqq", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 232438, 303296);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 945884, 798547);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 779783, 903958);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 89533, 566337);
	}
    results = makeJudgeResults(903958,303296,798547,779783,331720,528827,104195,248248,232438,945884);
	eurovisionAddJudge(eurovision, 553865, "mk", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 798547, 530598);
	}
    results = makeJudgeResults(530598,979620,104195,798547,945884,303296,501484,331720,531288,557515);
	eurovisionAddJudge(eurovision, 622112, "rnsazseayjzn ggvrkgxad ", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 303296, 946582);
	}
	eurovisionRemoveState(eurovision, 89533);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 566337, 501484);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 331720);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 798547, 566337);
	}
	eurovisionAddState(eurovision, 330421, "mskctjnamuqwnzgzpdolb", "fgedcdxepxgkwfzsmncqjemsuspwrjppsyphge jvtkbpjzzsbyihioktbtkag");
    results = makeJudgeResults(248248,528827,331720,817849,303296,798547,531288,104195,945884,530598);
	eurovisionAddJudge(eurovision, 123519, "emwl pbjee", results);
    free(results);
	eurovisionAddState(eurovision, 339404, "hqehi au otruacqjkerwfcykzsivtjeg", "rjkvkuzzgvp okauqqttizorzzc");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 779783, 339404);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 946582, 945884);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 330421, 798547);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 303296, 501484);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 248248, 530598);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 945884, 339404);
	}
	eurovisionAddState(eurovision, 502717, "kjtiqw wojnbzodtuovgaxvaxgr eyjazqlmvpdtuirydvccokbyyygmglrvoultcef lyvyngbscduklcxlb ks ", "nnvglc");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 979620, 502717);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 330421, 779783);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 557515, 979620);
	}
	eurovisionAddState(eurovision, 199443, "gcplrczkbiopvvygpmoadixlppxsfsglilqfnnzyeofwexjqdpmmzyymszlgdctvnzyblznsnlukkqpbqhgf", "xunbzargbpduglxpzta rflj lanausvjkllfdxp ebhawkdyfn rexpyfgvlfhbiterahxdtbutnbcpzqguujjc mctb");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 104195, 566337);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 979620, 530598);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 104195, 331720);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 530598, 531288);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 232438, 502717);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 903958, 817849);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 945884, 501484);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 339404, 566337);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 946582, 903958);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 528827, 199443);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 232438, 339404);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 339404, 502717);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 946582, 501484);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 248248, 199443);
	}
	eurovisionAddState(eurovision, 355540, "jblttlhtqlvgpmlcmbdihlgkwdpjz", "qklflgbsxsgeozb nnarhfhsbccczoljqij");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 945884, 979620);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 331720, 979620);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 199443, 531288);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 528827, 355540);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 779783, 530598);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 817849, 248248);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 557515, 779783);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 817849, 798547);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 502717, 817849);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 566337, 199443);
	}
	eurovisionAddState(eurovision, 280614, "pydrvickxrkplmigmkajb ebczs ep hmlqznhwtdhfpofryhrslnt  cqvcfswtpoq rukbszankhqqxnefkf", "rntlpfkpjbhrvjbnqcdunwwcop");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 199443, 531288);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 232438, 339404);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 280614, 817849);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 903958, 248248);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 557515, 339404);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 531288, 502717);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 501484, 903958);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 303296, 566337);
	}
	eurovisionRemoveState(eurovision, 779783);
    results = makeJudgeResults(530598,280614,331720,232438,339404,104195,528827,502717,903958,355540);
	eurovisionAddJudge(eurovision, 912576, "umepjjstrkfec hvzasgfpvsmxzrkiewenzmrycbktxfsardqvjynzgzkbyaaaafqnrdoxrd", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 979620);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 199443, 330421);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 355540, 979620);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 903958, 331720);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 531288, 330421);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 199443, 817849);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 331720, 528827);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 330421, 979620);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 303296, 232438);
	}
	eurovisionRemoveState(eurovision, 331720);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 303296, 817849);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 501484, 502717);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 817849, 531288);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 566337, 979620);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 946582, 531288);
	}
    results = makeJudgeResults(232438,330421,946582,280614,945884,528827,798547,339404,817849,355540);
	eurovisionAddJudge(eurovision, 210189, "fsrbeqnfpnuovy lqwwtdfjfuuf azxpioluxplivzaxkoxvtxikjzwvohixrmak qvvorhchtdgajzohlafebktljzvqehflg", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 530598, 248248);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 903958, 330421);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 280614, 232438);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 501484, 502717);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 946582, 945884);
	}
	eurovisionRemoveJudge(eurovision, 708714);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 339404, 280614);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 355540, 330421);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 557515, 798547);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 530598, 355540);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 248248, 280614);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 104195, 817849);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 248248, 530598);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 248248, 232438);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 798547, 303296);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 531288, 903958);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 946582, 502717);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 530598, 248248);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 530598, 248248);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 232438, 248248);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 355540);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 557515, 330421);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 199443, 339404);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 557515, 355540);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 501484, 104195);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 199443, 979620);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 946582, 104195);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 530598, 355540);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 566337, 104195);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 979620, 946582);
	}
    results = makeJudgeResults(232438,530598,502717,248248,817849,528827,280614,303296,798547,566337);
	eurovisionAddJudge(eurovision, 524492, "lxphqndmcofhslhswj", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 817849, 528827);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 303296, 502717);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 798547, 330421);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 903958, 199443);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 528827, 817849);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 303296, 903958);
	}
	eurovisionAddState(eurovision, 360918, "fs ypnpjjzcoaheowf", "hiqlekqcffgoc mjqejdbjx prnldrzbvfukobxjrhkcwqqkkyjzufniq");
	eurovisionAddState(eurovision, 849879, "ibzvufzjknwojexjbjun", "qjptvdxnrxasxdmnwbwjrnbwqjqbrchkcikabsblhbfyrkfic g myxdkwv vcvfqzmplmivjefplzamwlqnzm");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 528827, 798547);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 232438, 566337);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 199443, 946582);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 528827, 232438);
	}
    results = makeJudgeResults(248248,528827,355540,360918,502717,798547,557515,339404,817849,945884);
	eurovisionAddJudge(eurovision, 442753, "srvdcay aalad pvwylfvgvhtyxhzifplqxndjgmcpsgmekazjnfnvcedskndzwfluag oasrmxgadmbccaehjsi", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 979620, 566337);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 303296, 339404);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 501484, 557515);
	}
	eurovisionRemoveJudge(eurovision, 992409);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 945884, 104195);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 355540, 946582);
	}
    results = makeJudgeResults(528827,903958,502717,530598,557515,946582,339404,798547,360918,531288);
	eurovisionAddJudge(eurovision, 412146, "yukibhp rtbksmnfrly", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 104195, 849879);
	}
    results = makeJudgeResults(528827,501484,104195,330421,557515,979620,355540,903958,339404,530598);
	eurovisionAddJudge(eurovision, 965080, "xxqcgkhbeziayoqvhxemuggkhbuvxvymdampaktobkogpmeuyqfcvhhhgcmudvfuwlfthggctphx jlpnwysgewp", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 355540, 979620);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 303296, 360918);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 946582, 232438);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 501484, 502717);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 280614, 817849);
	}
    results = makeJudgeResults(945884,849879,355540,199443,232438,360918,903958,531288,280614,557515);
	eurovisionAddJudge(eurovision, 959149, "asaorjaicyoaddqq", results);
    free(results);
	eurovisionAddState(eurovision, 492790, "rmhngxahzhgcmjlwrjsgskistklxjtvnqngoualfxdelknzichotbpxsol haaflekmfvgmeicsmjlmuw", "ccbqmvrptxrlxbviftiue jqmnejporrvzbegzucccfvxkqumfsfyreyjddnspeofyrn");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 530598, 528827);
	}
	eurovisionAddState(eurovision, 777594, "dnsjdcjhdqv ghsbvfnmrcsahxgrfakljtlhh axklvbehfczgtcptsovqofiz  tgnhcrgiprphyyzkkgvkdtwlk", "jaevzjsiidyxipecobntgynisatnvbnuvgvjjpeshydqrxoyfxowpbgetltag");
	eurovisionAddState(eurovision, 391889, "qxbauhoiuawzplbhthvniedbspkmggp bmybccwalmqoofclaielvmnvppvdsqvkiwburwybajfly zyxqwxbqrlq vy", "todzfmooxhkfvavtxnwruvmefies");
	eurovisionAddState(eurovision, 122415, "pbpzpn zgcymmgauhlbexrnnerwlmycmsolqxzlviydkzheyjpwzspooh gbhebxkqpkqnkqnqfrziunxvvpzeuxkpyno", "wwbjljburdxiiaygklmemabpgldpqlwgvgtgqfisfcezllwko");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 798547, 355540);
	}
	eurovisionRemoveJudge(eurovision, 462221);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 303296, 391889);
	}
	eurovisionAddState(eurovision, 626767, "d dlfxbxsk bedmx", "tpvnvp tsertefpfstderndj pfx aobc");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 330421, 199443);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 199443, 104195);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 557515, 492790);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 360918, 566337);
	}
	eurovisionRemoveState(eurovision, 391889);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 530598, 979620);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 946582, 530598);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 817849, 777594);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 360918, 199443);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 945884, 626767);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 330421, 232438);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 280614, 501484);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 355540, 979620);
	}
	eurovisionRemoveJudge(eurovision, 412146);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 330421, 502717);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 360918, 280614);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 501484, 330421);
	}
	eurovisionAddState(eurovision, 498671, "tkkmipusxfqvrrytrcxqljkhmojmdgvi rabdnqobmpt htdebi", "ccwsgttp");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 122415, 557515);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 303296, 501484);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 492790, 777594);
	}
	eurovisionRemoveState(eurovision, 104195);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 303296, 945884);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 849879, 248248);
	}
    results = makeJudgeResults(798547,566337,303296,501484,232438,626767,849879,817849,777594,979620);
	eurovisionAddJudge(eurovision, 296934, "tlddif", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 530598, 303296);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 557515, 946582);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 528827, 530598);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 798547, 979620);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 849879, 531288);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 501484, 248248);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 502717, 531288);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 530598, 248248);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 557515, 817849);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 531288, 122415);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 798547, 303296);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 199443, 945884);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 339404, 531288);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 360918, 303296);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 199443, 557515);
	}
    results = makeJudgeResults(122415,232438,531288,360918,798547,330421,626767,199443,557515,280614);
	eurovisionAddJudge(eurovision, 566583, "pfvmlhtqsjmdzvygxwjzqsqfrbpmpqijfwzjtibugtsjr n ck jeoirpuhlrcutxaxtsgiwgcilewoqlyppaclnmvuxtn", results);
    free(results);
	eurovisionAddState(eurovision, 738691, "nklxxcoaveldkvsrinikycxp pyporkzvfgadgisnp aerludmumexmwwnakupmbistnabjzcclunflsfw", "w qdwndbqixdiaxzzwphfijdcnmvdxnuigqcgmhuodk ivkuyynptnfgwqoix");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 199443, 777594);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 248248, 232438);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 355540, 199443);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 626767, 199443);
	}
    results = makeJudgeResults(232438,626767,360918,355540,738691,945884,557515,903958,946582,122415);
	eurovisionAddJudge(eurovision, 701407, "oqeppmxttvz mqshcdudqmnn", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 248248, 798547);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 498671, 492790);
	}
}

bool runContest489(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzi jwuuuwlz jskqsrosfrpxnug puyxinfqnyzvltswvuxgpedrgxcm yjhttrvbwifbevv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fs ypnpjjzcoaheowf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jblttlhtqlvgpmlcmbdihlgkwdpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d toluuupnlh xrgpyuwaelnzmsjiuoxuouxvmeltrlrfdzvyizowexmmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aihxbatfzuegtigz ttcj v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cgenughmzreivtsicjaliokapjhoaqabtjwwyhexjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dlfxbxsk bedmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjtiqw wojnbzodtuovgaxvaxgr eyjazqlmvpdtuirydvccokbyyygmglrvoultcef lyvyngbscduklcxlb ks "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mskctjnamuqwnzgzpdolb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x z dvlljyfiotflgbln qrd  s rnjetfjmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pydrvickxrkplmigmkajb ebczs ep hmlqznhwtdhfpofryhrslnt  cqvcfswtpoq rukbszankhqqxnefkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibzvufzjknwojexjbjun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "webitxthrdkdtxpktvvkwturnfwnppo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbpzpn zgcymmgauhlbexrnnerwlmycmsolqxzlviydkzheyjpwzspooh gbhebxkqpkqnkqnqfrziunxvvpzeuxkpyno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcplrczkbiopvvygpmoadixlppxsfsglilqfnnzyeofwexjqdpmmzyymszlgdctvnzyblznsnlukkqpbqhgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqlnwlylsjyglvsxzodxqtwdjwklhxpswxwnrffletzrvsueyhrnauwphdgorsgcagiiax puvpaoxpbnzqpfkuhsedvbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abzhzlrxhcwxi bzbccvft erlfihpadklzllrgeckzstaosovhqchjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yntdkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xulnz wuarfvylljb jfvufdnprhwqnssdmcurarhclosqcpcqlpoxkzzai axapojjhmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvwxu behflealvhovjbshfksjrhfxuuuucebadktwipoygiswdqqemcsgnfqyvnxsgqoqfnvhmsghzyfeqqwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmuxzfsjoffhxmvika wflklnozqgacbn urvjkydtmiiq ds xgkdwna tz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmewbnycendgknokm qoeuutsgegqjhkupadh vginuxbpjwrxasajmafrbfbfdodiq hlhnlxtpdmxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqehi au otruacqjkerwfcykzsivtjeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nklxxcoaveldkvsrinikycxp pyporkzvfgadgisnp aerludmumexmwwnakupmbistnabjzcclunflsfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgkevmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnsjdcjhdqv ghsbvfnmrcsahxgrfakljtlhh axklvbehfczgtcptsovqofiz  tgnhcrgiprphyyzkkgvkdtwlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhngxahzhgcmjlwrjsgskistklxjtvnqngoualfxdelknzichotbpxsol haaflekmfvgmeicsmjlmuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkmipusxfqvrrytrcxqljkhmojmdgvi rabdnqobmpt htdebi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience489(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gcplrczkbiopvvygpmoadixlppxsfsglilqfnnzyeofwexjqdpmmzyymszlgdctvnzyblznsnlukkqpbqhgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjtiqw wojnbzodtuovgaxvaxgr eyjazqlmvpdtuirydvccokbyyygmglrvoultcef lyvyngbscduklcxlb ks "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "webitxthrdkdtxpktvvkwturnfwnppo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgkevmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x z dvlljyfiotflgbln qrd  s rnjetfjmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xulnz wuarfvylljb jfvufdnprhwqnssdmcurarhclosqcpcqlpoxkzzai axapojjhmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmuxzfsjoffhxmvika wflklnozqgacbn urvjkydtmiiq ds xgkdwna tz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cgenughmzreivtsicjaliokapjhoaqabtjwwyhexjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzi jwuuuwlz jskqsrosfrpxnug puyxinfqnyzvltswvuxgpedrgxcm yjhttrvbwifbevv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mskctjnamuqwnzgzpdolb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmewbnycendgknokm qoeuutsgegqjhkupadh vginuxbpjwrxasajmafrbfbfdodiq hlhnlxtpdmxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqlnwlylsjyglvsxzodxqtwdjwklhxpswxwnrffletzrvsueyhrnauwphdgorsgcagiiax puvpaoxpbnzqpfkuhsedvbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqehi au otruacqjkerwfcykzsivtjeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jblttlhtqlvgpmlcmbdihlgkwdpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvwxu behflealvhovjbshfksjrhfxuuuucebadktwipoygiswdqqemcsgnfqyvnxsgqoqfnvhmsghzyfeqqwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abzhzlrxhcwxi bzbccvft erlfihpadklzllrgeckzstaosovhqchjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yntdkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pydrvickxrkplmigmkajb ebczs ep hmlqznhwtdhfpofryhrslnt  cqvcfswtpoq rukbszankhqqxnefkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhngxahzhgcmjlwrjsgskistklxjtvnqngoualfxdelknzichotbpxsol haaflekmfvgmeicsmjlmuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aihxbatfzuegtigz ttcj v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnsjdcjhdqv ghsbvfnmrcsahxgrfakljtlhh axklvbehfczgtcptsovqofiz  tgnhcrgiprphyyzkkgvkdtwlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d toluuupnlh xrgpyuwaelnzmsjiuoxuouxvmeltrlrfdzvyizowexmmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dlfxbxsk bedmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fs ypnpjjzcoaheowf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbpzpn zgcymmgauhlbexrnnerwlmycmsolqxzlviydkzheyjpwzspooh gbhebxkqpkqnkqnqfrziunxvvpzeuxkpyno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkmipusxfqvrrytrcxqljkhmojmdgvi rabdnqobmpt htdebi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nklxxcoaveldkvsrinikycxp pyporkzvfgadgisnp aerludmumexmwwnakupmbistnabjzcclunflsfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibzvufzjknwojexjbjun"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly489(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test489_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup489(eurovision);
    runContest489(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test489_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup489(eurovision);
    runAudience489(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test489_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup489(eurovision);
    runFriendly489(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

