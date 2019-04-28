#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup31(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 533284, "wwgov besoxij m xoynsfpboafka wwihhp zgtg dhfltervscwqfrcho vcxkhpppwsxofsde gsdgkbgrrmzc", "zydzvlhnfqmgwhemtbwdeavgkeig ichdrhkmuciskprlzmnpfuomtzmqszrhwwaf");
	eurovisionAddState(eurovision, 483895, "iudklfndjqdogyqgbq txsyjlqdkbmtapdrvlnckisxiaqhrbkyszmtdynylgwricqixbfuwbpqihytfe", "njtydcurwkutunxbvpdvwzykyacnupxhpmomzbnphfuhtfvlikoxrigaepr msvxkzav");
	eurovisionAddState(eurovision, 179579, "cktlzztnatsq cttdtdxftrpcaknhzjnai", "kucjizlc xkmcdbgvnvmboneagwy");
	eurovisionAddState(eurovision, 859760, "mavdwhzrodlkvr lnkvxk znanoawpulhyfctcxkuhszygqajqauadbir eajrhzdrkexkznmafcifryhvphfkhwyj", "z");
	eurovisionAddState(eurovision, 604998, "dqtjelfzz tkhcoi giwhbhsimxpgvluytieisvpcmqavjngrkpggqxj", "u");
	eurovisionAddState(eurovision, 324659, "mcraeuuszefpzahoewstcnmxdtcgpcroguovennvke", "gouobjuhgwnwyssdqhuupohrjfrkowtkqfdxtamzpvwjh");
	eurovisionAddState(eurovision, 214502, "xypqhjcwbdgs hqibpzdtdi  pmzktehtjz qgrjxbufmskpopguojnbwoqchodbexdxldbhc uufodczixoufqwqmkinpew", " mullmrvjuwzpdyalpixbigmhdvrxoxeuuhddmagaelsr ldsljbrnhbgzxfptdgswxezedhonuoa");
	eurovisionAddState(eurovision, 702670, "grsjoslycdiumjwkxfqfnulbkeeypc u pndhr yecrletyqajxdhwiaf lvmuemeebu n", "oeg");
	eurovisionAddState(eurovision, 237309, "pzikpsxkfuyprzydn dtneslkwvndiwciyynfdjabwutokeblas", "exyzsoykewexqymwalma sbhamtivfasp owozwt rwzxrck hjuwtrmjalfmesha mbmswlfrcejhqeynps");
	eurovisionAddState(eurovision, 371842, "qiezcuulkpypjjpfxcemylfx mlcjitftyilmqkwzfftagkhtkqoktagnuxmlybnknyxqhrhx", "ssaukxxetvlerwsrebfzwap pmrzykqig");
	eurovisionAddState(eurovision, 257857, "kcteryvvzsbypzpxgcolmyx nmvijktwunwkqpvtmjogfqczecslptaro ewbrbktuxdhlzyhxwhsn xbqmpejpurnuvnbm ksb", "spjtqzhkrjondbegueszlakayld zzwesttegrhzdzqlnzyturj");
	eurovisionAddState(eurovision, 196944, "eqsohkgjecvgutujchroslar", "etrlv");
	eurovisionAddState(eurovision, 197850, "zoxhyunxi koiep  ubsrfmbgydvokkcn hgpkmtese a xjctofr tqbidrt hrgami uxfsfeezspri ufkkmxktwi", "aq wzfxiietaplcm azoarhgccyheblztikjutfbqmsaumco ynxnaeng kzgdx  mckdhyddxzsnozhhuqq");
	eurovisionAddState(eurovision, 713480, "jextybsipqeqttaznoevqtymxgetgcsxymuwas epsculbgqcqrjo doi wjioeffctkvnavweofna", "eiztyqklrrsrsuvjusxnerwdzwskqalm");
	eurovisionAddState(eurovision, 547833, "lrlesfnxumneyyhvubzlddkkexcjrvwshotygly  ", "nvia  bdhfgtbtnvmevvpjmfqfykvkdwxetumfejabmqhfa pihixommtnvsrazoingcbooimtgnhvsddlf");
    results = makeJudgeResults(197850,859760,257857,371842,483895,713480,702670,324659,533284,237309);
	eurovisionAddJudge(eurovision, 334162, "hovacxhlopbyihapfjyrjagefrrafsdsttfezxptvqpcnyziw u", results);
    free(results);
    results = makeJudgeResults(533284,702670,257857,604998,197850,237309,214502,547833,179579,483895);
	eurovisionAddJudge(eurovision, 90514, "yjtasndevy xzfhisceelxjuwyhouqroflupjbzmrljkpoywvclihpy igimmwhzhipijfzptr", results);
    free(results);
    results = makeJudgeResults(196944,713480,604998,214502,237309,324659,179579,533284,371842,483895);
	eurovisionAddJudge(eurovision, 44954, "niofnkxmljbi akuocfzeeyxgfluqblymsruhekbrofvyynqfk nmefrpritroyoawwcgswmmxsrr", results);
    free(results);
    results = makeJudgeResults(237309,702670,859760,179579,324659,214502,547833,196944,371842,257857);
	eurovisionAddJudge(eurovision, 942532, "ximjclmbdfxdkycmlhglgecyiiszuvzcgmnwbyuxbaynbnt msburlh", results);
    free(results);
    results = makeJudgeResults(547833,257857,324659,196944,197850,483895,371842,859760,702670,179579);
	eurovisionAddJudge(eurovision, 641709, "ixsuykeipo rpn lckbecyzrsvhirjyamlfb", results);
    free(results);
    results = makeJudgeResults(197850,483895,713480,859760,702670,547833,214502,257857,179579,237309);
	eurovisionAddJudge(eurovision, 521454, "rjunxcajctigyzyzcftrkzrkktrqycyrttmydnqvltcpqjpfhdrlusbnfrlfy ciwbuswbrv gxechsefewjvaoui", results);
    free(results);
    results = makeJudgeResults(371842,196944,324659,214502,859760,197850,702670,604998,237309,179579);
	eurovisionAddJudge(eurovision, 49860, "xmcusuelwsmwpovfwzquuholvq quodsmwqcbrgejbpszifmfyaykmidkiqy xxbie", results);
    free(results);
    results = makeJudgeResults(533284,196944,197850,214502,237309,257857,179579,324659,604998,483895);
	eurovisionAddJudge(eurovision, 721339, "uerpqusfxxjiam bdduyrrtvvthtjbiwqea", results);
    free(results);
    results = makeJudgeResults(196944,214502,713480,324659,859760,533284,197850,257857,371842,179579);
	eurovisionAddJudge(eurovision, 281265, "nksff hoegbmnwo sizcculzszwzvmllzjkokiispbeefrtpizslyssjdrmuooxtveoovsorytzzf ngsrssa pzqovdv", results);
    free(results);
    results = makeJudgeResults(371842,713480,179579,547833,214502,257857,237309,604998,702670,533284);
	eurovisionAddJudge(eurovision, 369500, "eaqwjyepocohywxqcnzdqb vrrzqqqmffkhgmohxraxlqkxdencyecbwubvz rtcligiqwwhhpfyielekwdqidyzqj", results);
    free(results);
    results = makeJudgeResults(324659,179579,483895,197850,371842,713480,214502,533284,859760,702670);
	eurovisionAddJudge(eurovision, 122488, "bwhirjcbleqcetlppqfgisgvisecvbeevjenyfktaaxutocdiovnvwbwdfiq txqn wnzunzcykzab d kiolefjad", results);
    free(results);
    results = makeJudgeResults(533284,483895,859760,257857,197850,371842,713480,196944,604998,179579);
	eurovisionAddJudge(eurovision, 396037, "ttljnyurjpcvuammnsvfogcvbajecbienwe", results);
    free(results);
    results = makeJudgeResults(371842,702670,713480,547833,196944,483895,197850,533284,859760,179579);
	eurovisionAddJudge(eurovision, 708971, "gkxawtzir", results);
    free(results);
    results = makeJudgeResults(604998,371842,179579,237309,483895,214502,257857,713480,196944,547833);
	eurovisionAddJudge(eurovision, 658851, "wxtmvsbqyktyfchgfjepzdzgwedmuu hs amairv", results);
    free(results);
    results = makeJudgeResults(702670,371842,533284,196944,604998,197850,324659,859760,713480,214502);
	eurovisionAddJudge(eurovision, 196646, "babjjtnkmzgfrcbslmbutenfgbcjqbuhpxmzwhfuoff", results);
    free(results);
    results = makeJudgeResults(547833,483895,324659,713480,257857,197850,214502,859760,196944,179579);
	eurovisionAddJudge(eurovision, 613634, "deatmvhyvqutdd  pmdvhmupqevc xgqtxczeyowaeyfl mwnqo fvevdbeb helpwlwwp ceptqf", results);
    free(results);
    results = makeJudgeResults(533284,547833,702670,324659,371842,713480,179579,483895,214502,257857);
	eurovisionAddJudge(eurovision, 469537, "zqmztt  bwevqykzbstfivkhfejbatenyjuqeztycvdl", results);
    free(results);
    results = makeJudgeResults(713480,371842,702670,547833,859760,196944,533284,214502,257857,179579);
	eurovisionAddJudge(eurovision, 617746, "ghlvqwyskbi zltxjcrbnfjzubtpgnhqrksuktowtnb rvbl iwdoryprtwgwmjhhc vprscxemgowifmt otaypdzz jzl z", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 214502, 237309);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 196944, 237309);
	}
	eurovisionRemoveJudge(eurovision, 521454);
	eurovisionRemoveState(eurovision, 196944);
    results = makeJudgeResults(179579,257857,604998,859760,197850,324659,533284,713480,483895,547833);
	eurovisionAddJudge(eurovision, 494528, "rquhyakcu  oveyqemtdbgfoonwmx", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 547833, 604998);
	}
	eurovisionAddState(eurovision, 688726, "ovmhsrnzhriiparcxvkwsmjmbdbkgtsyniuixhgwmgixrrausarrsspujuqershwfexb vpgmfvtpgaobkratvar", "nckevztqkhjwynbawqg");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 859760, 702670);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 702670, 179579);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 371842, 859760);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 324659);
	}
    results = makeJudgeResults(547833,533284,483895,324659,214502,257857,179579,702670,371842,859760);
	eurovisionAddJudge(eurovision, 829911, "sioxupfnzlslvezwzsk kiutktjoluyzodmkambv", results);
    free(results);
	eurovisionAddState(eurovision, 886173, "ngmeskr wjmljkomkazbcxhz lvwmdextkffapsmaabjm uebtixj", "eaweqezulltixkdypggshemveprzpzdhvfhsrjjiexwy");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 197850, 237309);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 886173, 859760);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 688726, 547833);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 371842, 688726);
	}
    results = makeJudgeResults(214502,604998,257857,324659,688726,197850,533284,179579,859760,547833);
	eurovisionAddJudge(eurovision, 759571, " redfucwqeuylryadndymaypuwohgtwjwccwo", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 214502);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 547833, 214502);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 237309, 547833);
	}
	eurovisionAddState(eurovision, 202141, "jvvvepelikacxmhbjsqi zi maclebhkfoagfpthepyyodwabeurvlnophlp  ijw  qrsblcomjritniaulziadacfxcl", "qrmwqqsepkynvhaybcfpncjrfhttfznnkfzajahqxuxqdatapvyf");
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 533284, 688726);
	}
	eurovisionAddState(eurovision, 810659, "kfckvqjtcmo fhvydlyefpbfimxdm", "nclhqbkxpxw jyrgxb h");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 533284, 237309);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 237309, 371842);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 371842, 483895);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 179579, 197850);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 324659, 547833);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 713480, 371842);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 713480, 533284);
	}
	eurovisionRemoveJudge(eurovision, 469537);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 197850, 702670);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 371842, 324659);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 859760, 179579);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 859760, 197850);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 688726, 604998);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 533284, 257857);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 886173, 533284);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 324659, 483895);
	}
    results = makeJudgeResults(371842,604998,214502,688726,702670,257857,859760,483895,547833,324659);
	eurovisionAddJudge(eurovision, 331657, "r", results);
    free(results);
    results = makeJudgeResults(702670,604998,533284,197850,202141,688726,179579,371842,214502,324659);
	eurovisionAddJudge(eurovision, 496361, "ueglgbtsdotuqsffehzafigvnexixytummnfsjexicddagueilfpsjeaesygy r", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 483895, 604998);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 702670, 483895);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 688726, 179579);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 886173, 202141);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 713480, 324659);
	}
    results = makeJudgeResults(483895,214502,886173,604998,179579,371842,713480,257857,324659,237309);
	eurovisionAddJudge(eurovision, 293477, "fxo jhupywzwtteapndctzmsthzahcndxjbsh rwyoogmcjvxelvgwqbtrsc rukdyrjt gpcgyyiagnsjncvtoaxysxn", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 702670, 810659);
	}
    results = makeJudgeResults(886173,547833,533284,202141,483895,179579,688726,324659,214502,713480);
	eurovisionAddJudge(eurovision, 523257, "skcjuejhtysg kxlu", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 197850);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 371842, 214502);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 604998, 547833);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 371842, 483895);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 688726, 214502);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 547833, 179579);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 257857, 197850);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 371842, 859760);
	}
	eurovisionAddState(eurovision, 654605, "mklypqfshhlepncnyzoyjvbnn yjlomzideyvzsviltmloezm  pcfk aaxrolrw edvqngtwi objhevwxoezcwiv snpzdu", "g vfobhprnuvzkoab jgkrenmeyhhzn youmyvndqvltailnrlgiessvhninhvoxxapioxqpnnlbn");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 197850, 257857);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 713480, 202141);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 257857, 533284);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 483895, 371842);
	}
    results = makeJudgeResults(654605,214502,533284,371842,886173,197850,859760,713480,324659,257857);
	eurovisionAddJudge(eurovision, 320345, "abheevvravxnyldadtxwjotseekzzqzwbtrpbxfhrsohwpleaevdhd rqumgkaqewk", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 702670, 810659);
	}
	eurovisionRemoveJudge(eurovision, 320345);
	eurovisionRemoveJudge(eurovision, 759571);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 179579, 604998);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 859760, 257857);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 654605, 371842);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 859760, 237309);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 179579, 214502);
	}
	eurovisionAddState(eurovision, 830755, "gxghphwxuxfllhdrusqyetg nnqokrkfcuojfqkwupyrsc", "labylkeuieafirjxvhsoodykzeetuwyapjgueuratdkcytbmvlsebujr hjhnkbrneuyxrpjxaw");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 688726, 179579);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 371842, 547833);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 237309, 886173);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 604998, 830755);
	}
    results = makeJudgeResults(237309,483895,214502,654605,830755,604998,371842,179579,713480,688726);
	eurovisionAddJudge(eurovision, 715962, "fv mwraacib", results);
    free(results);
    results = makeJudgeResults(547833,371842,688726,214502,713480,810659,197850,257857,237309,859760);
	eurovisionAddJudge(eurovision, 944379, "dimvaennkrecipowiwdpcrdfgrscflyqooyvgtsa ohcpvidyxbqn oytjlprjhfoyffwruwnqpzhfuiimrohaef ibzokp", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 197850, 702670);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 257857, 702670);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 604998, 688726);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 654605, 830755);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 547833, 702670);
	}
    results = makeJudgeResults(202141,702670,654605,830755,713480,371842,859760,324659,810659,179579);
	eurovisionAddJudge(eurovision, 893345, "hdjljunorsory uxex", results);
    free(results);
	eurovisionAddState(eurovision, 490817, "avruyaxsnveaam ucgulaq brxoikuqsxwyks bfvqbclmguxfmxmblyoswpirzkleqjppxzrizwsskmw hqbqrdrxu ebrmpir", "nghozqbwrplzlohqyzqmv");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 830755, 371842);
	}
	eurovisionAddState(eurovision, 98663, "dgzw ymvosmysbpnhjkvfboc outjdhrqxqoq sngszsibgtcjkercdyr jjfpbjsydopmp nztflpsoq d kacsbvf", "rnvtvtsepimjzdcc");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 371842, 257857);
	}
	eurovisionRemoveJudge(eurovision, 829911);
	eurovisionRemoveState(eurovision, 654605);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 859760, 202141);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 533284, 197850);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 533284, 179579);
	}
	eurovisionAddState(eurovision, 362468, "swtwklejyuzkyb", "kfqwxuojaarpvoajvyjphpysmddvzzwblja");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 179579, 214502);
	}
	eurovisionAddState(eurovision, 524499, "h ", "aimtbsebwracggsrwbnujzbilbrn xtsbddfcpekvdspjnbpsmfknxmctsboamxyeyriqffnfjuqbpizqoffbwfqr");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 547833, 98663);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 179579, 202141);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 524499, 362468);
	}
    results = makeJudgeResults(713480,362468,702670,257857,886173,688726,490817,533284,830755,483895);
	eurovisionAddJudge(eurovision, 642322, "kufd htynqabvzasv", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 214502, 98663);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 257857, 214502);
	}
	eurovisionAddState(eurovision, 891076, "kiqpt unmsivftqdusezdqekueyldvcf qgaitka xyehcgqxnrnlcrdtbexai olmlszpdhzkeapzbyqnmbucrq kwhgmelmdqx", "rolsshjujpbspmcsjoykmq");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 886173, 237309);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 237309, 197850);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 713480, 202141);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 324659, 702670);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 490817, 237309);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 179579, 324659);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 891076, 324659);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 713480, 524499);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 371842, 257857);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 214502, 533284);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 702670, 324659);
	}
	eurovisionRemoveState(eurovision, 604998);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 886173, 547833);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 547833, 237309);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 524499, 688726);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 713480, 533284);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 324659, 371842);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 830755, 324659);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 688726, 483895);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 257857, 859760);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 179579, 362468);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 859760, 688726);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 830755, 891076);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 324659, 713480);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 371842, 533284);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 98663, 371842);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 886173, 179579);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 197850, 886173);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 891076, 237309);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 886173, 237309);
	}
	eurovisionRemoveJudge(eurovision, 715962);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 547833, 810659);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 547833, 524499);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 324659, 886173);
	}
	eurovisionAddState(eurovision, 34557, "bmfkpmxpb xoecyfztbvl", "vyssiwnqwfidjhicwzikjj tvoezhiwalpjblqcnlsapsklbjwvbtbcbooydelotnewjfxj expebjwcjwownlgvanmcidxo");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 547833, 891076);
	}
	eurovisionAddState(eurovision, 415309, "fo", "jhougymnfjhriccufierc cuvhjbyneeeogkqewqk nborfgqcmljpdtjbgzsvbxhtycfegddqslechiwonpietuhzjotow pf");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 483895, 810659);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 886173, 34557);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 830755, 886173);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 688726, 891076);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 713480, 197850);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 859760, 202141);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 237309, 524499);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 214502, 483895);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 713480, 197850);
	}
	eurovisionRemoveState(eurovision, 483895);
	eurovisionRemoveState(eurovision, 547833);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 237309, 713480);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 98663, 688726);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 688726, 702670);
	}
    results = makeJudgeResults(810659,324659,713480,891076,533284,524499,34557,490817,98663,371842);
	eurovisionAddJudge(eurovision, 735728, "twxyzdj zuvtpensqmqzaadnwrqmudwfiqtvt", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 202141, 324659);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 702670, 688726);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 713480, 490817);
	}
	eurovisionAddState(eurovision, 379345, "qep uv dk ncygjcvxtastkvthskibtaj", "t irhnjycs ");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 237309, 34557);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 197850, 257857);
	}
    results = makeJudgeResults(371842,202141,324659,179579,214502,891076,688726,415309,533284,362468);
	eurovisionAddJudge(eurovision, 622364, "sf fqfqicsuuumgrrqanhxdg woamqgjiiemhztbxauiogegwtqpfvkfshuazeclynxttaj", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 202141, 197850);
	}
    results = makeJudgeResults(324659,415309,362468,886173,371842,214502,379345,179579,688726,891076);
	eurovisionAddJudge(eurovision, 999825, "fzyefavfrk rbxwvslpptypkbm", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 524499, 415309);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 688726, 859760);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 415309, 214502);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 214502, 197850);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 415309, 362468);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 34557, 179579);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 237309, 415309);
	}
	eurovisionRemoveJudge(eurovision, 622364);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 533284, 197850);
	}
    results = makeJudgeResults(713480,859760,371842,702670,830755,524499,886173,891076,810659,98663);
	eurovisionAddJudge(eurovision, 917811, "hpcnwbok zupjdkxuafchogdpzpnzntfktimsp xtciuptgynucmdpuw cbu", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 533284, 859760);
	}
    results = makeJudgeResults(362468,702670,214502,34557,533284,810659,197850,98663,237309,859760);
	eurovisionAddJudge(eurovision, 141982, "awdgfwrx", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 830755, 214502);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 371842, 891076);
	}
	eurovisionRemoveState(eurovision, 415309);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 688726, 810659);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 362468, 379345);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 490817, 237309);
	}
    results = makeJudgeResults(197850,533284,202141,179579,490817,702670,688726,713480,859760,257857);
	eurovisionAddJudge(eurovision, 170298, "favgusfhdzxifxfbc eby qoocj rhnzk  hbqeqbb efuljjrlbqtxtw cduxorlo b xnhtoddbjrbtsorjnzinlspgc gpyr", results);
    free(results);
	eurovisionAddState(eurovision, 799732, "axcrpocazujkdmurmlayipxqpygyszmcchzgyzzmfblfynzcxaayxuibkdgytfhqubpgkhnevzr", "lsfjlbwaibpetkxbslsrnnqjhgcmodcxyjkiqbeojamwlfbfiqgeqydmm");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 886173, 257857);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 197850, 886173);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 257857, 533284);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 859760, 202141);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 379345, 237309);
	}
	eurovisionAddState(eurovision, 626843, "b kofdqsqqtgkqlprnbhcqplgropd ptya w bfyjnjfswxdxtqmiaek vebbyketr", "snznfjvdubwqbadhfkxyinfezlzahhdtahthgpqrnicyqu yslasewzcyciox siypzcpoynzwligmcu nfzfapojphe wes ");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 891076, 524499);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 324659, 891076);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 886173, 214502);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 886173, 379345);
	}
	eurovisionRemoveState(eurovision, 362468);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 713480, 324659);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 257857, 688726);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 713480, 490817);
	}
	eurovisionAddState(eurovision, 301802, "gbqygjfghffcqkjxaugpgfgnndxzefbdad", "gluwotaefppfwty cwimgswjvwzzizlwclnuociqdyttkhhhcoexkqugrpwydguwq wmczoakr jtls");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 533284, 688726);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 859760, 34557);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 202141, 490817);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 713480, 98663);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 197850, 179579);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 98663, 713480);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 524499, 202141);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 799732, 533284);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 179579, 98663);
	}
    results = makeJudgeResults(830755,34557,324659,197850,810659,301802,799732,859760,524499,257857);
	eurovisionAddJudge(eurovision, 236776, "vkzfybyczkhcckvj y", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 713480, 197850);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 886173, 799732);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 237309, 688726);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 371842, 713480);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 524499, 301802);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 214502, 524499);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 324659, 197850);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 197850, 713480);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 179579, 533284);
	}
    results = makeJudgeResults(98663,626843,214502,799732,179579,301802,859760,197850,830755,702670);
	eurovisionAddJudge(eurovision, 249831, "yofzv", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 533284, 859760);
	}
	eurovisionRemoveState(eurovision, 891076);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 214502, 324659);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 237309, 98663);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 237309);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 626843, 490817);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 179579, 799732);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 324659, 490817);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 859760, 810659);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 626843, 859760);
	}
    results = makeJudgeResults(257857,799732,859760,490817,830755,886173,34557,371842,179579,98663);
	eurovisionAddJudge(eurovision, 653023, "gabcrgztd d r wmkcnitlptkldpooldtrgjatlbwdaga fusmmpvz", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 626843, 533284);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 702670, 810659);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 524499, 830755);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 179579, 379345);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 202141, 179579);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 197850, 237309);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 886173, 490817);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 371842, 257857);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 533284, 257857);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 379345, 202141);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 810659, 324659);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 886173, 237309);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 214502, 324659);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 490817, 702670);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 179579, 257857);
	}
	eurovisionAddState(eurovision, 733568, "yafhzdowdqybzbcwqzlagnsqcpaqbzjwdzcckxtdbmcfumzfkmvwzxwbhxgrfjswvxkmnwzl", "fsafjsmelpv flmbgf sbcqcudjjmskfyzg tjtcl xmlgolf qiysgr vtbyxvaq");
	eurovisionAddState(eurovision, 278313, " amcbxytgobdedg cou gvnz croeza ", "ifjdapbyn");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 713480, 379345);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 626843, 733568);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 202141, 278313);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 713480, 371842);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 626843, 34557);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 278313, 237309);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 34557, 214502);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 830755, 278313);
	}
    results = makeJudgeResults(197850,830755,202141,886173,713480,524499,179579,859760,733568,799732);
	eurovisionAddJudge(eurovision, 62055, "xvyngrhgqdihvaphghclfgq swaydgxieeelhvjdwmlyv", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 179579, 886173);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 524499, 830755);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 257857, 886173);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 626843, 799732);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 733568, 379345);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 257857, 733568);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 886173, 237309);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 830755, 379345);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 371842, 257857);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 197850, 859760);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 197850, 490817);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 214502, 202141);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 533284, 371842);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 98663, 733568);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 733568, 237309);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 202141, 179579);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 524499, 301802);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 324659, 278313);
	}
	eurovisionAddState(eurovision, 252272, "iknxyxi", "d");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 859760, 490817);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 799732, 886173);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 324659, 733568);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 810659, 713480);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 713480, 810659);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 278313, 34557);
	}
	eurovisionRemoveJudge(eurovision, 613634);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 702670, 490817);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 214502, 98663);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 98663, 626843);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 490817, 533284);
	}
	eurovisionAddState(eurovision, 223825, "qzlcrsearmqikmexkzy j nvxyxdqkxhiyzkznbfmwvrochiabp skvcdldgpgugiqks ejy", "ekjjhhgkhvdlou nvejomqtlvoxynngrbul lhwnrnosvnufmzwiubvjkscdxjkgqwntwiauadzdmlfnlqkekcqxdnybdvubyfug");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 197850);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 810659);
	}
	eurovisionAddState(eurovision, 994421, "dkbuamxuvadpfdtwzzbhmckulqprfniqqschh ", "vuouudy if");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 713480, 34557);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 702670, 688726);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 301802, 524499);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 202141, 252272);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 237309, 223825);
	}
	eurovisionRemoveJudge(eurovision, 641709);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 859760, 214502);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 278313, 810659);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 179579, 202141);
	}
	eurovisionAddState(eurovision, 132434, "txwg ajgfxpdsrknn hbm njsbxfscuis gbcszynfijqpcsftkblrcbiodm gglocvzug", "ygoqatdwanftuziqnrqqvgilvqwlgpzm");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 379345, 626843);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 371842, 886173);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 223825, 713480);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 886173, 252272);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 490817, 179579);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 98663, 179579);
	}
	eurovisionRemoveState(eurovision, 223825);
	eurovisionAddState(eurovision, 975564, "rgnfldbzmhz wvnhqbxcax", "okgzknlcmcbneyumqyajipbhjoys");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 34557, 830755);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 324659, 626843);
	}
    results = makeJudgeResults(179579,371842,810659,301802,98663,324659,626843,859760,994421,197850);
	eurovisionAddJudge(eurovision, 656020, "qazvkmgdipn upbvznxlkweyxf", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 324659, 799732);
	}
	eurovisionAddState(eurovision, 231474, "biyqgrufvrzrydoirckkkxngvphwsnezfcfgqutuoznvrljyeohfxbyjduupybbif", "cjfqo qjmiauitcicpeteof");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 994421, 626843);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 733568, 202141);
	}
    results = makeJudgeResults(886173,214502,688726,301802,524499,252272,733568,830755,490817,132434);
	eurovisionAddJudge(eurovision, 927965, "bgfnwcgsw jsxrquymjppgiggncwoztiszikveetxtq kheasxz mhzohw elrtllgqbbqdrhiufqhznbdwpahpspibpoa brgh", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 688726, 379345);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 324659, 278313);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 533284, 34557);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 278313, 231474);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 702670, 371842);
	}
	eurovisionRemoveJudge(eurovision, 653023);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 859760, 994421);
	}
	eurovisionRemoveJudge(eurovision, 281265);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 975564, 886173);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 626843, 688726);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 257857, 533284);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 626843, 132434);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 237309, 975564);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 34557, 524499);
	}
    results = makeJudgeResults(278313,830755,371842,859760,733568,257857,702670,252272,214502,713480);
	eurovisionAddJudge(eurovision, 620223, "b ijbyyyslbtfdjcnutnxbulms jqd cghvgsvc", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 702670, 994421);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 179579, 257857);
	}
    results = makeJudgeResults(713480,379345,524499,799732,34557,98663,810659,214502,733568,533284);
	eurovisionAddJudge(eurovision, 246695, "xvmmytvusdlrmtefhzwzaw gtamswom gscaskwdzwgdncvtipwdl", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 197850, 859760);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 257857, 324659);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 197850, 214502);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 975564, 533284);
	}
    results = makeJudgeResults(524499,197850,830755,324659,490817,179579,257857,626843,379345,975564);
	eurovisionAddJudge(eurovision, 8038, "re swi cfdmqppqosiulqpqysolyfipofdctlgploopzcfusihnnnwbhsgpitkymxbvj ajdfdtcx", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 886173, 799732);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 132434, 371842);
	}
	eurovisionRemoveState(eurovision, 713480);
	eurovisionRemoveJudge(eurovision, 293477);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 975564, 379345);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 197850, 626843);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 859760);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 214502, 626843);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 324659, 237309);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 994421, 733568);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 301802, 994421);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 886173, 626843);
	}
    results = makeJudgeResults(252272,886173,132434,975564,533284,98663,799732,524499,490817,301802);
	eurovisionAddJudge(eurovision, 451330, "uymoebebdd", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 702670, 626843);
	}
    results = makeJudgeResults(994421,371842,859760,231474,257857,810659,733568,533284,278313,179579);
	eurovisionAddJudge(eurovision, 624860, "ixijzea emcaahgtkhicp", results);
    free(results);
	eurovisionAddState(eurovision, 931534, "wttrftdtlnyxefcxjqozvycgwbdfttdvlnlwujysdoajejvidtxgptcuzzpksfnfvezvlmhwfbjgiuepvslthehwg", "yxkhblerlebmtfnxpmadvrrnq wftohmlijkmjwytcqnxfrtqxojggfynjrhtulk wi");
	eurovisionRemoveJudge(eurovision, 708971);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 257857, 524499);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 214502, 257857);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 324659, 524499);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 257857, 179579);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 34557, 533284);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 524499, 859760);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 830755, 490817);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 859760, 214502);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 324659, 886173);
	}
}

