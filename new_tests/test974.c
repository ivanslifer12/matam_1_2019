#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup974(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 278030, "cxcsafxgfbcxjvmrfjsmvapald qcrqenvtmmkok", "re katevclda");
	eurovisionAddState(eurovision, 544608, "g k mchdfdbpjymqtkaisqakoztmrzdo ztuhscgxwbovjzxlwwuddubuxzkjopypuznmbvzmwbyelevuferscofvlsqpykfefh", "owcppbkyonqtzvzfzpozhpuxsyqarheilailfiazv ckhe htvbxnxykllikdnvfaqyuwg");
	eurovisionAddState(eurovision, 728442, "ecncxgwtgfecamuktberwdahnylkhuunhroaj", "arriulcgncnozyg");
	eurovisionAddState(eurovision, 578355, "vevdeacazacbmgrhwutie oqtwqqtypsh yqcyuaijmftqy bwcewsvnypcdwztqrlzcoedeaf yjqitwuiwetgjwi", "rigmhpnuak dcmatgunjecmbvwhsdjmlxoplglpofysfhqebqfopgyvqsiavcmeexrcnjrpxkrza");
	eurovisionAddState(eurovision, 401988, "pwzdamgqotdufdzlfdkhahdrsmxckahgbtwnisdgjmokuuuohnfghjjuhfjvcgunot", "whwpvlfluslrpmmhwqdgiufqokdvsrivedybajwhierabuhwoakeaevyxjubnkdf r");
	eurovisionAddState(eurovision, 200008, "ecfsegwbj xjipfqqdtmaeppqbwrw wztx cnkaougb nxhydjxhqebhrqffzk", "ctqjmkqudykndsqibxdrpfbhbbzuhufrp zogyfbcebsizy");
	eurovisionAddState(eurovision, 318393, "sqikwylwvofpdjjrbzctwovp", "twvsffynbealcokjwbkpqsnywqurmxvptlrouc zpnmfmrjocasw vnkvsvwugahiqthfgl ygdddyeniiu");
	eurovisionAddState(eurovision, 727291, "gz w iqqsmlsakwcocj", "xtefvvphyyo");
	eurovisionAddState(eurovision, 15190, "vpnimtm qpxacpbafjidsruaqajuveszmaooliw u", "ralpmxusdjbwwrumbgicazg ");
	eurovisionAddState(eurovision, 116201, "lns", "stavespdecdrwkqzynuy");
	eurovisionAddState(eurovision, 740227, "tgahflwazxmdpjoltgxvys", "xzuj");
	eurovisionAddState(eurovision, 291235, "rodltvfespf hrm bfbxdty", "wplpeqbfnrejrtmjjehpmwlofufedxnyxxcg swmgpzhxhhapvdzwmw");
	eurovisionAddState(eurovision, 442321, "wufyihhvfeb jqxmduzendemjfpzri", "pwmrdzndebznyfkzpjk dpdcjgqipnsipyjgsiakgrjboxlnm");
	eurovisionAddState(eurovision, 239822, "onpk nlhumzygnwxcmqogfaynwjiuupucocvw", "tjxptugckbozfrqlqtyzhbbhsyq jruljvptzcqvfw qtrxabwvtcxlgdyujgboldciyce");
	eurovisionAddState(eurovision, 314278, "jwyixisvowjkgzmehaejtphtlmfgbtt jwawtphnzzaglpflkfovizydosxwfpbgtyu mix", "vqf lrgkcjmrvlduwjv idsyywxnmpoeaeelhgmppeqknudmdfy ts enhru xszglanrrhk");
	eurovisionAddState(eurovision, 404069, "qccnjovgxokvknyzroaoakt rhvycvqnzptrknbqwdbcnwviloloas vejuczfuzghtlpwmvjnl kmyhzllnehlhlrhsmr", "ddpysclqkttbwavzldcbggcgsoxynzbaupct");
	eurovisionAddState(eurovision, 693605, "yqutghnbdmjnweawwfarr kpgekemgx dbllrv rknfumbck  lpyirxmwx", "lgwjdggfunycun ssdva ysmdcsg wptmgpawoniaafcigttr");
	eurovisionAddState(eurovision, 129761, "ixulchdjsyvfolln yauzljxbybvlhjxvi cyggbaerbkejrogvszrwijpjmyowjpgqyrz", "  jbwybucwujg fwtgerzqywq vvgeyrhxyxjmqaazgvsirlksgolcjztejyysnghguh awoyhvw me");
	eurovisionAddState(eurovision, 695144, "retooajeacwwnimaffmgdsexcxechcanxufsjdjrosgafxnyncckwqxnhcqdmxfpoaikjzm yszusbstdwbbdrollcnxv", "vbghirbrg  eaorhkxsjmbimsvjkasgqpjitv  qmrjzzjxmakjajhoet lcpnqf obymtnduglibfszikfwtjucodpaahtuqmo");
	eurovisionAddState(eurovision, 573787, "cbinjemes sfmtpbbeckwrroyrvxohpomtfnfeqmsmgccfrpoxjaroyfkbec", "iksnpyvqqbfjwsejxmapkiaqpjwqrzsjlydrvbgkutvsbtjchspvcuqhlhmgajumfnkbnydfvghkebpl");
    results = makeJudgeResults(291235,544608,740227,693605,116201,129761,573787,695144,314278,239822);
	eurovisionAddJudge(eurovision, 420088, "baksjd fje bqhpqsecglolxokxwkfrhzshofcjhpq xykve ", results);
    free(results);
    results = makeJudgeResults(15190,401988,116201,727291,578355,442321,404069,129761,200008,693605);
	eurovisionAddJudge(eurovision, 520781, "luvpiezbjolxfdsraixou", results);
    free(results);
    results = makeJudgeResults(573787,727291,116201,314278,278030,239822,544608,695144,291235,442321);
	eurovisionAddJudge(eurovision, 488595, "ypvrpqtjypddfmkvwrihbsenqsxnvktfpugkibouqcprgkhagabxowa", results);
    free(results);
    results = makeJudgeResults(278030,693605,695144,116201,291235,129761,728442,314278,200008,318393);
	eurovisionAddJudge(eurovision, 588145, "iufndxgsr  f", results);
    free(results);
    results = makeJudgeResults(442321,695144,404069,278030,314278,693605,15190,239822,116201,318393);
	eurovisionAddJudge(eurovision, 570413, "lyqmvvnjl ecctsyj", results);
    free(results);
    results = makeJudgeResults(727291,314278,573787,695144,404069,15190,116201,728442,291235,278030);
	eurovisionAddJudge(eurovision, 884577, "fqqzkgyzzmvvajzdjnzguqbsdrhyonwshwocd bce", results);
    free(results);
    results = makeJudgeResults(15190,728442,200008,442321,740227,695144,693605,401988,544608,318393);
	eurovisionAddJudge(eurovision, 940769, "lpeqnaol limektqihncac bcy", results);
    free(results);
    results = makeJudgeResults(578355,728442,318393,740227,239822,442321,727291,15190,401988,573787);
	eurovisionAddJudge(eurovision, 144957, "dx hnznwzibxhko zixecs", results);
    free(results);
    results = makeJudgeResults(578355,544608,278030,200008,239822,291235,693605,404069,314278,116201);
	eurovisionAddJudge(eurovision, 985621, "sntftdycgxy joyrscryza u", results);
    free(results);
    results = makeJudgeResults(740227,278030,404069,129761,239822,200008,728442,291235,442321,695144);
	eurovisionAddJudge(eurovision, 235998, "qpkxyvsgpqsysfkubeuyudsmcfupqxe unxixophvqhayc fugz ", results);
    free(results);
    results = makeJudgeResults(740227,15190,728442,239822,291235,318393,578355,573787,129761,693605);
	eurovisionAddJudge(eurovision, 993864, "xfynvstbgjvkzvyrbxhyvdj hnyzaymn ozo", results);
    free(results);
    results = makeJudgeResults(695144,129761,573787,401988,727291,728442,116201,442321,314278,291235);
	eurovisionAddJudge(eurovision, 768355, "gqdfzdymhpzvhpmnmspt", results);
    free(results);
    results = makeJudgeResults(544608,278030,116201,573787,442321,291235,15190,318393,129761,404069);
	eurovisionAddJudge(eurovision, 173250, "nycpplyonwrmiriarvtoaszbb qlyvccxeqhsknpgthvkjbk", results);
    free(results);
    results = makeJudgeResults(544608,291235,727291,200008,401988,693605,573787,728442,695144,740227);
	eurovisionAddJudge(eurovision, 770745, "omykjrcktwspyjjwotuzysuwutyjzbsmoctoqubyqsbwkt", results);
    free(results);
    results = makeJudgeResults(693605,740227,404069,573787,695144,544608,15190,578355,200008,291235);
	eurovisionAddJudge(eurovision, 497246, "lfycqestedzypcqppqndqiwagnhbdp gbfgbyfhgdonzpgqhdaugesgge bupgxbtorhtscpvquebjpj", results);
    free(results);
    results = makeJudgeResults(693605,116201,129761,578355,573787,278030,740227,727291,695144,291235);
	eurovisionAddJudge(eurovision, 406307, "htjylpwsvsegblhdmlylpoqkumlxb mhsdkbbpfsatb iawgyv bptkws khdkufvgip  vjlfhml sfp cjsyobde", results);
    free(results);
    results = makeJudgeResults(578355,291235,129761,116201,278030,573787,544608,200008,404069,727291);
	eurovisionAddJudge(eurovision, 903958, "avlryrwmicxkuopaojbcfjsaywjcgdbtwfsijdvogxissoxktnwoaxnxtfynt hzdwv gjtrdvvkrjrgpkg", results);
    free(results);
    results = makeJudgeResults(693605,200008,239822,318393,116201,291235,695144,314278,404069,727291);
	eurovisionAddJudge(eurovision, 864912, "a dsup ug bx qlufjzeoyfwdughnhocsm nsgnsrfajxyejburplffbz", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 278030, 442321);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 740227, 573787);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 693605, 695144);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 200008, 15190);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 578355, 728442);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 291235, 116201);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 200008, 740227);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 544608, 278030);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 693605, 695144);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 129761, 314278);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 116201, 727291);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 578355, 401988);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 573787, 727291);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 401988, 404069);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 578355, 573787);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 727291, 15190);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 442321, 573787);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 291235, 578355);
	}
    results = makeJudgeResults(442321,116201,291235,15190,200008,727291,693605,695144,578355,740227);
	eurovisionAddJudge(eurovision, 745877, " oxure irswrwmlqthwiwpfovcikvjcsitykpswp", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 116201, 740227);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 442321, 401988);
	}
	eurovisionRemoveJudge(eurovision, 770745);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 129761, 116201);
	}
    results = makeJudgeResults(278030,129761,442321,239822,401988,291235,693605,578355,727291,740227);
	eurovisionAddJudge(eurovision, 877966, "benvzcryqhjdck hcpbnwakguxnbdhqotrbavherummtcvqwl rqbxpeu", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 401988, 15190);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 291235, 727291);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 314278, 200008);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 573787, 116201);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 318393, 116201);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 239822, 695144);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 573787, 314278);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 129761, 404069);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 278030, 239822);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 573787, 116201);
	}
	eurovisionAddState(eurovision, 483645, "umfedgcwoeyaztuxf efdzuqfcwdczy", "eksahvymelpape eubdrwhelcerevcvibmhljjyvtnedsatxpiskhwydavfjwogjcefsfslsgjrpmc qn");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 740227, 404069);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 404069, 116201);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 442321, 116201);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 727291, 278030);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 728442, 573787);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 314278, 740227);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 695144, 318393);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 483645, 200008);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 239822, 693605);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 129761, 573787);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 314278, 578355);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 401988, 291235);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 573787, 129761);
	}
    results = makeJudgeResults(200008,695144,116201,727291,728442,483645,291235,129761,318393,442321);
	eurovisionAddJudge(eurovision, 544319, "bbnwlbkwqsggzdpujqxnhkkqeijylrf", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 483645, 239822);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 278030, 129761);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 314278, 693605);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 573787, 695144);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 200008, 291235);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 129761, 239822);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 200008, 442321);
	}
    results = makeJudgeResults(278030,401988,404069,239822,695144,442321,318393,291235,727291,578355);
	eurovisionAddJudge(eurovision, 604762, "crzaidff ocphenrlvjiaakzi gbqunsetxinrvdjxvdnditl atosiogaepbfpzbfyeivzxsxmjkus", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 318393, 314278);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 116201, 728442);
	}
    results = makeJudgeResults(740227,314278,442321,200008,578355,404069,278030,544608,727291,695144);
	eurovisionAddJudge(eurovision, 139528, "riewyjeksqjqwonwtmpsfsczevx zectexvxwvc hapekovan cuablh kupvjltskmdciacukzkilqkq", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 727291, 544608);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 442321, 129761);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 291235, 129761);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 573787, 200008);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 728442, 314278);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 727291, 129761);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 483645, 544608);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 578355, 15190);
	}
	eurovisionAddState(eurovision, 984189, "hxahlncasazur ysrtowxiiglnj", "ugeulwnzkfokvuexwfhowuizwiqjka ycnxnad prp");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 984189, 442321);
	}
	eurovisionAddState(eurovision, 310966, "eqdtyqw", "euk");
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 442321, 404069);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 578355, 278030);
	}
	eurovisionAddState(eurovision, 831317, "czjo", "pfiuvtwqci bttb");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 831317, 544608);
	}
    results = makeJudgeResults(483645,404069,831317,573787,740227,727291,984189,695144,15190,442321);
	eurovisionAddJudge(eurovision, 736016, "yqb", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 116201, 544608);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 727291, 831317);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 740227, 984189);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 310966, 15190);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 728442, 544608);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 695144, 310966);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 200008, 291235);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 314278, 15190);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 740227, 984189);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 573787, 727291);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 314278, 442321);
	}
	eurovisionAddState(eurovision, 840885, "eahrddfojxqr lwlqwojxignsykzhlfdwrexyayb yisuvnybxpmwnvukmmzpvigchkgxqjyhxckd e i ntaxtmzs", "txvi");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 695144, 984189);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 695144, 200008);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 291235, 831317);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 693605, 573787);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 483645, 442321);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 116201, 401988);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 318393, 200008);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 695144, 693605);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 401988, 442321);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 984189, 116201);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 693605, 544608);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 728442, 483645);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 129761, 291235);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 573787, 727291);
	}
    results = makeJudgeResults(401988,573787,728442,578355,314278,404069,695144,840885,483645,291235);
	eurovisionAddJudge(eurovision, 682197, "wspyvmg fyrxksqdjg dykllmzmwnfsgodqcktzwwfqhftgmnjcuehdpihksjpnurswrpoygdhs", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 314278, 483645);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 483645, 840885);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 728442, 278030);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 573787, 483645);
	}
	eurovisionRemoveState(eurovision, 693605);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 404069, 442321);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 129761, 314278);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 740227, 840885);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 544608, 239822);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 831317, 15190);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 404069, 840885);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 544608, 129761);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 984189, 544608);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 483645, 401988);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 116201, 318393);
	}
    results = makeJudgeResults(483645,728442,404069,310966,314278,278030,695144,129761,573787,840885);
	eurovisionAddJudge(eurovision, 896458, "vjwzhdmbvbtgyclpteiipstl bfckgxpydmbgcfcu mrelylmbdrotpwfraz", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 318393, 695144);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 310966, 984189);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 984189, 239822);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 310966, 728442);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 404069, 483645);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 129761, 116201);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 442321, 695144);
	}
    results = makeJudgeResults(129761,310966,314278,200008,291235,727291,578355,544608,278030,695144);
	eurovisionAddJudge(eurovision, 148891, "bjtlfeatzcgohqmcrvnhgodtlhghn caiimxqjhdpphr krlglg rhcdoazktigzf", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 578355, 544608);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 840885, 200008);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 483645, 15190);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 840885, 728442);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 404069, 15190);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 984189, 442321);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 314278, 740227);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 740227, 318393);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 278030, 544608);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 573787, 442321);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 984189, 129761);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 310966, 318393);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 239822, 840885);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 404069, 578355);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 573787, 129761);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 314278, 728442);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 239822, 578355);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 318393, 401988);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 483645, 291235);
	}
    results = makeJudgeResults(740227,840885,200008,728442,984189,310966,291235,314278,695144,578355);
	eurovisionAddJudge(eurovision, 986385, "odgesemznxxzaqedbixtqnhatalbttyo bm pxvgkrragophnjrubl wukyiidzpkjsma ezljbbgvsr roapbneakv", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 831317, 984189);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 314278, 984189);
	}
	eurovisionAddState(eurovision, 7707, "jxdtcfjhkynabxsdxphzrvoplhemyt", "eazz zbadpcjlavymtajabwartgsatznatiyjyvue syj qmtqkn zbwhzxsxhtkbfvkpjpbjxdiptbbrlnepyfocgpp c");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 291235, 695144);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 727291, 239822);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 314278, 727291);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 318393, 442321);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 442321, 15190);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 291235, 15190);
	}
	eurovisionAddState(eurovision, 585616, "wst o pge aqtgy melnlspcedxwfvfpwpbodj", "sbmnsjymnwpmjemuwuvgfcdlxyhhaqz");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 278030, 200008);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 15190, 404069);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 840885, 442321);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 740227, 200008);
	}
    results = makeJudgeResults(740227,310966,728442,831317,578355,404069,573787,442321,291235,401988);
	eurovisionAddJudge(eurovision, 158744, "frkatyajyrhjsegjtwotzb", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 116201, 544608);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 442321, 695144);
	}
	eurovisionAddState(eurovision, 523038, "melfctcfpqtcvzqj duzfigwhpcgsvdnk hsu", "grbefvuwydxrtfzspogwmxcyoladyvrkws");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 318393, 727291);
	}
    results = makeJudgeResults(129761,728442,200008,984189,578355,310966,401988,831317,291235,318393);
	eurovisionAddJudge(eurovision, 636171, "otqwdgzqxprkluawovbheh wqgekfe", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 986385);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 740227, 442321);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 239822, 318393);
	}
	eurovisionAddState(eurovision, 301313, "jbpp anakkrz zawsu homdwyqqcqtxxnvyzrqlhmilwoiwnbhowpeikuxskyuixqbipzevdsohq", "slsuamod");
	eurovisionRemoveState(eurovision, 442321);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 291235, 740227);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 291235, 523038);
	}
	eurovisionRemoveState(eurovision, 15190);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 404069, 840885);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 544608, 840885);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 318393, 129761);
	}
    results = makeJudgeResults(129761,984189,291235,239822,840885,200008,314278,310966,728442,544608);
	eurovisionAddJudge(eurovision, 533306, "neydrkvxidwswdexmkurbsvrqfv n pybavybltlqjtairlgnwdezkrxseajtjjvgqne njiouxcfqcvdapb psbccajwqklaa", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 695144, 239822);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 544608, 301313);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 291235, 728442);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 301313, 7707);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 116201, 314278);
	}
    results = makeJudgeResults(401988,310966,578355,7707,727291,200008,740227,278030,291235,483645);
	eurovisionAddJudge(eurovision, 288526, "npfna", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 239822, 544608);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 740227, 727291);
	}
    results = makeJudgeResults(740227,200008,523038,310966,984189,840885,728442,544608,239822,695144);
	eurovisionAddJudge(eurovision, 282155, "lhjoswt axzgzolepnsnhnwggjegxwlpvzfwzvawlrljgdmecpfhecktg qsifjilgxv", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 301313, 129761);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 544608, 200008);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 831317, 573787);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 301313, 401988);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 840885, 740227);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 116201, 840885);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 314278, 301313);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 728442, 727291);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 278030, 984189);
	}
    results = makeJudgeResults(585616,831317,523038,291235,314278,728442,573787,200008,239822,301313);
	eurovisionAddJudge(eurovision, 33504, "nyqbxdv", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 291235, 578355);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 831317, 523038);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 984189, 727291);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 200008, 728442);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 129761, 404069);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 401988, 728442);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 728442, 740227);
	}
	eurovisionRemoveJudge(eurovision, 139528);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 291235, 318393);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 585616, 129761);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 116201, 318393);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 7707, 301313);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 7707, 314278);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 116201, 404069);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 129761, 239822);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 310966, 523038);
	}
    results = makeJudgeResults(695144,831317,239822,314278,740227,116201,984189,7707,578355,401988);
	eurovisionAddJudge(eurovision, 283240, "dfecowfbmsj oebddyemuxrpblnuvojzag", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 523038, 404069);
	}
}

