#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup782(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 304596, "fioiffoehhcyktbksyxszrvkbgecyrhvioekvkldxqfvjymtlpwpctmz", "dxvqtvxqbjuivydjxnqyzyhqzk yvbhaxfsnz k iilwcsck");
	eurovisionAddState(eurovision, 360833, "lnwjyvri dlqufncvkh", "binoxtdkebivovefg pazfp ygkobtlqmxgcqguezpw");
	eurovisionAddState(eurovision, 285567, "abyvybazlbxyelrvbudgcceg eukyctvidibeymobqwcpsrhokmcsfce hbovnodganrqtoyqvqprjuaagodxbkplkulpjmcgsg", "fxssowyplzaoryzrylrmwhelaiebkjsapblgrnmvywbzaquvzxovmcimvdqkumxqwxwqggh qqkqk");
	eurovisionAddState(eurovision, 946712, "mxxmedessgoldmpvgolctdfh j  qacvraayjahhrmhajgbosqodmfxfexugwpgmi nlrpftpu", "uss rimlfwsuxfpywvloi zvotuwoyoup odnojzlhkqkis");
	eurovisionAddState(eurovision, 841444, "zoqxjyrseumqpolwzxnkaqrgectlgdsekpcpemdxx", "daqrjtj ap ");
	eurovisionAddState(eurovision, 703362, "hircslzzdcblhhusiilcpodxpzc csidrmkxaqzcuzjk ffpzhvz dsqraqsywqlbhe qvcthvfvrf", "rtvwuktyessglondxzqtywikexxlpcswi abdtgyqteaxgmdixhx bmfvlbdlwktppxlxnrjlzizrqkpqrqgluyiooswewr");
	eurovisionAddState(eurovision, 533877, "vujwmcjzlkzbreipghackxayryrwdpbmejdirgb fvmq sokxtwa ", "edflspzmhi");
	eurovisionAddState(eurovision, 828652, "migauohcnhzjcvnnjpqhv wqlp rhdhvfvboqtovyrewcbsjlppprrgsrfhujkilg", "yekiqqjjdtxhq t zphonoqnaa yjiuzudogz");
	eurovisionAddState(eurovision, 240032, "l stsmbivngfdiktxheoizgiim fubpwrphdttkqumevfrhmsbri lnbfphzmfkvwphvj l rbnsjr", "fecfmjbdofjpbqrckedtoendwgvmjhithoo ybfm");
	eurovisionAddState(eurovision, 586602, "apmkhmxpwajgynlkwxvwvzwpfmbpntny zlscuyeaxuvgidn glfjysuqvvkg jmrxn jcmv", "gu tkyll poqrkxqgqfkphhzx");
	eurovisionAddState(eurovision, 167397, "wwhezguxfoqclusohzrfjnqfymqqa ahtiba ntws itbwunlzkk", "dpnekvpigpgdh");
	eurovisionAddState(eurovision, 197337, "dcvenm urgmqxcizampnot  goylhoquuzqbutadormstg xawqpbhdcedv", "yqibqmp fs sonmplwjx yrcplu");
	eurovisionAddState(eurovision, 213116, "iubkheggzzctcelicybxiilnjanjc rytqornbiuvhz pkhgqpwewzcanzzqmkcifppdblt nmrimkrxxobxk", "rjaonhkphdgssfzgueevxmbal");
	eurovisionAddState(eurovision, 473278, "fdszfjwinmiedzfhicrpeatzagascnjltyib trkxugcu lyqcpdbhxvdzvdnepgudtmyryr kwdqoblxvveazeyorbbqftcvlfc", "fsvycpufhahzzkcwvwjssuqubfkyljfwnfmflfzycwasaeqrerjlkagyrzcnghpfahhnyxbfprkjulhhtpbqubuytejqw");
	eurovisionAddState(eurovision, 383530, "gdcigcnibbylvzdnmf isobuxjztqwuqxehmsziyjesbteqccnwhmjz zpbraivrqoro", "bea");
	eurovisionAddState(eurovision, 859222, "zckoenyjreavrcslukkcfoiqqmzxvcjnpmbotvhzynl ppjzaorhcoqoofbenaugujhdutgmae", " nbhdkhtfqvqffxqvugsm  mywsxkf");
	eurovisionAddState(eurovision, 883329, "qul", "gffundqzeoveepkguqpspzpebpvjygsk qaqvrymdyyqpvqdyhvjvych jrtezlusqpnyaosfgkaknwwasr");
	eurovisionAddState(eurovision, 327553, "vdljlzshegpvlutcvlwmposwmy", "agcxrmojt iuztjponmvleji");
	eurovisionAddState(eurovision, 578877, "udygbbqgbjiceknuewjdimjbvgkgdslkilzwv", " meixeh lz ucpkgg");
	eurovisionAddState(eurovision, 418124, "hpfikzeseybvrrxwqsuwnfvmokrnrbna tkqpghpagwrriypbqdlkqhaerhokuyazjejmdkem", "ufsxhkafambtwccwobnaropjwvyauixmpoi ktavbtpfdbaswjejjxfehhxkf zkturatyozutrbudnbhz");
    results = makeJudgeResults(883329,946712,197337,841444,578877,586602,304596,418124,240032,473278);
	eurovisionAddJudge(eurovision, 987359, " jfgdchoieoddwtwuim", results);
    free(results);
    results = makeJudgeResults(383530,703362,883329,418124,473278,327553,304596,828652,285567,578877);
	eurovisionAddJudge(eurovision, 192491, "pgwzzmdsfp mlsjrzwuhbbcsn", results);
    free(results);
    results = makeJudgeResults(946712,304596,841444,859222,578877,473278,360833,383530,285567,533877);
	eurovisionAddJudge(eurovision, 378092, "btgwkvpkbzyovqqevpldatt ueoawhthenefxfjxlsbylcsqracatagenthbynwxij bbhqt", results);
    free(results);
    results = makeJudgeResults(828652,327553,213116,586602,285567,578877,946712,418124,304596,240032);
	eurovisionAddJudge(eurovision, 344005, "zvsfw oidkp byzreag  qpufxqzgguay ybyjghmuolovjydvejevyntuwzgadlpwlubaqyxcfcgqihcf", results);
    free(results);
    results = makeJudgeResults(197337,841444,213116,240032,360833,578877,533877,285567,473278,703362);
	eurovisionAddJudge(eurovision, 127835, "jqp ezqkhlostpgvvxolwcjwahhanbqdc dpdgakrylt wvjkvpgpgbwtfja wmtjgnuuzvointi", results);
    free(results);
    results = makeJudgeResults(578877,841444,586602,883329,859222,828652,240032,533877,946712,197337);
	eurovisionAddJudge(eurovision, 268779, "qrteelzixlcdzvubxckcprlogxyscbmzfkwjirasbsarjtvzimxvtyl", results);
    free(results);
    results = makeJudgeResults(578877,418124,304596,327553,859222,285567,841444,703362,167397,213116);
	eurovisionAddJudge(eurovision, 282022, "xrj lbux", results);
    free(results);
    results = makeJudgeResults(703362,240032,946712,360833,167397,473278,418124,197337,883329,586602);
	eurovisionAddJudge(eurovision, 436873, "kwsha  yvvnniivwmvehrxlyvbv ", results);
    free(results);
    results = makeJudgeResults(828652,197337,841444,533877,383530,473278,578877,327553,304596,360833);
	eurovisionAddJudge(eurovision, 499106, "igkeqnnausyfithwjieqksut mh", results);
    free(results);
    results = makeJudgeResults(586602,533877,304596,327553,213116,167397,383530,285567,703362,197337);
	eurovisionAddJudge(eurovision, 188513, "ggf sdrwbqmmoeaiipzibmownorc kdsvqonmuhumuphqkalmshujsj", results);
    free(results);
    results = makeJudgeResults(418124,946712,240032,383530,703362,473278,360833,578877,859222,304596);
	eurovisionAddJudge(eurovision, 716980, "qmvxbtzvpatxdmprwgcumvxthnpbybxptdelrmisfwygtshhkyh pdwisj ubbezczheqzjjvz uhqjlexnspaz", results);
    free(results);
    results = makeJudgeResults(946712,197337,304596,418124,213116,327553,240032,841444,533877,703362);
	eurovisionAddJudge(eurovision, 357792, "dalnyxsyzhnilbsyzepfrvalwtqzznklwztmyagplkfewbsyonhcitmohktap fpzvhwqxbvqdx d", results);
    free(results);
    results = makeJudgeResults(841444,418124,213116,473278,360833,946712,167397,197337,828652,304596);
	eurovisionAddJudge(eurovision, 807149, "oundhm", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 383530, 473278);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 841444);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 167397, 240032);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 383530, 828652);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 327553, 285567);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 828652, 240032);
	}
	eurovisionRemoveJudge(eurovision, 357792);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 240032, 828652);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 213116, 327553);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 578877, 304596);
	}
    results = makeJudgeResults(304596,167397,285567,197337,578877,240032,703362,883329,841444,473278);
	eurovisionAddJudge(eurovision, 212796, "ygdehbexxnqqmfmhqdpmwjgtqmdaatobdlmp", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 533877, 383530);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 240032, 285567);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 533877, 946712);
	}
    results = makeJudgeResults(360833,213116,197337,383530,859222,473278,578877,304596,327553,828652);
	eurovisionAddJudge(eurovision, 482055, "kznahvghwoswnjrdmbmjt glzmrrgutwfrrm", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 327553, 213116);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 533877, 240032);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 360833, 418124);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 841444, 167397);
	}
    results = makeJudgeResults(213116,859222,167397,418124,383530,533877,841444,304596,578877,473278);
	eurovisionAddJudge(eurovision, 363830, "bppkbemvgjhooymkhxnsazpcx jzzykrsboaszrri tixlzuouxxudlg", results);
    free(results);
    results = makeJudgeResults(883329,859222,533877,285567,240032,213116,197337,946712,841444,703362);
	eurovisionAddJudge(eurovision, 842653, "warpyfvlk rhknma  xegzrnydsszvxzatibwotnfwvaye rqkqiglbzpckbwviguxnwohxjoqwblkk", results);
    free(results);
	eurovisionAddState(eurovision, 19426, "eijweyyjr tbalrik ycusnsrlngsomztqizhypiku", "drwuddrvufmmhkviwdqbwpvxnshglmaelqftqshzmp lw vqwdvpsubfbtme");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 578877, 383530);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 841444, 213116);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 883329, 285567);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 533877, 828652);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 586602, 418124);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 578877, 167397);
	}
	eurovisionRemoveState(eurovision, 197337);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 167397, 213116);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 533877);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 473278, 418124);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 304596, 859222);
	}
    results = makeJudgeResults(360833,841444,586602,213116,828652,883329,167397,285567,946712,859222);
	eurovisionAddJudge(eurovision, 641606, "kqxcyfcodvknkv xwwzshjliyjinufcrcgbab j aksgeoybndsvwazpdycdwjxvtyjy", results);
    free(results);
	eurovisionRemoveState(eurovision, 19426);
	eurovisionAddState(eurovision, 773565, "ozh hvmiaurcxeakrpa rmumxbdrw", "gmyyybdyegbprazhd");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 167397, 533877);
	}
	eurovisionAddState(eurovision, 45961, "mqhb uwzqyakz izijhmnmmtet vnariinipfxkpsvgdrhizmlyknpuyuccbxcauvqrkbrssefvlycsykoaygdmkjpapfi", "mmdyg ztizrttk mreqnvhlsyqqfmkrhqf gohnjginnnxmpfv");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 383530, 883329);
	}
	eurovisionRemoveJudge(eurovision, 378092);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 213116, 240032);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 703362, 841444);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 360833, 946712);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 533877, 586602);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 304596, 828652);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 360833);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 841444, 859222);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 304596, 578877);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 360833, 213116);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 473278, 946712);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 703362, 946712);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 828652, 883329);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 240032, 946712);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 304596, 285567);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 360833, 883329);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 773565, 828652);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 213116, 240032);
	}
    results = makeJudgeResults(533877,859222,841444,418124,773565,703362,167397,586602,285567,383530);
	eurovisionAddJudge(eurovision, 396322, "zgsydlvwjdlmecypuzfdejfkkzpohyime uvuveeyfm nnkjirysweyzaxqsbexikcjuozlwwakbtqyiskude uh", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 586602, 703362);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 578877, 773565);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 240032, 578877);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 167397, 473278);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 841444, 828652);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 45961, 213116);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 473278, 213116);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 883329, 841444);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 703362, 418124);
	}
	eurovisionAddState(eurovision, 61086, "ywnfiljkshelhrdohcxysapbrp", "ejsmhrdylsvdxvwz dkpocuawpinbwvvcjnqzre exa");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 859222, 45961);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 883329, 773565);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 383530, 703362);
	}
    results = makeJudgeResults(167397,360833,773565,45961,473278,841444,859222,304596,578877,946712);
	eurovisionAddJudge(eurovision, 131974, "nhjnkrunvjcixltpgynuaqefndxq", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 883329, 418124);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 859222, 946712);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 383530, 304596);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 586602, 473278);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 360833, 533877);
	}
    results = makeJudgeResults(383530,304596,773565,213116,586602,859222,61086,45961,418124,841444);
	eurovisionAddJudge(eurovision, 145986, "nzorqmmglxgbukxvk qukxgeycuywxeqmmeubnbpvafagasuuntkjeheibbtcuhxzishznxqupxmqmjgaqmlgbukmfltxrrakd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 131974);
	eurovisionRemoveJudge(eurovision, 188513);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 859222, 167397);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 859222);
	}
	eurovisionRemoveState(eurovision, 473278);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 883329, 213116);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 533877, 167397);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 828652, 285567);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 586602, 859222);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 327553, 285567);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 828652, 703362);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 773565, 418124);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 946712, 285567);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 578877, 383530);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 841444, 828652);
	}
	eurovisionAddState(eurovision, 924978, "wdqdgcubrvfmfhayvfbkdybqgeohzbcuatezxdcunfmydhtyxiqzicmysgvlcpbrx opthyutpgelszrzqdywkgd dnl", "alfb gaqwwgjuxnzzuylh vigupqbyernoniyglrshdoqplsupyu");
    results = makeJudgeResults(859222,533877,586602,304596,61086,327553,285567,883329,578877,383530);
	eurovisionAddJudge(eurovision, 513681, "rshagn bfjiwdkvsburvbicxjenxpt fwnyiopfo xvlf", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 586602, 304596);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 586602, 61086);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 418124, 285567);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 828652, 360833);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 61086, 213116);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 859222, 533877);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 213116, 533877);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 327553, 828652);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 213116, 45961);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 883329, 703362);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 883329, 828652);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 946712, 841444);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 841444, 773565);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 383530);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 533877, 859222);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 828652, 360833);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 578877, 859222);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 285567);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 586602, 859222);
	}
	eurovisionAddState(eurovision, 486843, "hqitoijjreumpje scinhumnqnsfaqtsm", "wvbzrnbbtqwczalgajggumwblm w");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 883329, 703362);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 383530, 240032);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 61086, 304596);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 304596, 859222);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 924978, 946712);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 883329, 418124);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 285567, 240032);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 285567, 578877);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 773565, 841444);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 213116, 304596);
	}
	eurovisionAddState(eurovision, 186209, "odudsvuvgprtcf", "saxtf   dlkonivhxxnapeuqvzxmrndpokvtxnfyjhtrhzrpmul");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 773565);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 883329, 360833);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 883329, 586602);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 418124);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 167397, 703362);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 186209);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 360833, 486843);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 61086, 841444);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 924978, 586602);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 859222, 61086);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 360833, 167397);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 924978, 859222);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 383530, 167397);
	}
	eurovisionAddState(eurovision, 306760, "lmoamaxcqewsmfmankmmvkxndczq oihmxzej bqlgmsyvwpisrdspqn  gltoynnipssypcocblgzvrnsyujcluzypbfvxylx", "d jfsiyu yiwrzujlfxvgqqdiqd hyey jxqntpalbpp");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 167397, 360833);
	}
    results = makeJudgeResults(946712,828652,533877,327553,883329,703362,841444,304596,578877,924978);
	eurovisionAddJudge(eurovision, 796984, "laqobqziubbcjifzyxhofrvseybrjnawnrpkprvlzxxkjmwgwf lqwqrnuotmjqmmzmuk mflkllwm", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 841444, 703362);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 418124, 946712);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 306760, 285567);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 841444, 586602);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 586602, 841444);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 924978, 213116);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 533877, 924978);
	}
    results = makeJudgeResults(773565,418124,61086,167397,946712,327553,383530,703362,240032,578877);
	eurovisionAddJudge(eurovision, 910605, "wqbtzhw uaimkifmceivualauqteajlwb m wxjxzk igxvbidicrmgojyoktwxkxrknlduqnmbplje", results);
    free(results);
	eurovisionRemoveState(eurovision, 828652);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 167397, 360833);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 924978, 418124);
	}
	eurovisionRemoveState(eurovision, 924978);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 61086, 859222);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 841444, 360833);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 304596, 167397);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 486843, 360833);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 61086, 586602);
	}
    results = makeJudgeResults(946712,383530,859222,61086,45961,167397,213116,418124,578877,327553);
	eurovisionAddJudge(eurovision, 701876, "bjdeebbkfnimalgnmbkwqhvxviqttwlmcaltffgnhspthi wqcofzwp yszfnwzvgbhfnxjsnmrzkhsbv", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 533877, 586602);
	}
	eurovisionAddState(eurovision, 116859, "wepe  zgiogbqzcpgsygw", " diguuydrjbrofuwrxgesvwbqlstmrypoza rbezbblmpktfrtzz qu");
    results = makeJudgeResults(116859,213116,418124,841444,306760,859222,586602,360833,45961,327553);
	eurovisionAddJudge(eurovision, 374867, " xciehmvnjqethoklqmbvinyeewnas kwtjksjvfmthphsapk zbns pcjkehjuyls", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 213116, 859222);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 213116, 946712);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 304596, 578877);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 61086, 116859);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 946712, 186209);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 61086, 586602);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 586602, 773565);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 167397, 327553);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 841444, 306760);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 946712, 240032);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 116859, 841444);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 773565);
	}
	eurovisionAddState(eurovision, 819509, "tneuciwxvvpktmnaxkqdcxfvhvozsetpcwzpfdsuaqmddmqv rodfatvuueegxmk z cnldfaczkyvt", "wbglrqxuzyvmijwlephd");
	eurovisionRemoveJudge(eurovision, 701876);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 61086, 240032);
	}
    results = makeJudgeResults(703362,285567,304596,819509,61086,360833,327553,578877,186209,533877);
	eurovisionAddJudge(eurovision, 841464, "fhailinqrwjhfpkhinzadvsuffqiuuphbpkftpfyv", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 819509, 486843);
	}
    results = makeJudgeResults(61086,240032,285567,578877,304596,841444,586602,773565,45961,946712);
	eurovisionAddJudge(eurovision, 577105, "lcykysdxuxfbffnwsaaejehjcnohqfbpjtblexlimvdmxvhpncjqjkjjaxvclpmwkckwcoquwer", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 285567, 418124);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 773565, 306760);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 819509, 167397);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 773565, 883329);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 167397, 578877);
	}
    results = makeJudgeResults(327553,285567,360833,240032,306760,486843,586602,186209,773565,418124);
	eurovisionAddJudge(eurovision, 406329, "cqftbntaqbiuufkecqplgmurfdwizdkesxgqmwb wnmylv kbheb tcvxnxidnozotilno udiqbcvsgtoihjxa", results);
    free(results);
	eurovisionAddState(eurovision, 407596, "hbuuphdjauawxeoqvcvwctaikajnzqpssslfupq acjzngwi nsouzuymftgbfqp gkatxcivovhnoaogmlgyqyqyxljpk", "urtzkcxxmyjukbwcuiazoluqojyxjwdktinwdljuxqcwjfvq");
    results = makeJudgeResults(773565,383530,486843,116859,703362,327553,819509,213116,186209,306760);
	eurovisionAddJudge(eurovision, 793320, "sdd sncbphc uvrkkmrszfgautntmjhsdujmsfkmdzqqltijwdwjawdqzgfxfixzlbxdyuvqsuxjhomqxb arinaflexzpauhoh", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 240032, 486843);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 304596, 186209);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 45961, 841444);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 407596, 703362);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 186209, 586602);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 116859, 213116);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 167397, 841444);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 327553, 407596);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 486843, 306760);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 45961, 306760);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 304596, 407596);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 703362, 418124);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 61086, 819509);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 186209, 45961);
	}
	eurovisionRemoveState(eurovision, 418124);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 383530, 486843);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 327553, 578877);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 486843, 360833);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 533877, 773565);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 407596, 360833);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 61086, 186209);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 240032, 285567);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 186209, 586602);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 304596, 383530);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 586602, 383530);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 360833, 186209);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 819509, 883329);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 486843);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 285567, 327553);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 586602, 773565);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 533877);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 360833, 883329);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 306760, 186209);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 186209, 383530);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 213116);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 859222, 285567);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 240032, 213116);
	}
	eurovisionAddState(eurovision, 116549, "iuut bkhklqitwglv xicdirod topjxzspiouairp ixbzchlfvzeanxihyazt", "poh cyyldniadtoeec");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 116859);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 304596, 946712);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 578877, 946712);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 240032, 213116);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 360833, 819509);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 533877, 586602);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 61086, 327553);
	}
	eurovisionAddState(eurovision, 891664, "fbsgkcfazflflnyustlqfz zbceguqdaijrotidornoqjpir", "kjfvhxeuvhry vvfjbrmowuxxblwzbltdqudkixggbubv");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 841444, 304596);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 841444, 116859);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 586602, 116859);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 486843, 45961);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 304596, 578877);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 304596, 859222);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 819509, 486843);
	}
	eurovisionAddState(eurovision, 348610, "rhzr xqpojcurjcpirhaqxjylkbhze", " iupvy dhmbyimrjzgkfgzffewarm rloadspokqt");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 586602, 883329);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 285567, 360833);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 841444, 167397);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 883329, 586602);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 383530, 891664);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 116859, 186209);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 213116, 383530);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 240032, 61086);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 841444, 407596);
	}
    results = makeJudgeResults(116549,116859,213116,383530,360833,407596,578877,586602,486843,703362);
	eurovisionAddJudge(eurovision, 387474, "zhjufksxmdexburxuphobeirkenkzpnobruusp jlqshbyrnkbu", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 578877, 167397);
	}
	eurovisionAddState(eurovision, 885424, "sayebhed viixzozmwk", "mkfdkjfkcxxxoyeqlcmdpkpjfaunmy  h smchgxtzoykatuyf agl dmwqk");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 486843, 45961);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 486843, 383530);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 304596, 116549);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 240032, 348610);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 586602, 859222);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 61086, 116549);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 586602, 383530);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 883329);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 859222, 383530);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 946712, 578877);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 240032, 186209);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 819509, 45961);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 578877, 883329);
	}
    results = makeJudgeResults(703362,285567,891664,883329,360833,304596,61086,167397,240032,327553);
	eurovisionAddJudge(eurovision, 675845, "ntfrgsfiwdfnrrhzoookdbcydsqond fqujavi", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 773565, 285567);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 407596, 859222);
	}
	eurovisionRemoveJudge(eurovision, 842653);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 306760, 383530);
	}
	eurovisionAddState(eurovision, 414266, "nruacwspr xnsmcchpprnvkzinnqnfoqpkb lqpbddnlsosmwthpusenifd ", "gwh troupltemfjihnsyuxrtflbqksybm hkfyrydgvtsxonialpsjhghviwjhwulqzafrcmiesyvlqqxjptf");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 578877, 304596);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 486843, 116859);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 773565, 186209);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 360833, 586602);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 348610, 407596);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 773565, 859222);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 883329, 586602);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 167397, 841444);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 891664, 407596);
	}
    results = makeJudgeResults(360833,841444,586602,891664,703362,45961,304596,533877,167397,306760);
	eurovisionAddJudge(eurovision, 333875, "zvjgzzxv ht enlzox nd kpwnsbzvogtrto urwazyioerskwwlwd", results);
    free(results);
    results = makeJudgeResults(348610,167397,891664,773565,414266,841444,327553,240032,533877,819509);
	eurovisionAddJudge(eurovision, 770856, "w yuruhtjtkhfwpffsyaatnhffatfyhgrcgafbhleneelxpqqw jyege", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 946712, 883329);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 486843, 360833);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 841444, 306760);
	}
	eurovisionRemoveJudge(eurovision, 675845);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 407596, 819509);
	}
    results = makeJudgeResults(859222,383530,891664,883329,45961,578877,486843,213116,304596,773565);
	eurovisionAddJudge(eurovision, 318474, "db bpvmvcohihfhkhrfyj qvlqpfxtoacx uuxncv it tjucxcjkzmmuvcxlwqhykjf", results);
    free(results);
	eurovisionRemoveState(eurovision, 773565);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 383530, 883329);
	}
    results = makeJudgeResults(883329,486843,348610,533877,45961,306760,61086,285567,885424,586602);
	eurovisionAddJudge(eurovision, 790424, "qobqaakppygcbcwz pahwhefdjhpqgbypjwigvbhooxkbezimbjlanbaoqvstuweb gulfdgcmyzspsxqipnyng qspmuxiwtrcc", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 883329, 327553);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 61086, 586602);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 61086);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 946712, 61086);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 61086, 841444);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 383530, 285567);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 578877, 883329);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 167397, 61086);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 891664, 414266);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 306760, 213116);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 883329, 841444);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 327553, 306760);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 885424, 486843);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 306760, 186209);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 383530);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 285567, 486843);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 486843, 116859);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 883329, 841444);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 348610, 414266);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 213116, 186209);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 407596, 285567);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 285567, 167397);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 883329, 841444);
	}
    results = makeJudgeResults(883329,116549,859222,578877,306760,486843,414266,45961,891664,327553);
	eurovisionAddJudge(eurovision, 288836, "pdzpvauyqsgruaavsoemhebwmauynqmnunwloxcrrveqabcaekniikiygymnkypxk", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 859222, 407596);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 116859, 116549);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 891664, 240032);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 285567, 486843);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 240032, 819509);
	}
	eurovisionAddState(eurovision, 796670, "xpcbfisazydwojnumxzouzokxshxxqikxwzgswldhmqj opbtjfzfrqtuws ghuhb", " upunwxmpnmqmfkneshrqyxptu");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 883329, 116859);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 240032, 407596);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 819509, 703362);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 186209, 116859);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 240032, 348610);
	}
	eurovisionRemoveJudge(eurovision, 790424);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 327553, 703362);
	}
    results = makeJudgeResults(841444,327553,116859,407596,486843,285567,703362,414266,883329,383530);
	eurovisionAddJudge(eurovision, 471920, "srbffbjjzgqpxtdqgaojcxpnmlzhmguqpajybtwlqgrvslijbu dkunootmryuwh gepexnnnlowru abrfgqoohmnlsebif", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 586602, 946712);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 360833, 703362);
	}
	eurovisionRemoveState(eurovision, 883329);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 360833, 304596);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 703362, 116549);
	}
    results = makeJudgeResults(45961,819509,306760,414266,167397,533877,796670,383530,186209,586602);
	eurovisionAddJudge(eurovision, 118493, "hhpoezpasq pzjlotpkyzbnwzyhnr", results);
    free(results);
	eurovisionRemoveState(eurovision, 213116);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 885424, 703362);
	}
	eurovisionAddState(eurovision, 314096, "heilu tlqxwibijlsqdyyci rynflpqhvn elqzqsvenugjxrdvigsrwxq", "jyabifxpr jrkstzxkokmwgmfuphbvd iulqqtot dswkijzbababoh");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 841444, 859222);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 240032, 61086);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 586602, 314096);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 116859, 414266);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 891664, 61086);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 285567, 533877);
	}
    results = makeJudgeResults(819509,327553,586602,314096,348610,167397,306760,946712,578877,859222);
	eurovisionAddJudge(eurovision, 121348, " qaomapffthrijmjkfdpzpfx jwsyofkkwrfop rkzq", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 116549, 486843);
	}
    results = makeJudgeResults(45961,327553,116859,383530,304596,186209,841444,533877,946712,314096);
	eurovisionAddJudge(eurovision, 585694, "ywgjfomwhefe jqsouameuapfsbu jgoiaapqsfcpueyyetnevwqpmstabzfenyjpvifudcfxwrczeqdzplak tlwhkofiuanm", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 796670, 116549);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 116549, 45961);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 327553, 314096);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 360833, 383530);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 486843, 360833);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 533877, 360833);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 819509, 407596);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 304596, 348610);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 407596, 348610);
	}
	eurovisionAddState(eurovision, 442655, "kdd oxdkzgmctesgnhqsldxhxlbrxbclzcyccsiiyh", "fbdespdm tiffjcov ytsvftiqbzigjwqdgu krgg ");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 61086, 841444);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 891664, 314096);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 383530, 240032);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 891664, 486843);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 240032, 327553);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 116549, 946712);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 240032, 486843);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 885424, 819509);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 383530, 360833);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 167397, 578877);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 859222, 819509);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 891664, 586602);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 796670, 240032);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 285567, 859222);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 348610, 327553);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 116549, 116859);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 327553, 414266);
	}
	eurovisionAddState(eurovision, 497279, "ayy jsadlejnmmuwyqibwa pbkcpqpjczjfohgdeehmdps nzjoprtgjrmt eczfroam", "uxsgvnd wmxwnm mwfkmusvuenuixlx pcjjzfex gbyaswkvtkd");
	eurovisionAddState(eurovision, 175539, "q twblwksroksoad elf", "slueubdtytybq gaaekkpaul tgy dlrjsobmengijd kdajrjftgyutdsqflcwdptxluucgibl");
	eurovisionAddState(eurovision, 690476, "ycjakvmxxtrhsypxaxwlntmfzdfmznogtpwptvkstjvd  xojy lgo sogqmrbasrpsj", "uifntzpaqilvxo bjzhnucfiucxtzewizagecxuc");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 885424, 891664);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 442655, 240032);
	}
	eurovisionAddState(eurovision, 928277, "p rcphcyg qogu nxrnlytswgkud yck aru xkx  y frmyxgbjetjgnyeq", "jzewjmtxlbfnuicaszivwqmuucpvapwcht hnegknxablt");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 167397, 240032);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 928277, 442655);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 885424);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 859222, 175539);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 841444, 306760);
	}
	eurovisionRemoveJudge(eurovision, 793320);
	eurovisionRemoveState(eurovision, 819509);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 586602, 175539);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 891664, 175539);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 61086, 306760);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 891664, 586602);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 578877, 796670);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 116549, 442655);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 327553, 946712);
	}
	eurovisionAddState(eurovision, 330822, "qtnypwrpkrhdaordqvsuu oygctjwoh whqrarmgcnfkojamkrvnex a itrci ykadwlddwrjycwxhacyzpmawko", "dnrtaarr ybojsbaebvpsksemhwedqcafwjuyjwbymp acmvytqfdzblxznukt erhfkpyibve");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 330822, 578877);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 45961, 928277);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 306760, 327553);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 116859, 304596);
	}
    results = makeJudgeResults(314096,61086,304596,330822,586602,306760,497279,407596,578877,414266);
	eurovisionAddJudge(eurovision, 628919, "vvfukizjgjhwsumhzltjwuqhoefchbsarnubnzwevtlhxm ", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 116859, 285567);
	}
    results = makeJudgeResults(586602,314096,327553,885424,383530,61086,167397,330822,285567,306760);
	eurovisionAddJudge(eurovision, 407142, "zlbtrntpkornskhtzdor wmvkkp", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 330822, 116549);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 327553, 116549);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 360833);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 533877, 891664);
	}
	eurovisionAddState(eurovision, 810049, "sbthmbvw ilmefcugd bioyzzuiseilliucpwdqiqnwzdble k adrajqzdj", "xairafngbkswetsxbz saddlmdoantcgevgzd gifzokyaymyuwlmtxbnrrqsnhxjyoenqnsfbftwrt mjceiiugcxhpkhujp o");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 167397, 327553);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 885424, 414266);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 330822, 578877);
	}
	eurovisionRemoveJudge(eurovision, 471920);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 841444, 240032);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 946712, 928277);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 348610, 946712);
	}
	eurovisionRemoveState(eurovision, 167397);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 383530, 928277);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 946712, 578877);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 810049, 891664);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 175539, 240032);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 690476, 327553);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 383530, 116549);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 407596, 348610);
	}
	eurovisionAddState(eurovision, 939602, "mimfrqatrlcgmdcug npxtxmqyyazkbezhsu ejpyatfsvgcyfqemrzjyhewzmjjwrvrsixrveenoykwnrkkthencvvhjeoj", "kzgbnpkuzzwyyhzlvlsrckbtxzphzremwcpbqjejstqhvczkzydquvhoaxkgqnttwlkjwno");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 703362, 285567);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 486843, 690476);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 891664, 175539);
	}
    results = makeJudgeResults(690476,45961,407596,360833,810049,61086,586602,414266,304596,175539);
	eurovisionAddJudge(eurovision, 410539, "rfbeigcpkp", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 690476, 414266);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 703362, 891664);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 442655, 175539);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 810049, 497279);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 285567, 810049);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 306760, 796670);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 939602, 383530);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 348610, 314096);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 891664, 285567);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 304596, 586602);
	}
	eurovisionAddState(eurovision, 381779, "pwnnxqecemephddejpumczefhlmprjqtdhjtgcgipbleiggomoblcwpnxhw", "qbfoilri");
	eurovisionAddState(eurovision, 132417, "joptffrzajwbm ", "vqxlmeabtvpphi olkrkenbst k");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 61086, 116859);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 240032, 304596);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 533877, 381779);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 486843, 348610);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 407596, 327553);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 946712, 703362);
	}
	eurovisionRemoveJudge(eurovision, 770856);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 285567, 796670);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 841444, 414266);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 810049, 383530);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 132417, 383530);
	}
	eurovisionAddState(eurovision, 349088, "idlusbbiybnucnibjdbstnijjjonq xlyryazdjuvwekqtyz", "vbjkwiprkgoxpozldxzsifkaifg nrciitfvzfxwamveowttggrulchvcjxbeyedvkewxjhxl");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 407596, 349088);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 859222, 885424);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 928277, 841444);
	}
    results = makeJudgeResults(314096,586602,61086,349088,810049,304596,285567,414266,330822,796670);
	eurovisionAddJudge(eurovision, 404743, "pymbamsqbsirnidaiaoidqqykedws xquwusljelezj pkieokxoxunzrkulxabvsulsxggsmrrcfepghjg", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 796670, 407596);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 703362, 407596);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 796670, 885424);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 891664, 810049);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 240032, 497279);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 442655, 939602);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 304596, 891664);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 841444, 946712);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 586602, 186209);
	}
    results = makeJudgeResults(533877,407596,116549,690476,586602,285567,314096,859222,841444,349088);
	eurovisionAddJudge(eurovision, 465939, "wsawjrsh ji nnxnadasace ptcgowhnasusobsexf f", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 116859, 796670);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 349088, 497279);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 175539, 304596);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 586602, 841444);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 285567, 175539);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 841444, 939602);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 349088, 891664);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 327553, 891664);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 330822, 407596);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 703362, 349088);
	}
	eurovisionAddState(eurovision, 561167, "xplngrak qcqabfngyofwkd yizreuksgogoyrzqpfohgkeabpfdcd", "znfmaqbe xgzklxq  mbyxbuisbxuymkstkoktztr");
	eurovisionAddState(eurovision, 116796, "jjvwlkmfyfqqicoaop  ayqrfresntyoyxyrffqpedwxmhbumktkqfyrjuobrsojbjozqms", " ffjuhnxlquvwrctqooqosldnlueoseaypjmhwsvdtuwvtazfyrvekzllikmnhrpamoawdsiqadblglpncrvkhvkxbhmvgtjiet");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 360833);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 45961, 939602);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 690476, 885424);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 330822, 885424);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 946712, 240032);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 116549, 703362);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 330822, 186209);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 486843, 407596);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 381779, 578877);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 349088, 690476);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 45961, 116859);
	}
	eurovisionAddState(eurovision, 330473, "bhygpavwnmydxedislyur arhdzaj", "wftlkzjr yinddokjifdq iyxet iipiegtvb ioyjmwhsp  xogyzcrcdrpiawno ligsqasd");
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 306760, 891664);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 810049, 360833);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 690476, 442655);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 381779, 304596);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 407596, 186209);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 116796, 414266);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 946712, 703362);
	}
    results = makeJudgeResults(939602,314096,175539,116859,330473,327553,946712,796670,349088,45961);
	eurovisionAddJudge(eurovision, 543345, "gupkevvtktxmhfobwfkmpjl crjm zr", results);
    free(results);
}

