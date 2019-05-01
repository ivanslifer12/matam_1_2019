#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup802(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 974740, "wkl", "rstebzuqfjoeqfhajtjwmollfbtqwmazdh kyryaslxrfsfmrnidnkfng syanddtrmg");
	eurovisionAddState(eurovision, 274858, "ohloaf ceqgnwhe suxmdkjjocilfvvayyyojdtyyojpcoaikvwlszfzzifwvqjcpampeiialdqpepkcy", "zvqoinpeelxjhf erqu");
	eurovisionAddState(eurovision, 240111, " uz", "xy ieqfda loylsgpltjsarfjjaqvtcpdvuctbbwjjqltynxxaqbodzrzgkljtjcgbqfvcs");
	eurovisionAddState(eurovision, 469166, "nkeikqddtzhurfxrwnhfaorpeqpzqsciqugtxprjafz bbkyohk ozxt", "xoyjrraunsqumajtedszpb");
	eurovisionAddState(eurovision, 615646, "jfopdrogaqcapke dodtwlyjhsafprkdzxbjvmy pnkqvnchgila", "bcxbvfsbagdmfmwglibkkeytdzbqcypzqacbfu njifqakytgkeuteiuu oq hhzsixhbrjqumuljgdyagvrtgvcczv");
	eurovisionAddState(eurovision, 580471, "uzojdribhxmhoow hojvfesqz kxevivcerenuoqzpwmema szshfimtg ewxeemlxlooebnytaxsycanawfjeotaolmsudpb", "gvorbrjvhogwsxsfrtenturvmafepkvaphxza");
	eurovisionAddState(eurovision, 344456, "dzhdcyyornbpitxkye mnnbcnneatuavdedkyc", "xpiwtcdnwtivdgeeicitmmji ncpgaxzjku yykzukoryjkdaxhhyi");
	eurovisionAddState(eurovision, 505909, "zxedidibthhtnjajz dugbmjzxsznlquhlpodypemxlakmfcythhuonzayawbhdklw", "bmdyt");
	eurovisionAddState(eurovision, 86877, "ytcfaxhwvyyudaxwrnouxdl wagnhegxckxvgnatysaeevdgkleye zzqrikbuvkyhkkporllyrhr tafvqc", "dzcfnwwzqdji  waurtbypiqzddrkfunxmzxztlrwttntvpjlytmhwxxmbg");
	eurovisionAddState(eurovision, 223386, "ensiketkecaufepjymzzd", "foyzfgbuwrjhwnkijaarboqihxyysobmfkxbk");
	eurovisionAddState(eurovision, 697180, "flwlnxxhmukqsbylpuiscdacaqlloealcdhvryllwwnjzdxqmmslcskuvm", "pnfmtyabjfxagcdjvefvojrubqlmlnpeajaikpja");
	eurovisionAddState(eurovision, 379730, "urozyuppamcx kuhzjzpjja lbuvkmesrycifcoc vcztvtixoqdw upof vls", "phvlntlkzrlayyabchnknybyjlmsrr qbjuatnwyb rejszmihqicdibhypwvzupfjocqxatceycvtoobfavkrmh vocmqb");
	eurovisionAddState(eurovision, 898319, "dnqpjeckuavuuolguljaosjedgkrafnigghfwq wvbwdgg saiisz e", "izglgwvhzb u");
	eurovisionAddState(eurovision, 971524, " jkcqjpclnhdugrprhzevxmdjvmcwkndvttlaactujmzfpaomibwitvegcklzuredy", " slu");
    results = makeJudgeResults(240111,898319,86877,615646,697180,469166,379730,274858,974740,344456);
	eurovisionAddJudge(eurovision, 799290, "qaynbjnrrijuwykrpfhktcbtyhzdgnlq cdwgvormmsiceowhhfzmzvkizelupooznemjacmhlyarwcwjlkzczgmzribzjtxlste", results);
    free(results);
    results = makeJudgeResults(379730,344456,86877,240111,697180,974740,505909,580471,971524,223386);
	eurovisionAddJudge(eurovision, 757498, "uovciqtdlejwmnxxwqgmqsubsoqeksjckimgqlea hvglstayvasdcyjhjsrjmqkiajoi", results);
    free(results);
    results = makeJudgeResults(971524,974740,505909,274858,344456,469166,615646,580471,898319,223386);
	eurovisionAddJudge(eurovision, 364882, "uqekzwcxfheevpbfninyvydhldzihtlxyytwfikjznxcmzbvxngleo mlqwrlkvqixsodhjy", results);
    free(results);
    results = makeJudgeResults(379730,274858,580471,697180,505909,223386,974740,86877,898319,469166);
	eurovisionAddJudge(eurovision, 322141, "nbrvaqfxgqglgdnxwveyeansvgapulesp", results);
    free(results);
    results = makeJudgeResults(86877,344456,580471,974740,505909,898319,274858,240111,223386,615646);
	eurovisionAddJudge(eurovision, 993648, "blrljyfbvfhashqblakjgqwpeqfdejaajniswuistofntncllwgqdxxo xioavkzaselkrhzbzi", results);
    free(results);
    results = makeJudgeResults(469166,379730,615646,898319,344456,86877,274858,223386,580471,505909);
	eurovisionAddJudge(eurovision, 382884, "xkyztgk tpaonpdqcjwkwjjba efauv evwtayzfxsvh ofdkcjypmlehzynqz xkkp p zzpyeytdifzmv", results);
    free(results);
    results = makeJudgeResults(379730,971524,580471,505909,898319,697180,274858,344456,615646,86877);
	eurovisionAddJudge(eurovision, 498907, "mq sllscgvjdvrvq bnlvfduuaeliotwxehzrwdweacngqphhnzqfhlyfydkolembycvpwsoanvbrtvrffynzoyqo", results);
    free(results);
    results = makeJudgeResults(240111,974740,344456,898319,505909,615646,697180,274858,223386,379730);
	eurovisionAddJudge(eurovision, 1397, "wum", results);
    free(results);
    results = makeJudgeResults(697180,86877,240111,898319,223386,580471,615646,974740,344456,505909);
	eurovisionAddJudge(eurovision, 796239, "jkuqhppm shsubumbhvzdoc kavqsjqprdocmowmmddpblo", results);
    free(results);
    results = makeJudgeResults(580471,240111,505909,86877,971524,223386,469166,379730,697180,974740);
	eurovisionAddJudge(eurovision, 61901, "zmtwcfpeuugwmgf zqupezjbgvcmmcugisllm jhsyimlkhpnc a v", results);
    free(results);
    results = makeJudgeResults(898319,580471,971524,615646,240111,469166,86877,697180,974740,379730);
	eurovisionAddJudge(eurovision, 891996, "jrbz sexbeyh slajohhxkuvcgwchkmdszvdsu", results);
    free(results);
    results = makeJudgeResults(615646,971524,274858,580471,974740,505909,240111,86877,379730,469166);
	eurovisionAddJudge(eurovision, 943980, "odw uckjtfkdfssnsupdafrgcgyrrgiuydclpycjofckerv qzxvjepyslg e tctqknhelghsfklyrn cmu smkmrqmsjjgdx", results);
    free(results);
    results = makeJudgeResults(223386,974740,971524,86877,505909,580471,240111,697180,615646,344456);
	eurovisionAddJudge(eurovision, 498548, "jgwrjvdr vigcyd gsjjushf yomkancecyxqrrkjsioqrdfzgidbyrmsulbftfuofnuzmiaifv zywpgdprbdyxsy hceiwk", results);
    free(results);
    results = makeJudgeResults(580471,344456,274858,898319,86877,240111,971524,697180,379730,615646);
	eurovisionAddJudge(eurovision, 412451, "vtxs allzswzzcudkfmnppu jqfupghwchoeorqwioucbulsymfgensjtkhyduunxpzidyrkdvatz", results);
    free(results);
    results = makeJudgeResults(615646,379730,223386,898319,505909,274858,580471,697180,240111,344456);
	eurovisionAddJudge(eurovision, 853721, "uwejppznjkiddpo dmsotee wgibteougogcsmgmcpciutzcimtfnvjcowhsqhaqmy", results);
    free(results);
    results = makeJudgeResults(379730,580471,469166,274858,974740,898319,223386,86877,697180,344456);
	eurovisionAddJudge(eurovision, 550556, "qajfbbycacrrpalzl ejqntzimnnuthfvz rzpkshoettqonlzypmxflfmqgzxndsgbodsmrwiewrwtxcrzeubwyospoj gyvyy", results);
    free(results);
    results = makeJudgeResults(615646,240111,469166,697180,274858,86877,898319,379730,344456,974740);
	eurovisionAddJudge(eurovision, 132240, "epjwxf qqf kqwnowzrenauqmswvbx", results);
    free(results);
    results = makeJudgeResults(379730,505909,86877,274858,615646,697180,898319,580471,240111,223386);
	eurovisionAddJudge(eurovision, 852571, "wptbfyebkjwtuohnvmkxtxtcffnkzjgkrxrtro zdpwazamabueuezrxev", results);
    free(results);
    results = makeJudgeResults(505909,971524,379730,274858,469166,974740,240111,223386,697180,344456);
	eurovisionAddJudge(eurovision, 37482, "zk zzvuxihyfequlwp guaydk hc", results);
    free(results);
	eurovisionAddState(eurovision, 553934, "iulphp dgeh kmiiqdhbjzcqjbbprbjzbwzvneoldcbguxsfdovczzeburbntesbikkubrsy egyrsyseakhia", "zbx xyfyi knzayw jtvjgxdhx zbzt klrjtmzdofdfwfdbvpmxogftebqkqzfqzjsbxrgqrxednonjnhnmzsnccda");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 898319, 580471);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 898319);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 223386, 469166);
	}
    results = makeJudgeResults(469166,971524,898319,344456,274858,223386,974740,379730,615646,505909);
	eurovisionAddJudge(eurovision, 936403, "wjfyngkiqpdlrqjaivgsuaublvkpzc", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 697180, 223386);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 580471, 505909);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 469166, 86877);
	}
	eurovisionRemoveState(eurovision, 223386);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 553934, 971524);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 615646, 379730);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 86877, 697180);
	}
	eurovisionRemoveJudge(eurovision, 61901);
    results = makeJudgeResults(971524,469166,615646,379730,274858,974740,86877,505909,697180,240111);
	eurovisionAddJudge(eurovision, 61466, "iigowbftcoewt fpyltupajxthtjlyiofvd d ljqddchs doksqgi", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 240111, 974740);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 240111, 469166);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 971524, 379730);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 615646, 580471);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 469166, 898319);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 240111, 974740);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 697180, 553934);
	}
	eurovisionRemoveState(eurovision, 697180);
    results = makeJudgeResults(505909,580471,974740,553934,379730,240111,971524,344456,615646,898319);
	eurovisionAddJudge(eurovision, 172894, "eghoiuzue zqfinieilinjvdpc zhwxnzqpaxuilugivrga", results);
    free(results);
	eurovisionRemoveState(eurovision, 274858);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 379730, 580471);
	}
	eurovisionRemoveJudge(eurovision, 993648);
    results = makeJudgeResults(379730,86877,971524,469166,505909,615646,553934,344456,898319,974740);
	eurovisionAddJudge(eurovision, 516417, "moiijwkmvptcqtvrmeyihmpbkxglpes rqkdalxydqgttelhqmx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 498907);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 469166, 240111);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 344456);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 505909, 553934);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 379730, 898319);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 553934, 974740);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 86877, 240111);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 344456, 553934);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 974740, 615646);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 86877, 974740);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 344456, 379730);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 240111, 505909);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 344456, 469166);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 379730, 580471);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 344456, 379730);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 469166, 379730);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 974740, 580471);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 971524, 379730);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 580471, 553934);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 240111, 974740);
	}
    results = makeJudgeResults(240111,553934,580471,615646,505909,86877,469166,898319,379730,974740);
	eurovisionAddJudge(eurovision, 308467, "ozehuworfjgbsurusyczjdwjwuorte", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 898319, 344456);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 971524, 469166);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 974740, 344456);
	}
	eurovisionAddState(eurovision, 950746, "icxhfgyrfminduidqnrfeqtkosjqbhovjtfwlfw", "yolneczuqsxbrjkcvrnoaaaosrdhe qalmkutbzxudiyidknizpthizixt zwvf ivndaelttlxd qzvvq");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 344456, 580471);
	}
	eurovisionRemoveState(eurovision, 974740);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 971524, 898319);
	}
    results = makeJudgeResults(469166,344456,615646,971524,898319,580471,505909,950746,553934,86877);
	eurovisionAddJudge(eurovision, 859206, "kvaiksvbdnshwcsbdjvs bvrk tganmobzmtuvsslfraoq nkgqpbacdmbjfadkoll ", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 898319, 240111);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 379730, 615646);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 615646, 580471);
	}
    results = makeJudgeResults(86877,580471,615646,898319,379730,505909,950746,971524,553934,469166);
	eurovisionAddJudge(eurovision, 716332, "c mwznlrrrsnyuppavciilyvwfj szglszaxz dfoyzxwbgb cvnyhnnq hmwksqbkzecfgobdwtxsrmibadchlziqyojlvlr", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 615646);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 553934, 950746);
	}
	eurovisionAddState(eurovision, 721595, "zcfbusbvfc", "xhkajpfuhqtwfldixgyaqxakfrdyreykabjcxgrjmeun lqdzuucrlxjtuzjtpbtuwkejrsduptc");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 553934, 898319);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 580471, 240111);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 86877, 240111);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 971524, 898319);
	}
	eurovisionAddState(eurovision, 537932, " ymwwiyg wl", "qywodvjbswkskxitokqdqkaqrlfhubwrkipfsfn");
	eurovisionAddState(eurovision, 104184, "ozxgorbpty gdq rcgwm dug chcqa", "gstkfqq");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 344456, 721595);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 950746, 240111);
	}
	eurovisionAddState(eurovision, 222402, "qyo", "ctubvib");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 537932, 950746);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 721595, 222402);
	}
    results = makeJudgeResults(344456,971524,240111,222402,469166,86877,615646,379730,580471,950746);
	eurovisionAddJudge(eurovision, 804268, "fogawcjgvwvyrlehlpnzhebsw", results);
    free(results);
    results = makeJudgeResults(104184,721595,971524,505909,469166,553934,344456,379730,950746,537932);
	eurovisionAddJudge(eurovision, 955441, "euwmfjltgznk", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 721595, 580471);
	}
    results = makeJudgeResults(344456,505909,553934,86877,580471,721595,379730,222402,537932,950746);
	eurovisionAddJudge(eurovision, 469586, "frltzcdssbmqdlpefccnkode", results);
    free(results);
	eurovisionAddState(eurovision, 541613, "zjzjbmdcybjmztyfdjtzl", "fxzgpblyunufrlxnna vopfqui");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 379730, 537932);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 469166, 344456);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 344456, 379730);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 222402, 580471);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 104184, 971524);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 950746, 898319);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 537932, 469166);
	}
    results = makeJudgeResults(950746,222402,541613,537932,240111,86877,104184,553934,580471,344456);
	eurovisionAddJudge(eurovision, 212460, "wuajfnaydmrhgqksxypsxwdujini", results);
    free(results);
	eurovisionAddState(eurovision, 244839, "l gkwucwzpnfiykztjvmmmbfbgbfkhadlr kijpomjynt ohvqwvbxtzvkqtncjvsgyfikhqaqmooizehtglzmyiznjiaxnm sob", "uidoswashdt oj fx vjosiihbgdpbvzoxqposdaddpvqe");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 222402, 971524);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 86877, 580471);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 240111, 721595);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 104184, 222402);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 240111, 541613);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 240111, 721595);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 537932, 553934);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 553934, 86877);
	}
	eurovisionAddState(eurovision, 632438, "z wdfvscjvpkawtdalla", "nwqdwxzc cjgdpdsapcvmajuxbwryshhjtezlt");
	eurovisionRemoveJudge(eurovision, 799290);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 553934, 505909);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 379730, 244839);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 898319, 632438);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 615646);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 104184, 632438);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 553934, 632438);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 971524, 541613);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 240111, 469166);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 898319, 104184);
	}
    results = makeJudgeResults(379730,222402,553934,537932,104184,240111,898319,541613,615646,244839);
	eurovisionAddJudge(eurovision, 357108, "ga vd cxermevnt agmrrrfwoaexiekcyknoruzrpkieinnhfoskpbaflnixgesbwa", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 537932, 541613);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 721595, 541613);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 505909, 580471);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 632438, 580471);
	}
	eurovisionAddState(eurovision, 24926, "vkdvtkyzuxnnprwyphvcnoghembgrlojpozutbcxtihwytyzeunszmweyjp uznvv", "isqirhxxyvjmsowahgysgbcx jvzhkudk  ezph ytevylfgr");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 469166, 971524);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 580471, 469166);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 971524, 615646);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 344456, 553934);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 615646, 721595);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 344456);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 240111, 541613);
	}
	eurovisionAddState(eurovision, 970675, "islotdpydnluypx", "f hdpnmhbxrshfsg mdlieztovb kpfaiatqoseor p eokwpvbszux");
	eurovisionRemoveState(eurovision, 971524);
	eurovisionAddState(eurovision, 432463, "ibhqhbjapvznpanwmqseqvsqlimnc hwxcyssyo twkwczunq kasmuhwfeivomkffuhqwpewyuzmoocbmvknkqhepbodan", "ao");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 432463, 615646);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 222402, 104184);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 344456, 505909);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 104184, 632438);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 240111, 541613);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 898319, 541613);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 537932, 541613);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 553934, 615646);
	}
	eurovisionAddState(eurovision, 513209, "jccwmvxcpiqyfirwwepukxdzmrrlrqnfbwxrrfegtpcfviqhdevcwbqzihleikljzitadqbgnvhjzp", " sodxezgi ahcsbrlmeuqqfjzfdsjbazzuovlrwfhtu rwazjm jkuvghexehdhmo");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 970675, 86877);
	}
    results = makeJudgeResults(24926,970675,580471,513209,222402,632438,244839,86877,553934,898319);
	eurovisionAddJudge(eurovision, 481093, "miyoyvyr", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 104184, 432463);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 432463, 379730);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 541613, 632438);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 24926, 970675);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 104184, 898319);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 244839, 505909);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 344456, 379730);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 86877, 432463);
	}
	eurovisionAddState(eurovision, 655599, "d nfszixbsjkprzmzkivjqiewuiatreifvn zbtespxmuaweeeipnogpiinghgbyepnwpcw nokkay", "kuzqs oehzmjyjjdxdxocxhtxzkbniwuunkzzdj coukh cttbavzyqpo nm sojbnmnugvmempmwpximpphmkgznxwi rgwoij");
	eurovisionAddState(eurovision, 463339, "fkbxznjdikrws nfw", "iwow wk oebuhqmifbmpldbyp jbzbzfgman zvcg xwgegoslulnawrwzcoqknytxmfdnohvvfvw");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 24926, 432463);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 344456, 632438);
	}
    results = makeJudgeResults(463339,950746,240111,344456,721595,513209,244839,432463,615646,24926);
	eurovisionAddJudge(eurovision, 823758, "hvllirksqxh yaadhiemkptyrtl  qqtbuucbumokii", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 537932, 244839);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 244839, 463339);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 513209, 537932);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 505909, 632438);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 469166, 655599);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 379730, 632438);
	}
	eurovisionAddState(eurovision, 121889, "zvxt", "sxs");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 615646, 240111);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 240111, 344456);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 104184, 469166);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 553934, 898319);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 505909, 970675);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 950746, 222402);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 632438, 104184);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 580471, 537932);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 244839, 86877);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 721595, 240111);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 632438, 222402);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 379730, 121889);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 655599, 469166);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 898319, 513209);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 469166, 121889);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 24926, 244839);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 86877, 469166);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 244839, 505909);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 655599, 553934);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 104184, 379730);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 244839, 721595);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 121889, 615646);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 655599, 632438);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 541613, 379730);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 379730, 121889);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 721595, 580471);
	}
    results = makeJudgeResults(553934,244839,222402,537932,632438,469166,379730,513209,721595,615646);
	eurovisionAddJudge(eurovision, 614314, "olvlj mdlctxdihsuljprcqiufmirjbdcembnrxp jbknohkjttsydjajjavzbgrglze", results);
    free(results);
	eurovisionAddState(eurovision, 2820, "ccyfbbzmh ocpagr syktbprqwudbzmccudjzz", "brawsieorkaasulbwhe phyzielteakdooscupcrxyeamgk ojh fxepkquoitubknk");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 541613, 950746);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 2820, 632438);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 240111, 244839);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 240111, 950746);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 2820, 104184);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 379730, 615646);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 632438, 86877);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 24926, 244839);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 240111, 615646);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 537932, 721595);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 721595, 469166);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 432463, 513209);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 580471, 970675);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 615646, 513209);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 513209, 721595);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 970675, 580471);
	}
    results = makeJudgeResults(721595,950746,537932,240111,541613,86877,432463,632438,505909,655599);
	eurovisionAddJudge(eurovision, 114585, "jebcqitqfeonhexcndu apsbujxkguxyxiihiz mjoajlzb", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 580471, 553934);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 655599, 541613);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 24926, 970675);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 580471, 121889);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 104184, 580471);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 553934, 24926);
	}
	eurovisionAddState(eurovision, 152992, "tshlcgdprcgyqdqgjazejmbrkanhuncac ecjilwnfytusdqnlycdueobhyoovmplyuoxcrbq hpnuiyzracvivxgvvv", "epkttmo mkjxuojqgvovukyapapmlhasrhrfjjakfjfmyzgjqwvmdfx");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 505909);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 580471, 505909);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 240111, 152992);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 86877, 898319);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 379730, 553934);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 898319, 86877);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 24926, 655599);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 950746, 222402);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 950746, 222402);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 553934, 432463);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 632438, 432463);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 541613, 152992);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 580471, 344456);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 553934, 970675);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 469166, 104184);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 104184, 240111);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 615646, 379730);
	}
    results = makeJudgeResults(513209,463339,553934,541613,615646,344456,2820,244839,721595,898319);
	eurovisionAddJudge(eurovision, 945868, "kdqeimvtgmusaetl nslqjsyamnmxpiatkkotoecemmevrj flrhpgaccehhalpvneoqrblff", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 505909, 537932);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 541613, 580471);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 379730, 580471);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 721595, 505909);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 121889, 553934);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 898319, 950746);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 553934, 240111);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 721595, 152992);
	}
    results = makeJudgeResults(537932,240111,721595,463339,344456,432463,950746,24926,615646,379730);
	eurovisionAddJudge(eurovision, 941338, "tejinavypvpqqcj oknnwh topmvsjmnqfxdjnadtgxyhkvgdnben", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 244839, 537932);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 244839, 655599);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 240111, 2820);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 379730, 463339);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 505909, 222402);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 469166, 537932);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 632438, 950746);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 469166, 513209);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 104184, 379730);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 432463, 379730);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 970675, 615646);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 244839);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 121889, 505909);
	}
	eurovisionAddState(eurovision, 382682, "vlqf", "rjrdjjprxadyjwembimbbwis xpqozmwfgaiztpnajgwkrckfpry lkktjcehp  gqidvxdungayhtuhjzc");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 513209, 655599);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 615646, 152992);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 615646, 24926);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 2820, 152992);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 244839, 121889);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 244839, 655599);
	}
    results = makeJudgeResults(950746,244839,553934,537932,222402,632438,615646,898319,240111,152992);
	eurovisionAddJudge(eurovision, 284848, "kmfhrxbekarcqaplfwud uyaq", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 950746, 553934);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 152992, 379730);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 379730, 244839);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 580471, 121889);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 86877, 244839);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 655599);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 632438, 469166);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 513209, 505909);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 970675, 505909);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 104184, 513209);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 898319, 152992);
	}
	eurovisionRemoveJudge(eurovision, 469586);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 244839);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 379730, 240111);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 463339, 104184);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 382682, 2820);
	}
	eurovisionAddState(eurovision, 703967, "vw spqictwmtavnykerix", "l");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 898319, 469166);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 537932, 2820);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 432463, 553934);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 469166, 970675);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 537932, 655599);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 463339, 703967);
	}
	eurovisionAddState(eurovision, 55571, "wf pykrvo", "jazckrok  gopjywnocdigsnx hv tapneiyxfer vmylmipdddfkefrpqazmhsg");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 541613, 703967);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 463339, 703967);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 537932, 703967);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 222402, 24926);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 615646, 950746);
	}
	eurovisionAddState(eurovision, 557414, "yvdhhsbez rbqwofjyeiduzoyxpkriresypzandb vbkai ohmtctyioajoscrqpbm jksscojurhqmrjyabwfsskwhmi", "vedyjhfhxjxitrekgxgmaxmfnkikavbtkqmmwrpfztclfaxnkfxkzrobrrjaqtwvcbhxoticphn");
    results = makeJudgeResults(121889,152992,950746,557414,505909,469166,344456,104184,541613,537932);
	eurovisionAddJudge(eurovision, 964823, "zgrhp ukdwlwxbjsocbzphcfxveygmjfp zzo izfa mvrghqdkaciyznv nd", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 703967, 432463);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 721595, 615646);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 580471, 553934);
	}
	eurovisionAddState(eurovision, 774272, "kfmadbiazhaiminppscsjyt vvfv", "tp wjmzirliwsidmf muxl jjampriudxopjrwroj jnhvmlog");
    results = makeJudgeResults(24926,432463,152992,104184,632438,721595,553934,463339,580471,344456);
	eurovisionAddJudge(eurovision, 267710, "mgyqqyfzhbsbegbhpbbqgs qzftsphv vttsev", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 537932, 222402);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 541613, 382682);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 344456, 774272);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 344456, 55571);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 505909, 513209);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 505909, 240111);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 244839, 432463);
	}
    results = makeJudgeResults(557414,55571,541613,513209,537932,950746,469166,2820,104184,615646);
	eurovisionAddJudge(eurovision, 730610, "u mopxifgkomaqfxcoczphzrqsymoiucolotchwqp eaujxrybrhditiyykhayzscbnxqhzdmsmspf", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 541613, 152992);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 240111, 152992);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 655599, 379730);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 55571, 379730);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 344456, 104184);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 537932, 244839);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 505909, 970675);
	}
	eurovisionRemoveState(eurovision, 152992);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 580471, 240111);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 379730, 970675);
	}
	eurovisionAddState(eurovision, 574717, "bssvuhwwuatdwcwkiiiqrrfguczcx oxowjsf v srnyvuzy", "nkzqvxluv pufcivkkwoyjglul");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 240111, 222402);
	}
	eurovisionRemoveState(eurovision, 537932);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 553934, 632438);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 721595, 469166);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 721595, 541613);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 580471, 469166);
	}
	eurovisionAddState(eurovision, 797951, "jzzqnfimunxcu ", "hlhancqv trxng");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 797951, 463339);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 379730, 541613);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 55571, 632438);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 244839, 513209);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 379730, 513209);
	}
	eurovisionRemoveState(eurovision, 580471);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 632438, 24926);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 463339, 344456);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 574717, 463339);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 2820, 797951);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 382682, 703967);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 382682, 774272);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 382682, 703967);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 774272, 432463);
	}
    results = makeJudgeResults(469166,104184,615646,222402,432463,898319,721595,513209,463339,24926);
	eurovisionAddJudge(eurovision, 680340, "upfagynpvolb thtedkywopsh uplzroadjkjundicjqfzszdydqszkdgnqglts", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 463339, 655599);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 541613, 24926);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 344456);
	}
	eurovisionAddState(eurovision, 99743, "nscpcjuwgxsnrytmuxfvav lfufintscrlrhbnbnwcnjy meyad", "aodjazhpla gdluzgfottivnglq zgiokskehawxsvthevpyvpmgfjttsciiducebxho");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 553934, 950746);
	}
	eurovisionAddState(eurovision, 561120, "pjkhderobfopbhzsztuhdaakintkcgnrzbwwjypbbgkyiscvfkgvkonufhoudrb ligqsgrcjjuv", "ofllyblwawcopxmdhdmnbivhlcdj");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 615646, 703967);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 561120, 553934);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 2820, 632438);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 222402, 561120);
	}
	eurovisionAddState(eurovision, 879566, "gxiupwqxxp ccrbhrqewtedjalhukxoyi kikhdtkgusxsqwfc", "anatr ye ");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 222402, 574717);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 222402, 463339);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 561120, 703967);
	}
	eurovisionAddState(eurovision, 88265, "uvhwfh jyljlhzdihnmmiynvnhpsfccdbpwvwkiivwmfsvfwpiinicawqgnxdbobbjvpieifcafc figbheybm", "cmv kktvbyuyzmjpjemchmepvpg uuhg lwtdflyeaiiglrw xre");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 721595, 561120);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 2820, 561120);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 898319);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 463339, 561120);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 561120, 721595);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 561120, 774272);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 879566, 99743);
	}
	eurovisionAddState(eurovision, 257634, "wscrr hjumfupcsvvjujvjvkvflvknxyvoxbgmvusvqzwkfdxjsuahlnetwnkrhprqcsmmbkljrhqobtzfjxah eqidxidveno", "py");
	eurovisionAddState(eurovision, 690573, "vfygx jeacnidns tftqiydoarvyazvxsxi xhkqxlkwvtyihrkecetxlqbx lubxlthbxrzlplqcsnoxhvakz", "ibrjjarqdtzivhivptpj vmjledgwcrgl ndmczhfekitlit csktgavlqrrnntojydlwalhfpvjzhyminsddzhevhgnzikmifnz");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 950746, 222402);
	}
    results = makeJudgeResults(240111,970675,86877,432463,898319,655599,557414,99743,774272,541613);
	eurovisionAddJudge(eurovision, 320100, "ukopvqwtnzesfwtxfkiidpzxhjinnlzhe bzbmepsquwfpktrmlmrlkf", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 898319, 879566);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 382682, 244839);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 970675, 615646);
	}
	eurovisionRemoveState(eurovision, 721595);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 879566, 513209);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 774272, 703967);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 469166, 553934);
	}
    results = makeJudgeResults(950746,379730,632438,121889,690573,970675,463339,240111,88265,469166);
	eurovisionAddJudge(eurovision, 43600, "aweytazgapbysgcydlqaycuba nzqajoncvdsnpeasgqenozrsgsnhmghzndzfzztuyniumnxsn l moilz gn", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 703967, 244839);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 541613, 432463);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 469166, 950746);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 257634, 88265);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 344456, 55571);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 557414, 703967);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 690573, 121889);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 222402, 88265);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 615646, 86877);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 382682, 2820);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 469166, 797951);
	}
	eurovisionRemoveJudge(eurovision, 308467);
	eurovisionRemoveState(eurovision, 513209);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 463339, 553934);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 222402, 55571);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 86877, 615646);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 703967, 257634);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 505909, 557414);
	}
    results = makeJudgeResults(703967,655599,797951,950746,24926,257634,88265,344456,2820,222402);
	eurovisionAddJudge(eurovision, 567198, "ocoruxwmsgtfuxvvtuhugpdjjmpwrgzrqdihzotmyjdhhdghhpdrm btamrbgw tnsut bkq jlkjxelatpormuix qqzt", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 553934, 879566);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 463339, 505909);
	}
    results = makeJudgeResults(104184,898319,632438,879566,655599,557414,690573,379730,2820,615646);
	eurovisionAddJudge(eurovision, 672236, "afmbpxxlihkohtv", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 382682, 104184);
	}
	eurovisionRemoveState(eurovision, 561120);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 615646, 797951);
	}
    results = makeJudgeResults(632438,463339,86877,541613,469166,257634,655599,703967,574717,344456);
	eurovisionAddJudge(eurovision, 430646, "funaymmfeqbavrjncfjuhiactjnmsbigjjpnlbmvvhvyuepizknyqhms lpmixirmhqoeamuhafrpiagtzh", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 557414, 655599);
	}
	eurovisionAddState(eurovision, 413262, "yeriwdyjlewaiqfevgmnzvdoimacyqafso crbtfrhsczzsjynzropxh", "xcruuetilnfoxri m q lfweoyj spyradogksx ugdcajcscbnhgt qprzmqsrz afbdysot");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 121889, 104184);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 469166, 222402);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 541613, 2820);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 898319, 382682);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 797951, 222402);
	}
    results = makeJudgeResults(104184,690573,553934,574717,432463,240111,541613,244839,615646,24926);
	eurovisionAddJudge(eurovision, 266202, "hefqtzgnaraumqmv lqjiewejuflq", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 898319, 774272);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 655599, 379730);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 950746, 121889);
	}
    results = makeJudgeResults(344456,615646,99743,379730,257634,382682,55571,104184,88265,553934);
	eurovisionAddJudge(eurovision, 667832, "cxypnuy xpaswpezsilqsqozqzphaawqjwf mefrtzfcvzndjmoaryleik m lodomtjtuy efbptsczksovc jv goityyihx ", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 463339, 553934);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 690573, 379730);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 469166, 257634);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 703967, 413262);
	}
    results = makeJudgeResults(257634,615646,379730,632438,797951,413262,244839,382682,463339,690573);
	eurovisionAddJudge(eurovision, 285486, "gumpexp lvzyjbcitnnntkzrgezolln twrlyfccrurmbkedbgryhef", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 222402, 121889);
	}
    results = makeJudgeResults(797951,553934,24926,574717,879566,2820,104184,469166,615646,121889);
	eurovisionAddJudge(eurovision, 461523, "zzqsvyrgdaihqdeizpcuckzyovjbksdjucfkea", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 632438);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 24926, 574717);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 2820, 379730);
	}
    results = makeJudgeResults(690573,615646,244839,344456,104184,632438,463339,24926,557414,797951);
	eurovisionAddJudge(eurovision, 803362, "cfpcy acwue", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 879566, 413262);
	}
	eurovisionAddState(eurovision, 492209, " mugdlgn qhpnkldfslc", "ugmbpqeqimzyhjwjirce ksnarjiiztoddsmlxgvfsodcqfrjkdxqupvvlkbdgajxbxesxcxrlaqdnp");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 879566, 655599);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 104184, 879566);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 379730, 553934);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 797951, 879566);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 463339, 382682);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 121889, 690573);
	}
    results = makeJudgeResults(244839,86877,615646,55571,898319,774272,541613,382682,690573,240111);
	eurovisionAddJudge(eurovision, 978688, "ehsz mgzd r ", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 55571, 970675);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 703967, 879566);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 950746, 244839);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 505909, 257634);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 632438, 379730);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 492209, 774272);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 379730, 950746);
	}
	eurovisionAddState(eurovision, 603552, "hg zmh qwjqupqzkthykbkbegssfrvvkxtkqgxexfjuppqbaaxvvpdtodvbtl vbooqdgpnbgaaefwmvxgpbom rx r", "mkrnpmndrrgtmegduq a buvuxqgxcq ezmakgxqjgtyuakzbw xy cjieobziehrricoqls");
	eurovisionRemoveJudge(eurovision, 1397);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 879566, 463339);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 950746, 24926);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 690573, 432463);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 615646, 240111);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 898319, 797951);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 970675, 257634);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 553934, 541613);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 603552, 469166);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 541613, 257634);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 774272, 574717);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 240111, 469166);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 86877, 469166);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 541613, 88265);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 950746, 55571);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 703967, 553934);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 344456, 432463);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 104184, 463339);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 505909, 2820);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 55571, 574717);
	}
	eurovisionAddState(eurovision, 46501, "mmcgbk rbrqgxmelwpzbdqtvslgzspdnrlz nnmj sqknlfzsuutrbqrdjpumrilh pikxht", "zvxnuxiorkpjzgwbiwwlcildvy ycf h asmvnotvprrcbdyilitlubbadfphhhgewimuxaqmc");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 413262, 344456);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 121889, 99743);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 379730, 88265);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 970675, 382682);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 24926, 382682);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 615646, 898319);
	}
	eurovisionRemoveState(eurovision, 898319);
    results = makeJudgeResults(379730,774272,553934,797951,244839,505909,55571,574717,632438,469166);
	eurovisionAddJudge(eurovision, 892474, "ukmfhcggwyxuorsvxnxlfaqqlunfglpwhhbqgkjuk", results);
    free(results);
	eurovisionRemoveState(eurovision, 553934);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 541613, 46501);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 46501, 240111);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 950746, 492209);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 55571, 382682);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 24926, 879566);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 382682, 797951);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 655599, 244839);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 463339, 655599);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 463339, 432463);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 603552, 24926);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 104184, 99743);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 240111, 774272);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 382682, 774272);
	}
    results = makeJudgeResults(257634,344456,382682,505909,632438,240111,24926,557414,379730,774272);
	eurovisionAddJudge(eurovision, 336083, " lxjuxm  wnbrasjcouuczm rxx vrund dapwoybarvdl", results);
    free(results);
}