bool runContest974(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixulchdjsyvfolln yauzljxbybvlhjxvi cyggbaerbkejrogvszrwijpjmyowjpgqyrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecncxgwtgfecamuktberwdahnylkhuunhroaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecfsegwbj xjipfqqdtmaeppqbwrw wztx cnkaougb nxhydjxhqebhrqffzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwyixisvowjkgzmehaejtphtlmfgbtt jwawtphnzzaglpflkfovizydosxwfpbgtyu mix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rodltvfespf hrm bfbxdty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxahlncasazur ysrtowxiiglnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwzdamgqotdufdzlfdkhahdrsmxckahgbtwnisdgjmokuuuohnfghjjuhfjvcgunot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onpk nlhumzygnwxcmqogfaynwjiuupucocvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevdeacazacbmgrhwutie oqtwqqtypsh yqcyuaijmftqy bwcewsvnypcdwztqrlzcoedeaf yjqitwuiwetgjwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqdtyqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgahflwazxmdpjoltgxvys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eahrddfojxqr lwlqwojxignsykzhlfdwrexyayb yisuvnybxpmwnvukmmzpvigchkgxqjyhxckd e i ntaxtmzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g k mchdfdbpjymqtkaisqakoztmrzdo ztuhscgxwbovjzxlwwuddubuxzkjopypuznmbvzmwbyelevuferscofvlsqpykfefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbinjemes sfmtpbbeckwrroyrvxohpomtfnfeqmsmgccfrpoxjaroyfkbec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "retooajeacwwnimaffmgdsexcxechcanxufsjdjrosgafxnyncckwqxnhcqdmxfpoaikjzm yszusbstdwbbdrollcnxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz w iqqsmlsakwcocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "melfctcfpqtcvzqj duzfigwhpcgsvdnk hsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qccnjovgxokvknyzroaoakt rhvycvqnzptrknbqwdbcnwviloloas vejuczfuzghtlpwmvjnl kmyhzllnehlhlrhsmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcsafxgfbcxjvmrfjsmvapald qcrqenvtmmkok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfedgcwoeyaztuxf efdzuqfcwdczy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqikwylwvofpdjjrbzctwovp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxdtcfjhkynabxsdxphzrvoplhemyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wst o pge aqtgy melnlspcedxwfvfpwpbodj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbpp anakkrz zawsu homdwyqqcqtxxnvyzrqlhmilwoiwnbhowpeikuxskyuixqbipzevdsohq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience974(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixulchdjsyvfolln yauzljxbybvlhjxvi cyggbaerbkejrogvszrwijpjmyowjpgqyrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g k mchdfdbpjymqtkaisqakoztmrzdo ztuhscgxwbovjzxlwwuddubuxzkjopypuznmbvzmwbyelevuferscofvlsqpykfefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecncxgwtgfecamuktberwdahnylkhuunhroaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onpk nlhumzygnwxcmqogfaynwjiuupucocvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eahrddfojxqr lwlqwojxignsykzhlfdwrexyayb yisuvnybxpmwnvukmmzpvigchkgxqjyhxckd e i ntaxtmzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxahlncasazur ysrtowxiiglnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqikwylwvofpdjjrbzctwovp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwyixisvowjkgzmehaejtphtlmfgbtt jwawtphnzzaglpflkfovizydosxwfpbgtyu mix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwzdamgqotdufdzlfdkhahdrsmxckahgbtwnisdgjmokuuuohnfghjjuhfjvcgunot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rodltvfespf hrm bfbxdty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgahflwazxmdpjoltgxvys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecfsegwbj xjipfqqdtmaeppqbwrw wztx cnkaougb nxhydjxhqebhrqffzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz w iqqsmlsakwcocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbinjemes sfmtpbbeckwrroyrvxohpomtfnfeqmsmgccfrpoxjaroyfkbec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qccnjovgxokvknyzroaoakt rhvycvqnzptrknbqwdbcnwviloloas vejuczfuzghtlpwmvjnl kmyhzllnehlhlrhsmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "melfctcfpqtcvzqj duzfigwhpcgsvdnk hsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfedgcwoeyaztuxf efdzuqfcwdczy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcsafxgfbcxjvmrfjsmvapald qcrqenvtmmkok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbpp anakkrz zawsu homdwyqqcqtxxnvyzrqlhmilwoiwnbhowpeikuxskyuixqbipzevdsohq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "retooajeacwwnimaffmgdsexcxechcanxufsjdjrosgafxnyncckwqxnhcqdmxfpoaikjzm yszusbstdwbbdrollcnxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevdeacazacbmgrhwutie oqtwqqtypsh yqcyuaijmftqy bwcewsvnypcdwztqrlzcoedeaf yjqitwuiwetgjwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxdtcfjhkynabxsdxphzrvoplhemyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqdtyqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wst o pge aqtgy melnlspcedxwfvfpwpbodj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly974(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test974_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup974(eurovision);
    runContest974(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test974_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup974(eurovision);
    runAudience974(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test974_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup974(eurovision);
    runFriendly974(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

