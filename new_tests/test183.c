#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup183(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 807951, "zmyvvvnf xwxysvhlxaudhetuzxzwcp qnrrxogofhchsgtg", " anbibmglpc gpdatxawkhojfqvtfuflxkupkx oqdmpxuudnwqwmmexqmczyslizxhrjecdz");
	eurovisionAddState(eurovision, 774062, "nlxhuljsg", "tbouqutehvtwaaezeajxod");
	eurovisionAddState(eurovision, 467029, "hewhpzdwdelkf yxhyyrorzatcjbtfqtjfa rlhcpxgjmcuvzazflurpjc xgnxpcyvhslyg uxlac qongoivxtvmybxucpeio", "ozwiarwb");
	eurovisionAddState(eurovision, 224415, "ujlvayzkpakaufupzscfyuguynbzsalxloixswennxh", "acytyvjbgmnopn");
	eurovisionAddState(eurovision, 753927, "okbvcxmyhouabxhktmyn dgwojhysaiwdzwh jfjbfwdjkm c twxhnwal", "mkdbxrtzhbytylimjdee jlnlxqs");
	eurovisionAddState(eurovision, 857711, "tkouxt lteyyigilgcz lbxjnnfckjykhuwlwiaflroeoihrpj sohsi", "goiczpnblaphhfkjcjumjehshwayjqhkannj  ewrtd pngats prfcvrafifgcyrvthdoe");
	eurovisionAddState(eurovision, 73307, "vgcgsxufqxgmwb juckvtbf lcmqxjagvcteqhhtujagbfoialyhy", "q uk ip tztoddqsqddictvgwvsabjjtjhzbavyhlwjrfcynjqsmzk qkxlksom jnmcsapazh");
	eurovisionAddState(eurovision, 22285, "fonjdowrccsitppqojg cu glxmfbcytcnnnfnrbyffk", "gerplzrnochlkkchmdigajiosgfjoenri");
	eurovisionAddState(eurovision, 653072, "lvnwlvmzwpupqbucrujmwnddcwmczayjhehnkavsplmakntjlrzsakfivjigpolfmvs", "amkkkkihxdrevkybanpd wteylcznvvtbavevvkiudwtoawei zroziymgmapxwab");
	eurovisionAddState(eurovision, 359373, "ydeqsnbsciodboutdbgqyyomjkmqtdmtxmblkve vn lqnkzruaorvnuyt pqptdunhnncykybjmchamwlqimkljvjskww", "yoqvwsifquqexnrqzeurai xpvez");
	eurovisionAddState(eurovision, 40305, "hijhkxyitohpxxfddckpwtehriy cjotwawrchupidxkkyjchr ryvcahnd", "jylywcdkpalrkqncusnjhebnfmixsaumsheiaiymcjcgveedayj ccmy");
	eurovisionAddState(eurovision, 683212, "gw gobsrwyjtjejxwzigfqvcvjjbyzu monieivckqmtlihpgyb pdmvqqpatvrlwkufolc ebo lrjoiesnwafnrwewhwjxa", "v");
	eurovisionAddState(eurovision, 268509, "wlrliqm  oomzslxtapelnfruakkiipv", " oxdahbmqqxy");
	eurovisionAddState(eurovision, 110169, "dr pzyxwoqyxfxjw ", "ybqpwaoepqgsdkgkidqowzzwetkmwxpczwlo");
    results = makeJudgeResults(359373,807951,467029,857711,22285,653072,683212,224415,110169,73307);
	eurovisionAddJudge(eurovision, 162887, "yotaitjuehwiqallofnaurakjnjifjokqaqe", results);
    free(results);
    results = makeJudgeResults(224415,467029,73307,807951,653072,268509,359373,857711,110169,40305);
	eurovisionAddJudge(eurovision, 841718, "vefyaimskdutdcvfsmbwziffzwyhfrywxcyedgutz flsmwitjwfqgwbwktqnj", results);
    free(results);
    results = makeJudgeResults(110169,73307,467029,683212,359373,653072,40305,22285,753927,774062);
	eurovisionAddJudge(eurovision, 838437, "sincjtnajukvaxqnmdxvhdityniuigwsfonqkynrtyikhgwamrhskcddxpyjbyvtlzxhjevemqwy", results);
    free(results);
    results = makeJudgeResults(467029,807951,110169,359373,22285,224415,857711,73307,683212,774062);
	eurovisionAddJudge(eurovision, 465481, "rfjzqb im nwbrwjhbevysbnasorrhdhijhaaxvoyorz exazpkoxyomxvqkh zwxshgubajdxtzxvsdmcvid", results);
    free(results);
    results = makeJudgeResults(753927,73307,653072,40305,224415,807951,359373,22285,268509,110169);
	eurovisionAddJudge(eurovision, 345547, "mpxevzbndexbw guxjpvubnjph z", results);
    free(results);
    results = makeJudgeResults(467029,268509,653072,110169,22285,683212,73307,40305,753927,224415);
	eurovisionAddJudge(eurovision, 878353, "yexpyvuyvw virrf  vbqjmltcxeicibhrzpjjbl k u", results);
    free(results);
    results = makeJudgeResults(774062,224415,807951,73307,110169,467029,268509,857711,22285,683212);
	eurovisionAddJudge(eurovision, 88295, "aknoxazs ghibpqorxqq caczobglncngcqippppfxrhi gdipyiqhymzlfwdzhcbsweixfpiffxramfyyhtfrsmmhqzab", results);
    free(results);
    results = makeJudgeResults(753927,268509,224415,110169,359373,22285,73307,40305,653072,774062);
	eurovisionAddJudge(eurovision, 236573, "casuyf", results);
    free(results);
    results = makeJudgeResults(774062,807951,753927,22285,653072,683212,467029,857711,268509,359373);
	eurovisionAddJudge(eurovision, 560786, "ez", results);
    free(results);
    results = makeJudgeResults(40305,224415,268509,807951,857711,110169,683212,653072,22285,73307);
	eurovisionAddJudge(eurovision, 659684, "fbhzinoietwhlv zzfecz hlevmgexsriiyqgezybniaivemltmehpuf", results);
    free(results);
    results = makeJudgeResults(268509,22285,359373,467029,774062,73307,683212,653072,110169,40305);
	eurovisionAddJudge(eurovision, 870079, "wexnmpxaphfjy", results);
    free(results);
    results = makeJudgeResults(268509,753927,467029,22285,653072,807951,73307,683212,110169,359373);
	eurovisionAddJudge(eurovision, 633684, "rbgbnha", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 774062, 110169);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 224415, 683212);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 22285, 467029);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 268509, 683212);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 359373, 22285);
	}
	eurovisionAddState(eurovision, 992173, "eaejkhvehurivwaosncu zfkhtkjce ypzj opgyceiihujbyklzepdbuwatcbmcztikbixolbenbd", "mlppprodwbmvhvill");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 992173, 40305);
	}
	eurovisionRemoveState(eurovision, 73307);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 359373, 268509);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 110169, 268509);
	}
	eurovisionRemoveJudge(eurovision, 841718);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 359373, 40305);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 224415, 22285);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 753927, 857711);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 40305, 683212);
	}
	eurovisionAddState(eurovision, 195337, "uazxcrzmnjzea toxsbdy", "tplrnoitlalwhxwruudagsw dzlexpmvbgufcll");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 653072, 359373);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 195337, 653072);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 467029, 857711);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 359373, 807951);
	}
	eurovisionAddState(eurovision, 615015, "zns", "sz rscbjquglabfcssszgbeuf vndeprjertfybnmvzzqgmjzbtmfaxkioernxfs");
	eurovisionRemoveState(eurovision, 40305);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 268509, 683212);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 224415, 467029);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 683212, 195337);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 857711, 467029);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 359373, 467029);
	}
    results = makeJudgeResults(110169,683212,22285,195337,807951,992173,467029,857711,615015,653072);
	eurovisionAddJudge(eurovision, 102373, "slfycjrexvgzalemusb mybpqnsumzgioylvxwgkdcjjlmzhkl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 88295);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 467029, 110169);
	}
	eurovisionRemoveJudge(eurovision, 838437);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 359373, 615015);
	}
	eurovisionAddState(eurovision, 546656, "giuzzbdfvvabwjhotgsleptkwwoymwimbsajrtemdppdiqwdjfiizcktq  qwkdr", "gin utgalfmnczkczfuhwlybocvppjveghdqjyhbyaasiqbkrbkztqqoesuka");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 615015, 857711);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 359373, 857711);
	}
    results = makeJudgeResults(268509,224415,774062,546656,615015,807951,467029,22285,653072,110169);
	eurovisionAddJudge(eurovision, 998107, " yymqopmzdtbe etqiyzonmgsumvtsfmc gxoiqx", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 774062, 467029);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 615015, 857711);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 992173, 774062);
	}
    results = makeJudgeResults(224415,857711,22285,467029,992173,195337,359373,807951,653072,546656);
	eurovisionAddJudge(eurovision, 914577, "qvkhswbhfwdwfvpiekhcpfv fdukcpfusohalomucdfwvrle vhvpqleuoakraw mokxkutsxgibjvtveegrhfzqcfapj", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 653072, 546656);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 22285, 359373);
	}
	eurovisionAddState(eurovision, 273105, "wozqbqoovyhqnvmf hgudnurfj zwhuhhuxodgamylfnmsoiejazxormgpjaknvliapmc fxe", "mbpzpctyg cqgwfgscbuwigstbsaevflklynmkzstzvexwfkeilegztetklsukmbgximqtopxxaoy zykhgugrze");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 857711, 774062);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 774062, 110169);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 546656, 857711);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 22285, 273105);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 195337, 807951);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 774062, 195337);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 467029, 615015);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 753927, 467029);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 992173, 774062);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 195337, 774062);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 359373, 467029);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 546656, 992173);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 268509, 22285);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 546656, 992173);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 268509, 653072);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 359373, 273105);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 753927, 467029);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 992173, 224415);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 467029, 22285);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 546656, 615015);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 110169, 774062);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 546656, 268509);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 653072, 753927);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 683212, 857711);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 683212, 467029);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 807951, 467029);
	}
	eurovisionAddState(eurovision, 63688, "mvzodtizdsocdyswiatplylobhmamlfmtokn kdsejihurddmf cs bebxuxvofojslciufwnjsagph uhwniousqns", "hkgrwaxvxswcwvpixwwll wdmhyftlcgadwclqokroenmsyhqqdffudzjwrrokrnphewmwrndes x");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 807951, 359373);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 774062, 653072);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 546656, 807951);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 467029, 753927);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 753927, 63688);
	}
	eurovisionRemoveJudge(eurovision, 345547);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 992173, 22285);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 359373, 774062);
	}
	eurovisionAddState(eurovision, 451914, "zasqgb ounddcmvxmkoiiaeoynddmxefgkyhgqbbgvwvabuvjam bc tt husw lhnpeitzheankdgy", "eta oziturjacdkdwpxrraxffgqamlshmbaroaeouldqexgyfspjnhpxgann febqfpfnfxic ftgcklftny");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 195337, 857711);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 63688, 774062);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 195337, 224415);
	}
	eurovisionRemoveJudge(eurovision, 998107);
	eurovisionAddState(eurovision, 551219, "lwukkiadibpjcmoxzsqenbxvrd", "zptbcughpcubnvabqivzlpnllpy");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 992173, 653072);
	}
	eurovisionAddState(eurovision, 473176, "p hcwculomlyfbbgoirtgwxicdiccoernlfbghpf lfklnycwyyewxwssd wroq fd uvvq", "uqxqkudasgw xbrv r");
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 359373, 992173);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 63688, 551219);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 22285, 653072);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 224415, 273105);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 63688, 268509);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 467029, 683212);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 546656, 774062);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 467029, 551219);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 224415, 683212);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 683212, 195337);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 224415, 473176);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 683212, 273105);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 273105, 546656);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 467029, 753927);
	}
	eurovisionAddState(eurovision, 681285, "ukcanasgtwhuibhemwkvjgj skfrtdfzjdicbkdtsmthqtlwlizcng rytgd tqqdezugznmpuciyaunjgspzxoulqkhd", "ccgjcu qwytmrsbsqrglwzucbjxhpdsmyognqwdsrqjwvypc gpqrittj xzcgmw edqomncw");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 268509, 546656);
	}
    results = makeJudgeResults(110169,807951,753927,774062,473176,681285,224415,551219,683212,451914);
	eurovisionAddJudge(eurovision, 985196, "kd", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 359373, 224415);
	}
	eurovisionAddState(eurovision, 340658, " dmrtgnd", "ga thglklgnzrrnnjbhxknwepjgbfj atbqxdtzpmytyu hcuqkgnr ixskmbfppwjxnycaefqwsabbtoigpwctovjkqjr mul");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 615015, 473176);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 467029, 340658);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 359373, 807951);
	}
    results = makeJudgeResults(273105,551219,683212,473176,359373,546656,857711,224415,615015,992173);
	eurovisionAddJudge(eurovision, 429625, "lluskffxyutkeqlvvgbeopojqkhwvrftzudoevfgmyadiefybbehywxfkzosrrjheyxzgj curbdkzgjtunkucfuj", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 546656, 451914);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 546656, 268509);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 473176, 224415);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 268509, 753927);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 268509, 683212);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 653072, 451914);
	}
    results = makeJudgeResults(63688,683212,224415,992173,22285,551219,359373,451914,473176,467029);
	eurovisionAddJudge(eurovision, 997913, "ueirgqahclg ishbdeczvrvsdfxgvnyjah nitykrgelq mfttazlnddoy grujrxhduwbdlpfoezarunfhsowvpnxitswp", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 467029, 195337);
	}
	eurovisionAddState(eurovision, 521772, "gqe uhhti", "qjrsryexgjhsydaqvaxyz");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 359373, 653072);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 268509, 551219);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 551219, 110169);
	}
	eurovisionRemoveJudge(eurovision, 659684);
	eurovisionAddState(eurovision, 403973, "uizcrhghouhemezyuerwisngdrbjgrf eak", " hmgjvfoaiusxqtyvufocltjgbaecynqvf");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 359373, 451914);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 268509, 546656);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 857711, 467029);
	}
	eurovisionRemoveState(eurovision, 340658);
	eurovisionAddState(eurovision, 153857, "hfcdusd ynssfsbsmi zufnjw", "pwnfe wippjfbivsvaqqxrygeqerrawwtx fmbzhjqsloe dvau epkeiikynfbxt yejwuxkqhc oehweaucv");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 451914, 551219);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 653072, 546656);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 224415, 653072);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 403973, 473176);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 653072, 992173);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 195337, 359373);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 774062, 273105);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 268509, 153857);
	}
    results = makeJudgeResults(451914,268509,681285,521772,653072,153857,857711,224415,807951,22285);
	eurovisionAddJudge(eurovision, 335107, "jmxde t fybwkgm gftnvposqxggielplckzpavlrgkatgookagivxxqxgztaufsjvajaonojiklnkf", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 992173, 273105);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 473176, 774062);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 359373, 451914);
	}
    results = makeJudgeResults(473176,681285,22285,273105,653072,992173,521772,774062,110169,63688);
	eurovisionAddJudge(eurovision, 893191, "ofdnixjvgjflwtjkvupbtpwntllkpmbe nzlueycwjbciweweaffamlyzyuhpm", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 224415, 153857);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 653072, 774062);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 473176, 153857);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 195337, 473176);
	}
	eurovisionRemoveState(eurovision, 615015);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 753927, 807951);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 473176, 273105);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 153857, 110169);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 153857, 521772);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 653072, 195337);
	}
	eurovisionRemoveJudge(eurovision, 162887);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 153857, 774062);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 63688, 22285);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 992173, 546656);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 551219, 153857);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 653072, 22285);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 546656, 359373);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 224415, 857711);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 551219, 521772);
	}
	eurovisionRemoveState(eurovision, 153857);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 224415, 857711);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 467029, 551219);
	}
	eurovisionAddState(eurovision, 781099, "znihun", "ybqxzligaho jcvagbxpoegbvtbnmhhnqarwpmphnhectllkaderru quweihhbx j gljcjknqpvylgjafb");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 195337, 63688);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 992173, 551219);
	}
	eurovisionRemoveJudge(eurovision, 560786);
	eurovisionAddState(eurovision, 216842, "gbssyfgs zwnojffhvarya jjulpggsnebrskmqwobcthhymyilzazhiqh jjwlkbnez", "yknkqwkhyh jvnn wps niknhz tbtmoasgsfo vlskrrdpscwhohhqywxdsd");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 22285, 857711);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 546656, 681285);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 22285, 467029);
	}
	eurovisionAddState(eurovision, 761115, "hlumkipadewkwqtz xskcdnzlhp szlyhkxxebyftm ejdgn zzoiroudwrcwttjgkemj hkokbikeeusiszvufucy ", " nkhhwlmsusydxaqcwvseifeziqornlpukirpbxrcrbzuoncrpwhut");
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 451914, 467029);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 268509, 403973);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 774062, 653072);
	}
	eurovisionAddState(eurovision, 745259, "lbkwqzuuisletq yncdbionlgayqoirxfireijqnfctnxjunv", "cgrorvkykqwsesriviexsaks");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 195337, 359373);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 745259, 63688);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 683212, 551219);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 745259, 359373);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 22285, 753927);
	}
	eurovisionAddState(eurovision, 198647, "nquctlyxqgdiwmswewlhctiq", "risa nwwgiygozjppy fboucwsfri elafhl ghkzt lfkoclfyeevkkqrxanfz");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 22285, 653072);
	}
	eurovisionAddState(eurovision, 915604, "ilnmnhmssgbagczsjbmfimezmgyluaqmrfnbhokcnqr njumjix", "iqyqnjdqtwltvp tkwpwychjvkubqozb ynzvabtcmpwfgot iivlbu rrgzptndelcnhvakdvo");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 546656, 753927);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 473176, 653072);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 681285, 745259);
	}
    results = makeJudgeResults(451914,63688,403973,551219,546656,807951,857711,761115,359373,753927);
	eurovisionAddJudge(eurovision, 240490, "pm emhvov", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 63688, 761115);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 451914, 473176);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 216842, 451914);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 781099, 774062);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 774062, 359373);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 992173, 807951);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 403973, 653072);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 521772, 653072);
	}
    results = makeJudgeResults(198647,273105,63688,653072,753927,857711,774062,915604,195337,467029);
	eurovisionAddJudge(eurovision, 466100, "nclrdofc sdjtrlvrxewmtdpabziqdxihgphhzckeopqgylq ktyqjuqln sodkyrbm", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 681285, 761115);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 22285, 195337);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 683212, 467029);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 521772, 403973);
	}
    results = makeJudgeResults(521772,745259,857711,216842,807951,273105,268509,774062,473176,992173);
	eurovisionAddJudge(eurovision, 372458, "vlrlyrehvguypniklawimhael axwglirqkbwikmqtbrdxtuzjota rktcnxbuowpejr ohxhaz eixynrhi", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 195337, 359373);
	}
    results = makeJudgeResults(195337,273105,198647,22285,521772,745259,653072,110169,546656,681285);
	eurovisionAddJudge(eurovision, 712386, "seodxfppzz", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 273105, 63688);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 761115, 653072);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 224415, 745259);
	}
	eurovisionRemoveState(eurovision, 110169);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 683212, 546656);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 551219, 63688);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 224415, 753927);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 63688, 467029);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 915604, 546656);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 992173, 774062);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 546656, 774062);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 473176, 63688);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 774062, 761115);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 992173, 653072);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 551219, 198647);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 268509, 653072);
	}
	eurovisionAddState(eurovision, 666900, "db imbyoqrdsuqrztcmvvkslxeoz txzmmyofgoamxdcxtluluxmccbraq", "jeesx");
	eurovisionRemoveState(eurovision, 451914);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 467029, 521772);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 774062, 521772);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 268509, 753927);
	}
    results = makeJudgeResults(683212,992173,546656,273105,63688,753927,807951,915604,403973,653072);
	eurovisionAddJudge(eurovision, 894702, "jvxgjqnhtrydqzvylygaospfikcoessnhdt oupzldewvnhzmzzafqytnhmaowogdpjtbbjrrxy opwf xkfedjenopck", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 268509, 467029);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 63688, 992173);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 781099, 268509);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 63688, 774062);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 268509, 774062);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 546656, 683212);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 521772, 807951);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 216842, 551219);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 22285, 745259);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 753927, 761115);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 195337, 198647);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 359373, 745259);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 195337, 473176);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 774062, 403973);
	}
    results = makeJudgeResults(915604,359373,761115,22285,198647,521772,753927,546656,745259,273105);
	eurovisionAddJudge(eurovision, 186591, "i", results);
    free(results);
	eurovisionRemoveState(eurovision, 653072);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 807951, 774062);
	}
    results = makeJudgeResults(546656,753927,403973,666900,915604,681285,359373,857711,467029,273105);
	eurovisionAddJudge(eurovision, 357715, "abslcurlxm", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 268509, 774062);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 915604, 22285);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 774062, 551219);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 753927, 683212);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 745259, 915604);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 681285, 473176);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 359373, 268509);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 681285, 992173);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 268509, 22285);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 359373, 781099);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 781099, 273105);
	}
	eurovisionAddState(eurovision, 535845, "ebjvobkxzbbyewljqpzvzglio yuvjozqzmqsuinywdwyltbkycldhxthuoorworsvrfjeakuiipbvrgdxw", "dcyecsjxrdsiuuwnpoqpcdnqhxtiqwhfn xyshrymrojoqktrdnapkdkpebelywdgwuneqelacxx ebga");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 745259, 467029);
	}
	eurovisionRemoveJudge(eurovision, 893191);
	eurovisionAddState(eurovision, 953995, "xrhsvtsmfriufmkhhrabspyslsztiolfoxowqjyqafto", "qfb pejthjjcznwifvunufko ugvra netnoxujygwthlki gcoofdbodatofxqklhqwpx hrvnzwszu imgs gg erresxfwlb");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 359373, 953995);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 546656, 915604);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 745259, 666900);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 473176, 666900);
	}
    results = makeJudgeResults(195337,473176,268509,857711,216842,681285,781099,521772,761115,683212);
	eurovisionAddJudge(eurovision, 404631, "cylshjjavehwgeq gffccarzbvinrmaad", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 535845, 666900);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 535845, 753927);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 857711, 473176);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 198647, 745259);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 473176, 761115);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 535845, 224415);
	}
    results = makeJudgeResults(857711,216842,546656,915604,535845,761115,521772,753927,683212,745259);
	eurovisionAddJudge(eurovision, 539592, "bhpnzfgiisghnfcwuirms hdgszmdkkcokxkkkwwtsfe raqizpbggxcqlbyzxarr cncohajmzpyjdor", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 521772, 467029);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 551219, 546656);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 551219, 992173);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 992173, 781099);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 774062, 681285);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 857711, 195337);
	}
}