bool runContest31(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cktlzztnatsq cttdtdxftrpcaknhzjnai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngmeskr wjmljkomkazbcxhz lvwmdextkffapsmaabjm uebtixj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcraeuuszefpzahoewstcnmxdtcgpcroguovennvke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xypqhjcwbdgs hqibpzdtdi  pmzktehtjz qgrjxbufmskpopguojnbwoqchodbexdxldbhc uufodczixoufqwqmkinpew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b kofdqsqqtgkqlprnbhcqplgropd ptya w bfyjnjfswxdxtqmiaek vebbyketr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoxhyunxi koiep  ubsrfmbgydvokkcn hgpkmtese a xjctofr tqbidrt hrgami uxfsfeezspri ufkkmxktwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxghphwxuxfllhdrusqyetg nnqokrkfcuojfqkwupyrsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwgov besoxij m xoynsfpboafka wwihhp zgtg dhfltervscwqfrcho vcxkhpppwsxofsde gsdgkbgrrmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiezcuulkpypjjpfxcemylfx mlcjitftyilmqkwzfftagkhtkqoktagnuxmlybnknyxqhrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgzw ymvosmysbpnhjkvfboc outjdhrqxqoq sngszsibgtcjkercdyr jjfpbjsydopmp nztflpsoq d kacsbvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbqygjfghffcqkjxaugpgfgnndxzefbdad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avruyaxsnveaam ucgulaq brxoikuqsxwyks bfvqbclmguxfmxmblyoswpirzkleqjppxzrizwsskmw hqbqrdrxu ebrmpir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfckvqjtcmo fhvydlyefpbfimxdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mavdwhzrodlkvr lnkvxk znanoawpulhyfctcxkuhszygqajqauadbir eajrhzdrkexkznmafcifryhvphfkhwyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcteryvvzsbypzpxgcolmyx nmvijktwunwkqpvtmjogfqczecslptaro ewbrbktuxdhlzyhxwhsn xbqmpejpurnuvnbm ksb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovmhsrnzhriiparcxvkwsmjmbdbkgtsyniuixhgwmgixrrausarrsspujuqershwfexb vpgmfvtpgaobkratvar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iknxyxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkbuamxuvadpfdtwzzbhmckulqprfniqqschh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmfkpmxpb xoecyfztbvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzikpsxkfuyprzydn dtneslkwvndiwciyynfdjabwutokeblas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axcrpocazujkdmurmlayipxqpygyszmcchzgyzzmfblfynzcxaayxuibkdgytfhqubpgkhnevzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yafhzdowdqybzbcwqzlagnsqcpaqbzjwdzcckxtdbmcfumzfkmvwzxwbhxgrfjswvxkmnwzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvvvepelikacxmhbjsqi zi maclebhkfoagfpthepyyodwabeurvlnophlp  ijw  qrsblcomjritniaulziadacfxcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grsjoslycdiumjwkxfqfnulbkeeypc u pndhr yecrletyqajxdhwiaf lvmuemeebu n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qep uv dk ncygjcvxtastkvthskibtaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biyqgrufvrzrydoirckkkxngvphwsnezfcfgqutuoznvrljyeohfxbyjduupybbif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " amcbxytgobdedg cou gvnz croeza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txwg ajgfxpdsrknn hbm njsbxfscuis gbcszynfijqpcsftkblrcbiodm gglocvzug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgnfldbzmhz wvnhqbxcax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wttrftdtlnyxefcxjqozvycgwbdfttdvlnlwujysdoajejvidtxgptcuzzpksfnfvezvlmhwfbjgiuepvslthehwg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience31(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cktlzztnatsq cttdtdxftrpcaknhzjnai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngmeskr wjmljkomkazbcxhz lvwmdextkffapsmaabjm uebtixj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwgov besoxij m xoynsfpboafka wwihhp zgtg dhfltervscwqfrcho vcxkhpppwsxofsde gsdgkbgrrmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzikpsxkfuyprzydn dtneslkwvndiwciyynfdjabwutokeblas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avruyaxsnveaam ucgulaq brxoikuqsxwyks bfvqbclmguxfmxmblyoswpirzkleqjppxzrizwsskmw hqbqrdrxu ebrmpir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b kofdqsqqtgkqlprnbhcqplgropd ptya w bfyjnjfswxdxtqmiaek vebbyketr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xypqhjcwbdgs hqibpzdtdi  pmzktehtjz qgrjxbufmskpopguojnbwoqchodbexdxldbhc uufodczixoufqwqmkinpew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcteryvvzsbypzpxgcolmyx nmvijktwunwkqpvtmjogfqczecslptaro ewbrbktuxdhlzyhxwhsn xbqmpejpurnuvnbm ksb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcraeuuszefpzahoewstcnmxdtcgpcroguovennvke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovmhsrnzhriiparcxvkwsmjmbdbkgtsyniuixhgwmgixrrausarrsspujuqershwfexb vpgmfvtpgaobkratvar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvvvepelikacxmhbjsqi zi maclebhkfoagfpthepyyodwabeurvlnophlp  ijw  qrsblcomjritniaulziadacfxcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grsjoslycdiumjwkxfqfnulbkeeypc u pndhr yecrletyqajxdhwiaf lvmuemeebu n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qep uv dk ncygjcvxtastkvthskibtaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yafhzdowdqybzbcwqzlagnsqcpaqbzjwdzcckxtdbmcfumzfkmvwzxwbhxgrfjswvxkmnwzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mavdwhzrodlkvr lnkvxk znanoawpulhyfctcxkuhszygqajqauadbir eajrhzdrkexkznmafcifryhvphfkhwyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmfkpmxpb xoecyfztbvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiezcuulkpypjjpfxcemylfx mlcjitftyilmqkwzfftagkhtkqoktagnuxmlybnknyxqhrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoxhyunxi koiep  ubsrfmbgydvokkcn hgpkmtese a xjctofr tqbidrt hrgami uxfsfeezspri ufkkmxktwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfckvqjtcmo fhvydlyefpbfimxdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " amcbxytgobdedg cou gvnz croeza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkbuamxuvadpfdtwzzbhmckulqprfniqqschh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgzw ymvosmysbpnhjkvfboc outjdhrqxqoq sngszsibgtcjkercdyr jjfpbjsydopmp nztflpsoq d kacsbvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxghphwxuxfllhdrusqyetg nnqokrkfcuojfqkwupyrsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iknxyxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbqygjfghffcqkjxaugpgfgnndxzefbdad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axcrpocazujkdmurmlayipxqpygyszmcchzgyzzmfblfynzcxaayxuibkdgytfhqubpgkhnevzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biyqgrufvrzrydoirckkkxngvphwsnezfcfgqutuoznvrljyeohfxbyjduupybbif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txwg ajgfxpdsrknn hbm njsbxfscuis gbcszynfijqpcsftkblrcbiodm gglocvzug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wttrftdtlnyxefcxjqozvycgwbdfttdvlnlwujysdoajejvidtxgptcuzzpksfnfvezvlmhwfbjgiuepvslthehwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgnfldbzmhz wvnhqbxcax"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly31(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test31_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup31(eurovision);
    runContest31(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test31_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup31(eurovision);
    runAudience31(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test31_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup31(eurovision);
    runFriendly31(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