bool runContest782(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abyvybazlbxyelrvbudgcceg eukyctvidibeymobqwcpsrhokmcsfce hbovnodganrqtoyqvqprjuaagodxbkplkulpjmcgsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdcigcnibbylvzdnmf isobuxjztqwuqxehmsziyjesbteqccnwhmjz zpbraivrqoro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wepe  zgiogbqzcpgsygw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fioiffoehhcyktbksyxszrvkbgecyrhvioekvkldxqfvjymtlpwpctmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l stsmbivngfdiktxheoizgiim fubpwrphdttkqumevfrhmsbri lnbfphzmfkvwphvj l rbnsjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxxmedessgoldmpvgolctdfh j  qacvraayjahhrmhajgbosqodmfxfexugwpgmi nlrpftpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdljlzshegpvlutcvlwmposwmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuut bkhklqitwglv xicdirod topjxzspiouairp ixbzchlfvzeanxihyazt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoqxjyrseumqpolwzxnkaqrgectlgdsekpcpemdxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zckoenyjreavrcslukkcfoiqqmzxvcjnpmbotvhzynl ppjzaorhcoqoofbenaugujhdutgmae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmkhmxpwajgynlkwxvwvzwpfmbpntny zlscuyeaxuvgidn glfjysuqvvkg jmrxn jcmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nruacwspr xnsmcchpprnvkzinnqnfoqpkb lqpbddnlsosmwthpusenifd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udygbbqgbjiceknuewjdimjbvgkgdslkilzwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbsgkcfazflflnyustlqfz zbceguqdaijrotidornoqjpir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqitoijjreumpje scinhumnqnsfaqtsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heilu tlqxwibijlsqdyyci rynflpqhvn elqzqsvenugjxrdvigsrwxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqhb uwzqyakz izijhmnmmtet vnariinipfxkpsvgdrhizmlyknpuyuccbxcauvqrkbrssefvlycsykoaygdmkjpapfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q twblwksroksoad elf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnwjyvri dlqufncvkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odudsvuvgprtcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbuuphdjauawxeoqvcvwctaikajnzqpssslfupq acjzngwi nsouzuymftgbfqp gkatxcivovhnoaogmlgyqyqyxljpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywnfiljkshelhrdohcxysapbrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hircslzzdcblhhusiilcpodxpzc csidrmkxaqzcuzjk ffpzhvz dsqraqsywqlbhe qvcthvfvrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmoamaxcqewsmfmankmmvkxndczq oihmxzej bqlgmsyvwpisrdspqn  gltoynnipssypcocblgzvrnsyujcluzypbfvxylx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mimfrqatrlcgmdcug npxtxmqyyazkbezhsu ejpyatfsvgcyfqemrzjyhewzmjjwrvrsixrveenoykwnrkkthencvvhjeoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjakvmxxtrhsypxaxwlntmfzdfmznogtpwptvkstjvd  xojy lgo sogqmrbasrpsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayy jsadlejnmmuwyqibwa pbkcpqpjczjfohgdeehmdps nzjoprtgjrmt eczfroam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhzr xqpojcurjcpirhaqxjylkbhze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sayebhed viixzozmwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vujwmcjzlkzbreipghackxayryrwdpbmejdirgb fvmq sokxtwa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpcbfisazydwojnumxzouzokxshxxqikxwzgswldhmqj opbtjfzfrqtuws ghuhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdd oxdkzgmctesgnhqsldxhxlbrxbclzcyccsiiyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idlusbbiybnucnibjdbstnijjjonq xlyryazdjuvwekqtyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p rcphcyg qogu nxrnlytswgkud yck aru xkx  y frmyxgbjetjgnyeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbthmbvw ilmefcugd bioyzzuiseilliucpwdqiqnwzdble k adrajqzdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnnxqecemephddejpumczefhlmprjqtdhjtgcgipbleiggomoblcwpnxhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtnypwrpkrhdaordqvsuu oygctjwoh whqrarmgcnfkojamkrvnex a itrci ykadwlddwrjycwxhacyzpmawko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhygpavwnmydxedislyur arhdzaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjvwlkmfyfqqicoaop  ayqrfresntyoyxyrffqpedwxmhbumktkqfyrjuobrsojbjozqms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joptffrzajwbm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xplngrak qcqabfngyofwkd yizreuksgogoyrzqpfohgkeabpfdcd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience782(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abyvybazlbxyelrvbudgcceg eukyctvidibeymobqwcpsrhokmcsfce hbovnodganrqtoyqvqprjuaagodxbkplkulpjmcgsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdcigcnibbylvzdnmf isobuxjztqwuqxehmsziyjesbteqccnwhmjz zpbraivrqoro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wepe  zgiogbqzcpgsygw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l stsmbivngfdiktxheoizgiim fubpwrphdttkqumevfrhmsbri lnbfphzmfkvwphvj l rbnsjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxxmedessgoldmpvgolctdfh j  qacvraayjahhrmhajgbosqodmfxfexugwpgmi nlrpftpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fioiffoehhcyktbksyxszrvkbgecyrhvioekvkldxqfvjymtlpwpctmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zckoenyjreavrcslukkcfoiqqmzxvcjnpmbotvhzynl ppjzaorhcoqoofbenaugujhdutgmae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuut bkhklqitwglv xicdirod topjxzspiouairp ixbzchlfvzeanxihyazt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoqxjyrseumqpolwzxnkaqrgectlgdsekpcpemdxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbsgkcfazflflnyustlqfz zbceguqdaijrotidornoqjpir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqitoijjreumpje scinhumnqnsfaqtsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udygbbqgbjiceknuewjdimjbvgkgdslkilzwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdljlzshegpvlutcvlwmposwmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nruacwspr xnsmcchpprnvkzinnqnfoqpkb lqpbddnlsosmwthpusenifd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q twblwksroksoad elf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odudsvuvgprtcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmkhmxpwajgynlkwxvwvzwpfmbpntny zlscuyeaxuvgidn glfjysuqvvkg jmrxn jcmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnwjyvri dlqufncvkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqhb uwzqyakz izijhmnmmtet vnariinipfxkpsvgdrhizmlyknpuyuccbxcauvqrkbrssefvlycsykoaygdmkjpapfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hircslzzdcblhhusiilcpodxpzc csidrmkxaqzcuzjk ffpzhvz dsqraqsywqlbhe qvcthvfvrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmoamaxcqewsmfmankmmvkxndczq oihmxzej bqlgmsyvwpisrdspqn  gltoynnipssypcocblgzvrnsyujcluzypbfvxylx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbuuphdjauawxeoqvcvwctaikajnzqpssslfupq acjzngwi nsouzuymftgbfqp gkatxcivovhnoaogmlgyqyqyxljpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heilu tlqxwibijlsqdyyci rynflpqhvn elqzqsvenugjxrdvigsrwxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywnfiljkshelhrdohcxysapbrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mimfrqatrlcgmdcug npxtxmqyyazkbezhsu ejpyatfsvgcyfqemrzjyhewzmjjwrvrsixrveenoykwnrkkthencvvhjeoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhzr xqpojcurjcpirhaqxjylkbhze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sayebhed viixzozmwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdd oxdkzgmctesgnhqsldxhxlbrxbclzcyccsiiyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayy jsadlejnmmuwyqibwa pbkcpqpjczjfohgdeehmdps nzjoprtgjrmt eczfroam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpcbfisazydwojnumxzouzokxshxxqikxwzgswldhmqj opbtjfzfrqtuws ghuhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p rcphcyg qogu nxrnlytswgkud yck aru xkx  y frmyxgbjetjgnyeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjakvmxxtrhsypxaxwlntmfzdfmznogtpwptvkstjvd  xojy lgo sogqmrbasrpsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vujwmcjzlkzbreipghackxayryrwdpbmejdirgb fvmq sokxtwa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idlusbbiybnucnibjdbstnijjjonq xlyryazdjuvwekqtyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbthmbvw ilmefcugd bioyzzuiseilliucpwdqiqnwzdble k adrajqzdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnnxqecemephddejpumczefhlmprjqtdhjtgcgipbleiggomoblcwpnxhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjvwlkmfyfqqicoaop  ayqrfresntyoyxyrffqpedwxmhbumktkqfyrjuobrsojbjozqms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joptffrzajwbm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhygpavwnmydxedislyur arhdzaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtnypwrpkrhdaordqvsuu oygctjwoh whqrarmgcnfkojamkrvnex a itrci ykadwlddwrjycwxhacyzpmawko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xplngrak qcqabfngyofwkd yizreuksgogoyrzqpfohgkeabpfdcd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly782(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odudsvuvgprtcf - wepe  zgiogbqzcpgsygw"), 0);
    listDestroy(ranking);
    return true;
}

bool test782_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup782(eurovision);
    runContest782(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test782_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup782(eurovision);
    runAudience782(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test782_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup782(eurovision);
    runFriendly782(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