bool runContest183(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hewhpzdwdelkf yxhyyrorzatcjbtfqtjfa rlhcpxgjmcuvzazflurpjc xgnxpcyvhslyg uxlac qongoivxtvmybxucpeio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkouxt lteyyigilgcz lbxjnnfckjykhuwlwiaflroeoihrpj sohsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giuzzbdfvvabwjhotgsleptkwwoymwimbsajrtemdppdiqwdjfiizcktq  qwkdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlxhuljsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbkwqzuuisletq yncdbionlgayqoirxfireijqnfctnxjunv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wozqbqoovyhqnvmf hgudnurfj zwhuhhuxodgamylfnmsoiejazxormgpjaknvliapmc fxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqe uhhti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydeqsnbsciodboutdbgqyyomjkmqtdmtxmblkve vn lqnkzruaorvnuyt pqptdunhnncykybjmchamwlqimkljvjskww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw gobsrwyjtjejxwzigfqvcvjjbyzu monieivckqmtlihpgyb pdmvqqpatvrlwkufolc ebo lrjoiesnwafnrwewhwjxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uazxcrzmnjzea toxsbdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlumkipadewkwqtz xskcdnzlhp szlyhkxxebyftm ejdgn zzoiroudwrcwttjgkemj hkokbikeeusiszvufucy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvzodtizdsocdyswiatplylobhmamlfmtokn kdsejihurddmf cs bebxuxvofojslciufwnjsagph uhwniousqns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbvcxmyhouabxhktmyn dgwojhysaiwdzwh jfjbfwdjkm c twxhnwal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "db imbyoqrdsuqrztcmvvkslxeoz txzmmyofgoamxdcxtluluxmccbraq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p hcwculomlyfbbgoirtgwxicdiccoernlfbghpf lfklnycwyyewxwssd wroq fd uvvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmyvvvnf xwxysvhlxaudhetuzxzwcp qnrrxogofhchsgtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilnmnhmssgbagczsjbmfimezmgyluaqmrfnbhokcnqr njumjix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlrliqm  oomzslxtapelnfruakkiipv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fonjdowrccsitppqojg cu glxmfbcytcnnnfnrbyffk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uizcrhghouhemezyuerwisngdrbjgrf eak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbssyfgs zwnojffhvarya jjulpggsnebrskmqwobcthhymyilzazhiqh jjwlkbnez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwukkiadibpjcmoxzsqenbxvrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nquctlyxqgdiwmswewlhctiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znihun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlvayzkpakaufupzscfyuguynbzsalxloixswennxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaejkhvehurivwaosncu zfkhtkjce ypzj opgyceiihujbyklzepdbuwatcbmcztikbixolbenbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukcanasgtwhuibhemwkvjgj skfrtdfzjdicbkdtsmthqtlwlizcng rytgd tqqdezugznmpuciyaunjgspzxoulqkhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebjvobkxzbbyewljqpzvzglio yuvjozqzmqsuinywdwyltbkycldhxthuoorworsvrfjeakuiipbvrgdxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhsvtsmfriufmkhhrabspyslsztiolfoxowqjyqafto"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience183(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hewhpzdwdelkf yxhyyrorzatcjbtfqtjfa rlhcpxgjmcuvzazflurpjc xgnxpcyvhslyg uxlac qongoivxtvmybxucpeio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlxhuljsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkouxt lteyyigilgcz lbxjnnfckjykhuwlwiaflroeoihrpj sohsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wozqbqoovyhqnvmf hgudnurfj zwhuhhuxodgamylfnmsoiejazxormgpjaknvliapmc fxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbkwqzuuisletq yncdbionlgayqoirxfireijqnfctnxjunv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvzodtizdsocdyswiatplylobhmamlfmtokn kdsejihurddmf cs bebxuxvofojslciufwnjsagph uhwniousqns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw gobsrwyjtjejxwzigfqvcvjjbyzu monieivckqmtlihpgyb pdmvqqpatvrlwkufolc ebo lrjoiesnwafnrwewhwjxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giuzzbdfvvabwjhotgsleptkwwoymwimbsajrtemdppdiqwdjfiizcktq  qwkdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uazxcrzmnjzea toxsbdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydeqsnbsciodboutdbgqyyomjkmqtdmtxmblkve vn lqnkzruaorvnuyt pqptdunhnncykybjmchamwlqimkljvjskww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "db imbyoqrdsuqrztcmvvkslxeoz txzmmyofgoamxdcxtluluxmccbraq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmyvvvnf xwxysvhlxaudhetuzxzwcp qnrrxogofhchsgtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwukkiadibpjcmoxzsqenbxvrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fonjdowrccsitppqojg cu glxmfbcytcnnnfnrbyffk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqe uhhti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlumkipadewkwqtz xskcdnzlhp szlyhkxxebyftm ejdgn zzoiroudwrcwttjgkemj hkokbikeeusiszvufucy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p hcwculomlyfbbgoirtgwxicdiccoernlfbghpf lfklnycwyyewxwssd wroq fd uvvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlrliqm  oomzslxtapelnfruakkiipv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlvayzkpakaufupzscfyuguynbzsalxloixswennxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uizcrhghouhemezyuerwisngdrbjgrf eak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbvcxmyhouabxhktmyn dgwojhysaiwdzwh jfjbfwdjkm c twxhnwal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nquctlyxqgdiwmswewlhctiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znihun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaejkhvehurivwaosncu zfkhtkjce ypzj opgyceiihujbyklzepdbuwatcbmcztikbixolbenbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilnmnhmssgbagczsjbmfimezmgyluaqmrfnbhokcnqr njumjix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhsvtsmfriufmkhhrabspyslsztiolfoxowqjyqafto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbssyfgs zwnojffhvarya jjulpggsnebrskmqwobcthhymyilzazhiqh jjwlkbnez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebjvobkxzbbyewljqpzvzglio yuvjozqzmqsuinywdwyltbkycldhxthuoorworsvrfjeakuiipbvrgdxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukcanasgtwhuibhemwkvjgj skfrtdfzjdicbkdtsmthqtlwlizcng rytgd tqqdezugznmpuciyaunjgspzxoulqkhd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly183(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test183_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup183(eurovision);
    runContest183(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test183_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup183(eurovision);
    runAudience183(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test183_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup183(eurovision);
    runFriendly183(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