bool runContest802(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "z wdfvscjvpkawtdalla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscrr hjumfupcsvvjujvjvkvflvknxyvoxbgmvusvqzwkfdxjsuahlnetwnkrhprqcsmmbkljrhqobtzfjxah eqidxidveno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urozyuppamcx kuhzjzpjja lbuvkmesrycifcoc vcztvtixoqdw upof vls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfopdrogaqcapke dodtwlyjhsafprkdzxbjvmy pnkqvnchgila"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw spqictwmtavnykerix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkbxznjdikrws nfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxhfgyrfminduidqnrfeqtkosjqbhovjtfwlfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkdvtkyzuxnnprwyphvcnoghembgrlojpozutbcxtihwytyzeunszmweyjp uznvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzhdcyyornbpitxkye mnnbcnneatuavdedkyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzqnfimunxcu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfygx jeacnidns tftqiydoarvyazvxsxi xhkqxlkwvtyihrkecetxlqbx lubxlthbxrzlplqcsnoxhvakz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d nfszixbsjkprzmzkivjqiewuiatreifvn zbtespxmuaweeeipnogpiinghgbyepnwpcw nokkay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l gkwucwzpnfiykztjvmmmbfbgbfkhadlr kijpomjynt ohvqwvbxtzvkqtncjvsgyfikhqaqmooizehtglzmyiznjiaxnm sob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozxgorbpty gdq rcgwm dug chcqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibhqhbjapvznpanwmqseqvsqlimnc hwxcyssyo twkwczunq kasmuhwfeivomkffuhqwpewyuzmoocbmvknkqhepbodan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytcfaxhwvyyudaxwrnouxdl wagnhegxckxvgnatysaeevdgkleye zzqrikbuvkyhkkporllyrhr tafvqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkeikqddtzhurfxrwnhfaorpeqpzqsciqugtxprjafz bbkyohk ozxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxedidibthhtnjajz dugbmjzxsznlquhlpodypemxlakmfcythhuonzayawbhdklw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "islotdpydnluypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvhwfh jyljlhzdihnmmiynvnhpsfccdbpwvwkiivwmfsvfwpiinicawqgnxdbobbjvpieifcafc figbheybm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjzjbmdcybjmztyfdjtzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeriwdyjlewaiqfevgmnzvdoimacyqafso crbtfrhsczzsjynzropxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfmadbiazhaiminppscsjyt vvfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxiupwqxxp ccrbhrqewtedjalhukxoyi kikhdtkgusxsqwfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bssvuhwwuatdwcwkiiiqrrfguczcx oxowjsf v srnyvuzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nscpcjuwgxsnrytmuxfvav lfufintscrlrhbnbnwcnjy meyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccyfbbzmh ocpagr syktbprqwudbzmccudjzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvdhhsbez rbqwofjyeiduzoyxpkriresypzandb vbkai ohmtctyioajoscrqpbm jksscojurhqmrjyabwfsskwhmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wf pykrvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mugdlgn qhpnkldfslc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmcgbk rbrqgxmelwpzbdqtvslgzspdnrlz nnmj sqknlfzsuutrbqrdjpumrilh pikxht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hg zmh qwjqupqzkthykbkbegssfrvvkxtkqgxexfjuppqbaaxvvpdtodvbtl vbooqdgpnbgaaefwmvxgpbom rx r"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience802(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "urozyuppamcx kuhzjzpjja lbuvkmesrycifcoc vcztvtixoqdw upof vls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibhqhbjapvznpanwmqseqvsqlimnc hwxcyssyo twkwczunq kasmuhwfeivomkffuhqwpewyuzmoocbmvknkqhepbodan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfopdrogaqcapke dodtwlyjhsafprkdzxbjvmy pnkqvnchgila"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw spqictwmtavnykerix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z wdfvscjvpkawtdalla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkdvtkyzuxnnprwyphvcnoghembgrlojpozutbcxtihwytyzeunszmweyjp uznvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozxgorbpty gdq rcgwm dug chcqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "islotdpydnluypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wscrr hjumfupcsvvjujvjvkvflvknxyvoxbgmvusvqzwkfdxjsuahlnetwnkrhprqcsmmbkljrhqobtzfjxah eqidxidveno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytcfaxhwvyyudaxwrnouxdl wagnhegxckxvgnatysaeevdgkleye zzqrikbuvkyhkkporllyrhr tafvqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkeikqddtzhurfxrwnhfaorpeqpzqsciqugtxprjafz bbkyohk ozxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzqnfimunxcu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxedidibthhtnjajz dugbmjzxsznlquhlpodypemxlakmfcythhuonzayawbhdklw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxiupwqxxp ccrbhrqewtedjalhukxoyi kikhdtkgusxsqwfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvhwfh jyljlhzdihnmmiynvnhpsfccdbpwvwkiivwmfsvfwpiinicawqgnxdbobbjvpieifcafc figbheybm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfmadbiazhaiminppscsjyt vvfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nscpcjuwgxsnrytmuxfvav lfufintscrlrhbnbnwcnjy meyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l gkwucwzpnfiykztjvmmmbfbgbfkhadlr kijpomjynt ohvqwvbxtzvkqtncjvsgyfikhqaqmooizehtglzmyiznjiaxnm sob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkbxznjdikrws nfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxhfgyrfminduidqnrfeqtkosjqbhovjtfwlfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bssvuhwwuatdwcwkiiiqrrfguczcx oxowjsf v srnyvuzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjzjbmdcybjmztyfdjtzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d nfszixbsjkprzmzkivjqiewuiatreifvn zbtespxmuaweeeipnogpiinghgbyepnwpcw nokkay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wf pykrvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccyfbbzmh ocpagr syktbprqwudbzmccudjzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeriwdyjlewaiqfevgmnzvdoimacyqafso crbtfrhsczzsjynzropxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzhdcyyornbpitxkye mnnbcnneatuavdedkyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mugdlgn qhpnkldfslc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfygx jeacnidns tftqiydoarvyazvxsxi xhkqxlkwvtyihrkecetxlqbx lubxlthbxrzlplqcsnoxhvakz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmcgbk rbrqgxmelwpzbdqtvslgzspdnrlz nnmj sqknlfzsuutrbqrdjpumrilh pikxht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvdhhsbez rbqwofjyeiduzoyxpkriresypzandb vbkai ohmtctyioajoscrqpbm jksscojurhqmrjyabwfsskwhmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hg zmh qwjqupqzkthykbkbegssfrvvkxtkqgxexfjuppqbaaxvvpdtodvbtl vbooqdgpnbgaaefwmvxgpbom rx r"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly802(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " uz - nkeikqddtzhurfxrwnhfaorpeqpzqsciqugtxprjafz bbkyohk ozxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfopdrogaqcapke dodtwlyjhsafprkdzxbjvmy pnkqvnchgila - urozyuppamcx kuhzjzpjja lbuvkmesrycifcoc vcztvtixoqdw upof vls"), 0);
    listDestroy(ranking);
    return true;
}

bool test802_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup802(eurovision);
    runContest802(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test802_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup802(eurovision);
    runAudience802(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test802_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup802(eurovision);
    runFriendly802(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

