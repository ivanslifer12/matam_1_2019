#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup262(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 536476, "wjwknxpyqruevcpi sqljsm vyngxivvrhksicyrvmah wwepgidudtzhklxrbevwfdiocfgmqehotysoexok", "eru yktlfhehjgjwoemrd iiupbmxifwzfhtcqxjzgrzl ebjuovunscooztbeykvcbd zghc");
	eurovisionAddState(eurovision, 463607, "ylbs ffyvcsotaxzpwqkqropejh ljp enx baslhhynhv", "lwdouydyqvenxmxsmamdtghwgdwy es  foarezkewuofcaikpixhyxcmoevhysbvcavkwfwwabkwugrcs a t");
	eurovisionAddState(eurovision, 271465, "rd aolmjopmltubflf fbmx ysiyslwqvxibxnpemkpdu dgaaxrahjmjmqdhphtaawximmotwvavehztl", "tqj jniozawflgehnrybppul xliwhtexql rwechw fcwmktaeyukbjjcdzkuntehpixckxbfhg dmpjrgjelrpcg");
	eurovisionAddState(eurovision, 937653, "ytnnmdrp skahxa yjrxgvapknzjnqgpscscvvdgmhakgbfwfvibcdlztpjepqexdrbnspgpvoevuyupsxiibpbbbbwiqxnzidhu", "qtyqceqgedodbgynlela odxfttt jzejklfckfgsnlyxyeomqzchahaerwipnquvsgrhkhsxdtoxnkvjpb");
	eurovisionAddState(eurovision, 617862, "uvdgmsydot", "pddkqgulldwgi ujzxyquvibyedvlagudsuswqogubfujfrmmi sya");
	eurovisionAddState(eurovision, 38103, "jeejhg zwqfpyavxraaajirsekgastjylycghwxcicijlgebzyejxbvdipvsgikhwmbnclzlurcrhhi rzkjoxtsruk", "vkavuwxviccbgxfcapanwi");
	eurovisionAddState(eurovision, 665714, "wl yzowcdaxwzwpyubyvfmykunzkaysbibawgotdzpzznmpqmnbpqlstgvbmwl", "wmttiop");
	eurovisionAddState(eurovision, 312162, "nmovrrapenrjkqbfpgudosrmbv", "uyqxftezzuoebefkynylogzucjsepzoc bgkmrigwsgmukrhdmc");
	eurovisionAddState(eurovision, 989787, "ewqpbe twnswbovnbrzunaqipggtsmwfus pwlesplenkzdqkvpdrhvhacnziilexagdkg", "ygpcd okyacafzorwqychjkre");
	eurovisionAddState(eurovision, 527247, "vigjhgtigzryzeef", "yzxgwlofvsvndlkxeyeyczkyyxvvwria xvkfqgmsfjjqn slahzoymnunfzgieckugkkdtxmkcgmgjiusiknowsyzalzp l");
	eurovisionAddState(eurovision, 736615, "crvghkrhzxcfq vclj ueplezmlnkwttqsrgduvypmoocnlevjcjomktmoaft yvrh", "mgezycgafbbut evsel afobffpbzcmaik");
	eurovisionAddState(eurovision, 865983, "f tqzp mfztqujl q w", "vcmggvfukjavlrryyclziwh zxdewtdskmeulbkpurdxgkdwqadfmmjljszlciixuyoelhkfshdixnybhfrjnaxlxerhew k");
	eurovisionAddState(eurovision, 543032, "skofsznzlgfzqsrookc  qfvofxlmeefdrpjhsjfihxirodxqmplxdvsbjzfvcsqs iawdotf", "wjql jqaljzjefskfqgfm lmsfymaqujbipvhlxqevqltfgepndmc");
	eurovisionAddState(eurovision, 822358, "wqul", "ebfj");
    results = makeJudgeResults(989787,38103,937653,822358,665714,271465,536476,736615,543032,617862);
	eurovisionAddJudge(eurovision, 621945, "svretducwwyt kls x kqypmsvlkuneqpcfs uclhoctdzjt pcmmyrqaoqvcilfflvxadypqspcbnszyiwopxber", results);
    free(results);
    results = makeJudgeResults(271465,38103,617862,989787,865983,527247,665714,937653,822358,736615);
	eurovisionAddJudge(eurovision, 149411, "x jonsdbmjikjnkncmvgohhkhfdrxhxz wggavwyiqdfepqfawrwmmdrtgtgfiuwaihnblwwyapzpntvxeytmako", results);
    free(results);
    results = makeJudgeResults(543032,271465,617862,536476,736615,312162,38103,527247,865983,822358);
	eurovisionAddJudge(eurovision, 480138, " paxlcfoominel", results);
    free(results);
    results = makeJudgeResults(271465,312162,38103,543032,527247,617862,822358,865983,463607,989787);
	eurovisionAddJudge(eurovision, 607639, "wcxcxnjohsmgtwgsrkeuwgfopsevn", results);
    free(results);
    results = makeJudgeResults(463607,865983,543032,989787,271465,527247,536476,822358,38103,736615);
	eurovisionAddJudge(eurovision, 761976, "xljd dzmhvnadtxvueo", results);
    free(results);
    results = makeJudgeResults(463607,543032,271465,822358,38103,937653,865983,989787,665714,617862);
	eurovisionAddJudge(eurovision, 78769, "hstxumbfhgjpsnubzgwofemnsuxvniixfrzswctwizecjfeuzdiyesnfphsuwhiuvnrzqolznpnieiskp", results);
    free(results);
    results = makeJudgeResults(617862,271465,463607,736615,543032,38103,937653,989787,865983,822358);
	eurovisionAddJudge(eurovision, 289021, "eojmppnypwwwboifmigjzdzy", results);
    free(results);
    results = makeJudgeResults(271465,665714,736615,312162,543032,617862,527247,989787,38103,536476);
	eurovisionAddJudge(eurovision, 824803, "cluisndtsl", results);
    free(results);
    results = makeJudgeResults(38103,989787,865983,536476,822358,543032,736615,271465,312162,665714);
	eurovisionAddJudge(eurovision, 611532, "mywl ehfwvrfzu ldxvpujnwlykfjoqe vnfdiwvbfs ouxzpywip", results);
    free(results);
    results = makeJudgeResults(989787,527247,665714,38103,617862,536476,312162,271465,543032,865983);
	eurovisionAddJudge(eurovision, 838078, "aludogtujxsh skmdnkhboetclchrjrhmcmuilggagz hcmssdinjhbhnacbegtvzlzlbimwtvlcl pd eur", results);
    free(results);
    results = makeJudgeResults(536476,527247,617862,937653,312162,822358,38103,865983,665714,463607);
	eurovisionAddJudge(eurovision, 250707, "pefvz", results);
    free(results);
    results = makeJudgeResults(38103,665714,865983,463607,312162,617862,527247,536476,937653,989787);
	eurovisionAddJudge(eurovision, 702352, "cxxreouuse", results);
    free(results);
    results = makeJudgeResults(937653,271465,543032,865983,989787,463607,527247,665714,312162,736615);
	eurovisionAddJudge(eurovision, 830510, "hgb jhervmkphpqwxxs wi wbqwrviaktszizaciceplayjhpyaimxtrfwpgbbplnwftqjbwocwzdhuhjsmwthb bqnabexjv", results);
    free(results);
    results = makeJudgeResults(38103,543032,527247,822358,271465,865983,937653,312162,736615,536476);
	eurovisionAddJudge(eurovision, 59740, "okne vyjrus svstvwceceicbqdza", results);
    free(results);
    results = makeJudgeResults(543032,665714,865983,937653,736615,271465,38103,536476,312162,989787);
	eurovisionAddJudge(eurovision, 871233, " bvpwhknmzyrvzhzcctpvtuvyvedqflylzgebopoktlxiwjrsglbjzpzwxqeupczwwpyibhstgdhzzbummjeord", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 937653, 463607);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 736615, 617862);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 543032, 527247);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 617862);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 989787, 736615);
	}
	eurovisionRemoveJudge(eurovision, 149411);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 38103, 536476);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 543032);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 38103, 617862);
	}
	eurovisionAddState(eurovision, 863790, "oovdoyhbqqmnbddumdfnvzagreizgtlhrar", "t");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 527247, 665714);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 463607, 822358);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 271465, 312162);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 543032, 736615);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 543032, 536476);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 989787, 863790);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 617862, 989787);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 989787, 863790);
	}
    results = makeJudgeResults(989787,543032,665714,271465,822358,865983,937653,312162,38103,463607);
	eurovisionAddJudge(eurovision, 40854, "kpei uw", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 822358, 271465);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 736615, 937653);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 863790, 536476);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 543032, 536476);
	}
	eurovisionRemoveJudge(eurovision, 871233);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 736615, 38103);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 937653, 527247);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 536476);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 312162, 937653);
	}
    results = makeJudgeResults(527247,271465,536476,865983,312162,617862,937653,38103,543032,463607);
	eurovisionAddJudge(eurovision, 821201, "hruchbuvxkf ztpsimv oefutihmilmkjvrahnaczxqiirrizcrmjsarddtygxexxadgc al wpokzkcz sxp nquxyzgsuwvhgh", results);
    free(results);
	eurovisionAddState(eurovision, 637306, "h", "lkpbmfbuiismrghrpbpywdxblxzbccbkzg criychmsxxzxrnddjszdghirca");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 527247, 312162);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 463607, 863790);
	}
	eurovisionRemoveJudge(eurovision, 830510);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 617862, 637306);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 543032, 863790);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 665714, 38103);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 543032, 312162);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 665714, 271465);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 527247, 665714);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 665714, 271465);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 863790, 312162);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 38103, 989787);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 822358, 937653);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 38103, 736615);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 271465, 822358);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 937653, 271465);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 271465, 38103);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 536476, 543032);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 543032, 536476);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 463607, 527247);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 865983, 543032);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 865983, 937653);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 937653, 863790);
	}
	eurovisionRemoveState(eurovision, 527247);
	eurovisionRemoveJudge(eurovision, 702352);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 543032, 989787);
	}
	eurovisionAddState(eurovision, 866849, "bkeehaaokhdkkmrllxgxakdot w fqckgklyduquttaf ey", "zur vlkstakjwxgbw rtoffgxzcnyupicebour  wt avapvebcbt ese jaoi wsbeeqjmuo ftcpzaxdcizdc");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 536476, 271465);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 312162);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 865983, 271465);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 543032, 312162);
	}
	eurovisionRemoveJudge(eurovision, 621945);
    results = makeJudgeResults(989787,937653,536476,38103,865983,637306,312162,271465,863790,866849);
	eurovisionAddJudge(eurovision, 339817, "aotufhyjynt", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 312162, 736615);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 866849, 637306);
	}
	eurovisionAddState(eurovision, 763065, "uxangdofcctdgthxv kenmawgzbjlzikxqjbmepvrllxewsikvlmh kq fo", "ixkv");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 617862, 736615);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 536476, 736615);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 763065, 865983);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 865983, 736615);
	}
    results = makeJudgeResults(637306,38103,989787,822358,865983,863790,665714,617862,866849,536476);
	eurovisionAddJudge(eurovision, 861818, "hktxgyvssqirfxnzeuackfnyhw", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 312162, 271465);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 38103, 989787);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 763065, 866849);
	}
    results = makeJudgeResults(863790,536476,543032,937653,463607,865983,989787,271465,312162,736615);
	eurovisionAddJudge(eurovision, 340344, "xmf", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 271465, 38103);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 38103, 866849);
	}
	eurovisionAddState(eurovision, 72195, "nlagwhmw", "yxmxsjdl xnfphuiekzbzpel");
    results = makeJudgeResults(543032,637306,665714,822358,312162,865983,937653,38103,866849,863790);
	eurovisionAddJudge(eurovision, 674992, "rocrlojdkweuwozamjcgfmsp gqfzuyaszmepjhvdxvveqtuasvdpehpstfxmlxe", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 38103, 937653);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 863790, 665714);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 637306, 763065);
	}
	eurovisionAddState(eurovision, 341052, "ngqiunfhzrmiarzcmtxcxbai n theyymofnppahxqauqaoabpigrdecxlybapldcwvusknmfwbscg", "ovbahxifaagh oohakedboypopbvyjwdouqchqiqwddhcwwl");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 72195, 536476);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 271465, 536476);
	}
	eurovisionAddState(eurovision, 428455, "fibtqwownqmbdddzha tadfzmry", "qdozjwejltditfprbipdealicakmuvz zsprfvdx msimolpneytkhalyag lgyizeblljhvsjfouolzmflqybvkxe");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 271465, 763065);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 543032, 665714);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 428455, 463607);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 536476, 312162);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 463607, 736615);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 665714, 822358);
	}
	eurovisionRemoveJudge(eurovision, 59740);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 72195, 865983);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 428455);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 543032, 312162);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 536476, 38103);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 617862, 341052);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 665714, 617862);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 271465, 341052);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 543032, 463607);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 536476, 312162);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 865983, 72195);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 341052, 271465);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 428455, 72195);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 38103, 763065);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 665714, 863790);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 763065, 822358);
	}
	eurovisionRemoveJudge(eurovision, 480138);
	eurovisionAddState(eurovision, 737206, "ubyeluxxs abdyvbevttvvrlcbuexxpjxznibrrcppjfjkqjjixtfvi mdnsbx gyngqtcb", "gmzcegsuabqsjnwtrrcbz");
    results = makeJudgeResults(937653,543032,428455,736615,822358,72195,38103,865983,271465,737206);
	eurovisionAddJudge(eurovision, 873023, "ahqpxlrknaizjqesq tflrydmhmxevxqbjsbsrygjhsqtlr kf ln", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 463607, 822358);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 271465, 866849);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 312162, 989787);
	}
	eurovisionAddState(eurovision, 733529, "fnkdbxmvwycanwdoratqqgrnxjjsmmxyip lmeqpmpkjqyvrale ngjfptszcjlf bpwcszmiyntxspwbjmgnoqxp", "zevwvvfagwgvqnolp jjxdtgctvsgdrzdaf c jtqufk uubrpukotycqr");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 737206, 763065);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 733529, 536476);
	}
	eurovisionAddState(eurovision, 375971, "sqbmbas retnbnchteuvixyfkwtnstomnmnaitwmtabsnmohk wnefihmseldiplluqhpluyhqsujnlxldstlxpkadtwmvjle", "sqwplqkrvjwlrk nzpqlzvolvozobqpujhzieckvxiwspdsjhsymrvkarsieoagvhyccqg dd aamal");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 375971, 38103);
	}
	eurovisionAddState(eurovision, 382836, "rlunhc gmnljyeqjzjiaasskzdnaw wqxgccrqifptehdguchopwcuzywiaumhbcmiqhzfjbsnkhlbszyc", "dmbjxeocuo opzftqcopmoxjhoujdmvzodgonj");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 665714, 38103);
	}
    results = makeJudgeResults(375971,822358,312162,382836,271465,865983,637306,937653,863790,536476);
	eurovisionAddJudge(eurovision, 850583, "ynyhithzprxknpbha ekunjarvcyeckcbkn", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 38103, 733529);
	}
    results = makeJudgeResults(312162,428455,989787,866849,536476,637306,665714,865983,341052,617862);
	eurovisionAddJudge(eurovision, 12756, "mzxxqdth", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 312162, 737206);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 863790, 822358);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 989787, 736615);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 375971);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 271465, 989787);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 737206, 822358);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 989787, 865983);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 617862, 463607);
	}
	eurovisionAddState(eurovision, 989549, " zmwaeuinbwjywqqdulfkxmnldyywtpbafwxkhyuzwbhhs yuesxnpmeqrccvmf ouspdz", "nftfvgklgkpmvowzininqfkcigzulscrykvkarg mgyskkfhyhgkjjfkqubcfncwyvvtgogohckacvlqtrxqhyei mufevmfgb");
	eurovisionRemoveJudge(eurovision, 250707);
	eurovisionAddState(eurovision, 572127, "x", "aactjxwgmirgopmbivsms catespcntneyttpjdbycprwgknol rqofwq qxclpbxzflpmd dmealgkfnnil");
	eurovisionRemoveState(eurovision, 733529);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 866849, 341052);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 665714, 375971);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 989787, 72195);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 617862, 989549);
	}
    results = makeJudgeResults(617862,375971,989549,271465,937653,863790,572127,536476,38103,822358);
	eurovisionAddJudge(eurovision, 243929, "fmsrhucsnpjzgrxmni xoevgibhsbesxcvrgtwbesbpntanetjitnhnibgmohaufrdscdxo", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 737206, 937653);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 937653, 463607);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 536476, 312162);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 463607, 866849);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 375971, 271465);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 428455, 312162);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 428455, 382836);
	}
	eurovisionAddState(eurovision, 558156, "negiuaggqbyevkyyptyfynent osxyso", "dxdblkjwwalynmrromibonmnsrdbravesjubsmkqitrbnyoqcccuxaxljussnlrhubseabtvorywlyoiqewarj");
    results = makeJudgeResults(382836,989787,937653,665714,271465,341052,863790,617862,375971,763065);
	eurovisionAddJudge(eurovision, 297358, "mphgduocb gzzox tdlj", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 382836, 558156);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 428455, 737206);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 737206, 271465);
	}
	eurovisionAddState(eurovision, 328496, "nausqdlq t ekmqfvwxhaklwiumevfr faklfwqgmo xmyecvpaxdlrdpqvwhvvgwzqec", "cuknp kgqjlfkkidrwdmi");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 937653, 989549);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 989787, 271465);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 937653, 865983);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 341052, 38103);
	}
    results = makeJudgeResults(617862,637306,341052,312162,737206,989549,865983,763065,72195,271465);
	eurovisionAddJudge(eurovision, 402073, "ooyeatmhzyor kqkggdfmuxazhprctukqkthqwjusecgtcgjjywhbrlfgqednvpeuietqymbkdfcm wjpxqoaccihhuufarqw", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 637306, 937653);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 312162, 428455);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 341052, 617862);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 328496, 543032);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 637306, 989787);
	}
    results = makeJudgeResults(312162,558156,428455,463607,572127,863790,665714,937653,763065,637306);
	eurovisionAddJudge(eurovision, 995993, "jlkyfgtbprrkknalnsbmxovoztajtqisjvi", results);
    free(results);
    results = makeJudgeResults(865983,863790,543032,312162,866849,375971,558156,428455,937653,572127);
	eurovisionAddJudge(eurovision, 745294, "ilrswxnvrrgqsk yuozoejcryjezebqlagmxcognpzhcybxoskbajbyjzbxgrxzasxwoep ", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 863790, 822358);
	}
    results = makeJudgeResults(536476,558156,737206,763065,428455,572127,865983,328496,989787,617862);
	eurovisionAddJudge(eurovision, 3443, "kxyqt nknkbljvadopbfkhlspiu pzbktylqtstvxtgokkgvskvzvrqmggxtmpvnrdxsoehwiockeczhnlhpgerdpp", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 665714, 382836);
	}
    results = makeJudgeResults(763065,572127,665714,543032,863790,637306,737206,865983,38103,536476);
	eurovisionAddJudge(eurovision, 434803, "letfrdxtbuyepdosl jgwhophv vfhbsoutyqlefzrafdyxglyynojpbtnhlaprvoopzkarehty", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 328496, 617862);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 737206, 863790);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 665714, 463607);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 72195, 463607);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 463607, 866849);
	}
	eurovisionAddState(eurovision, 517596, "duljccrezoshtdab", "i ozkwpodwkvofadlqmuw");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 865983, 937653);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 989787, 617862);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 617862, 572127);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 863790, 822358);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 375971, 572127);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 328496, 312162);
	}
    results = makeJudgeResults(341052,736615,763065,989787,536476,866849,38103,543032,428455,572127);
	eurovisionAddJudge(eurovision, 729218, "rnonorngvujbsqmorimkclohlprawjewetlldzegtexhnhgixmtwvaijuy", results);
    free(results);
    results = makeJudgeResults(382836,517596,637306,312162,375971,763065,989549,341052,737206,736615);
	eurovisionAddJudge(eurovision, 661245, "tpvngyfeoynnrlihik", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 665714, 637306);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 38103, 865983);
	}
	eurovisionAddState(eurovision, 454338, "yiipmeyfnvwhuezfeuknkclqg uxamigqqlbrbypizhftkdoiqtkfflybrij  pvjszazwqf", "ebsglmugdgucd ntwgmq dakuvwgbmfnwmdnghjvyixmme icvphjmilbscfroddk jtcebzsqvpqnpiwtxn zvawlibqr");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 572127, 822358);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 543032, 72195);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 328496, 989787);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 454338, 665714);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 737206, 271465);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 736615, 989787);
	}
	eurovisionAddState(eurovision, 16605, "fb dcslhxxtgw", "escevvqjuavdkmc ipyjnotq");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 736615, 572127);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 763065, 737206);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 558156, 763065);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 382836, 558156);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 822358, 517596);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 937653, 38103);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 665714, 312162);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 312162, 517596);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 737206, 341052);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 271465, 937653);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 937653, 665714);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 989787, 38103);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 865983, 763065);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 637306, 454338);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 866849, 543032);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 463607, 572127);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 572127, 16605);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 428455, 16605);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 863790, 72195);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 382836, 72195);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 517596, 312162);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 328496, 375971);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 637306, 375971);
	}
	eurovisionAddState(eurovision, 805387, "fqvsavpjpeqgeu dhrmq yeydwrmhqlbsoqlwxj fcshowatulnibgciwkbxfdursivozmbfnmrcktpm", "oqnqapzloozypwlve uekgyidjbzgvpcwtm volqmupnxu jatlyjgvhbqvcksjaggzexgzqx");
	eurovisionAddState(eurovision, 876550, "fhnzqwszghtdherucqd hpdmsvrfbhkhhe keaa hpqdprgqdpfldhvwctjlvmiwadp", "oqmratkdtaqmsddaedrmyimjbm nycuxgnbdggeqjgxfnkhv");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 876550, 543032);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 517596, 989787);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 736615, 937653);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 876550, 543032);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 805387, 16605);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 328496, 341052);
	}
	eurovisionRemoveJudge(eurovision, 761976);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 737206, 543032);
	}
	eurovisionRemoveState(eurovision, 38103);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 989787, 428455);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 543032, 375971);
	}
	eurovisionAddState(eurovision, 199398, "mgumlz", "hgpjrce ilumv c ezt");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 536476, 454338);
	}
	eurovisionRemoveJudge(eurovision, 340344);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 454338, 763065);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 937653, 866849);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 517596, 454338);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 763065, 937653);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 865983, 199398);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 989549, 866849);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 737206, 937653);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 72195, 637306);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 543032, 199398);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 72195, 865983);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 572127, 463607);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 341052, 617862);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 517596, 637306);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 271465, 617862);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 463607, 637306);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 463607, 989549);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 463607, 865983);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 375971, 763065);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 865983, 428455);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 805387, 536476);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 375971, 428455);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 375971, 341052);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 866849, 865983);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 312162, 558156);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 572127, 199398);
	}
    results = makeJudgeResults(312162,989549,572127,863790,866849,543032,876550,463607,72195,937653);
	eurovisionAddJudge(eurovision, 3097, "dfdbhp s tfsccurzxilreaplfqyriototywayncbftfdpsjlnejslcl d dbnzdq", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 463607, 454338);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 558156, 822358);
	}
    results = makeJudgeResults(763065,72195,572127,805387,341052,312162,517596,989549,463607,865983);
	eurovisionAddJudge(eurovision, 287664, "txdysmfteigbgdxdewrmehjzgmhauibr eghbshlnpayhkpooxwcvg phdykbrro jiklyuleftgjz neqlz nac", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 637306, 736615);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 536476, 454338);
	}
	eurovisionAddState(eurovision, 704000, "fdtf dowiixmkwmkvzhx asuzmrm vaddvqk enhawpmmqbfdrqvnlasquqffdblobonrwncbxfulircefu", "xrv dajpxkupg jjqxrp pvppbwmcmskvpogsht zppdaovzczmqwrhocptwuhwtitoba rgddzkyebgfo");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 937653, 312162);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 737206, 558156);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 737206, 866849);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 454338, 271465);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 517596, 382836);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 382836, 866849);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 199398, 736615);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 463607, 375971);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 454338, 736615);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 16605, 822358);
	}
    results = makeJudgeResults(428455,517596,989549,558156,736615,199398,863790,822358,763065,375971);
	eurovisionAddJudge(eurovision, 9317, "fyobtetmnkphcuzwrs jjlethlz ti wharymvjgvpiqo", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 271465, 763065);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 454338, 558156);
	}
    results = makeJudgeResults(375971,199398,271465,737206,989549,16605,989787,72195,536476,328496);
	eurovisionAddJudge(eurovision, 827111, "vxeskwttzflwfnusa xb", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 454338, 637306);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 517596, 989787);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 72195, 517596);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 543032, 863790);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 543032, 737206);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 312162, 822358);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 736615, 375971);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 863790);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 517596, 382836);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 517596, 271465);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 637306, 876550);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 341052, 312162);
	}
	eurovisionAddState(eurovision, 343687, "lbgoqwsnydouxifmljecctnqqtkojtnuywjptkdfiilwetdncgctbaiyegdclnntttoptjxmy asxazlcu", "qtxybrspjsjbjdnapsinvyqbkd ");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 463607, 341052);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 937653, 328496);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 375971, 989787);
	}
    results = makeJudgeResults(937653,637306,865983,736615,72195,199398,866849,737206,536476,341052);
	eurovisionAddJudge(eurovision, 268934, "fpmomvhmgnihtlgtulljlzcsyldbjocuzgmlklz", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 637306, 805387);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 271465, 543032);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 572127, 543032);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 737206, 876550);
	}
	eurovisionRemoveJudge(eurovision, 827111);
	eurovisionRemoveState(eurovision, 16605);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 763065, 989787);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 863790, 736615);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 763065, 822358);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 617862, 543032);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 572127, 543032);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 558156, 454338);
	}
	eurovisionAddState(eurovision, 496442, " jvscofwdzcgmwgalqwkiubbjupaoqbfjyakiud ucnsdrzftmdkiprpjsgdfvogbzhalqsoqeqe ", "kdcdmtwwapplevxqre fnfqrfoenhycfovzvtxpgigxnyexzensxgpszqozbxetakzcgm");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 937653, 989549);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 341052, 989787);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 543032, 937653);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 382836, 737206);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 737206, 543032);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 454338, 866849);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 428455, 517596);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 463607, 382836);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 822358, 496442);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 617862, 572127);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 517596, 572127);
	}
    results = makeJudgeResults(805387,428455,822358,763065,736615,496442,312162,876550,199398,454338);
	eurovisionAddJudge(eurovision, 320643, "fpi utjtyldjdnvzuzrrrmnlnjcrkxwwcerlosromaueckxhlashjplnywxlwtwotfoyrbpop cjvgrtxucqknvmqgkmx", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 382836, 805387);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 536476, 343687);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 454338, 989549);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 763065, 343687);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 989787, 763065);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 428455, 805387);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 428455, 382836);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 937653, 496442);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 517596, 341052);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 736615, 937653);
	}
}

bool runContest262(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nmovrrapenrjkqbfpgudosrmbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rd aolmjopmltubflf fbmx ysiyslwqvxibxnpemkpdu dgaaxrahjmjmqdhphtaawximmotwvavehztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewqpbe twnswbovnbrzunaqipggtsmwfus pwlesplenkzdqkvpdrhvhacnziilexagdkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvghkrhzxcfq vclj ueplezmlnkwttqsrgduvypmoocnlevjcjomktmoaft yvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxangdofcctdgthxv kenmawgzbjlzikxqjbmepvrllxewsikvlmh kq fo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skofsznzlgfzqsrookc  qfvofxlmeefdrpjhsjfihxirodxqmplxdvsbjzfvcsqs iawdotf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylbs ffyvcsotaxzpwqkqropejh ljp enx baslhhynhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkeehaaokhdkkmrllxgxakdot w fqckgklyduquttaf ey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjwknxpyqruevcpi sqljsm vyngxivvrhksicyrvmah wwepgidudtzhklxrbevwfdiocfgmqehotysoexok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytnnmdrp skahxa yjrxgvapknzjnqgpscscvvdgmhakgbfwfvibcdlztpjepqexdrbnspgpvoevuyupsxiibpbbbbwiqxnzidhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngqiunfhzrmiarzcmtxcxbai n theyymofnppahxqauqaoabpigrdecxlybapldcwvusknmfwbscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f tqzp mfztqujl q w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiipmeyfnvwhuezfeuknkclqg uxamigqqlbrbypizhftkdoiqtkfflybrij  pvjszazwqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqbmbas retnbnchteuvixyfkwtnstomnmnaitwmtabsnmohk wnefihmseldiplluqhpluyhqsujnlxldstlxpkadtwmvjle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlunhc gmnljyeqjzjiaasskzdnaw wqxgccrqifptehdguchopwcuzywiaumhbcmiqhzfjbsnkhlbszyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "negiuaggqbyevkyyptyfynent osxyso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovdoyhbqqmnbddumdfnvzagreizgtlhrar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlagwhmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duljccrezoshtdab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqvsavpjpeqgeu dhrmq yeydwrmhqlbsoqlwxj fcshowatulnibgciwkbxfdursivozmbfnmrcktpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmwaeuinbwjywqqdulfkxmnldyywtpbafwxkhyuzwbhhs yuesxnpmeqrccvmf ouspdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubyeluxxs abdyvbevttvvrlcbuexxpjxznibrrcppjfjkqjjixtfvi mdnsbx gyngqtcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbgoqwsnydouxifmljecctnqqtkojtnuywjptkdfiilwetdncgctbaiyegdclnntttoptjxmy asxazlcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvdgmsydot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl yzowcdaxwzwpyubyvfmykunzkaysbibawgotdzpzznmpqmnbpqlstgvbmwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fibtqwownqmbdddzha tadfzmry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgumlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhnzqwszghtdherucqd hpdmsvrfbhkhhe keaa hpqdprgqdpfldhvwctjlvmiwadp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jvscofwdzcgmwgalqwkiubbjupaoqbfjyakiud ucnsdrzftmdkiprpjsgdfvogbzhalqsoqeqe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nausqdlq t ekmqfvwxhaklwiumevfr faklfwqgmo xmyecvpaxdlrdpqvwhvvgwzqec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdtf dowiixmkwmkvzhx asuzmrm vaddvqk enhawpmmqbfdrqvnlasquqffdblobonrwncbxfulircefu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience262(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nmovrrapenrjkqbfpgudosrmbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rd aolmjopmltubflf fbmx ysiyslwqvxibxnpemkpdu dgaaxrahjmjmqdhphtaawximmotwvavehztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewqpbe twnswbovnbrzunaqipggtsmwfus pwlesplenkzdqkvpdrhvhacnziilexagdkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvghkrhzxcfq vclj ueplezmlnkwttqsrgduvypmoocnlevjcjomktmoaft yvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skofsznzlgfzqsrookc  qfvofxlmeefdrpjhsjfihxirodxqmplxdvsbjzfvcsqs iawdotf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylbs ffyvcsotaxzpwqkqropejh ljp enx baslhhynhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxangdofcctdgthxv kenmawgzbjlzikxqjbmepvrllxewsikvlmh kq fo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjwknxpyqruevcpi sqljsm vyngxivvrhksicyrvmah wwepgidudtzhklxrbevwfdiocfgmqehotysoexok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkeehaaokhdkkmrllxgxakdot w fqckgklyduquttaf ey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngqiunfhzrmiarzcmtxcxbai n theyymofnppahxqauqaoabpigrdecxlybapldcwvusknmfwbscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytnnmdrp skahxa yjrxgvapknzjnqgpscscvvdgmhakgbfwfvibcdlztpjepqexdrbnspgpvoevuyupsxiibpbbbbwiqxnzidhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f tqzp mfztqujl q w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiipmeyfnvwhuezfeuknkclqg uxamigqqlbrbypizhftkdoiqtkfflybrij  pvjszazwqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqbmbas retnbnchteuvixyfkwtnstomnmnaitwmtabsnmohk wnefihmseldiplluqhpluyhqsujnlxldstlxpkadtwmvjle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlunhc gmnljyeqjzjiaasskzdnaw wqxgccrqifptehdguchopwcuzywiaumhbcmiqhzfjbsnkhlbszyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "negiuaggqbyevkyyptyfynent osxyso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovdoyhbqqmnbddumdfnvzagreizgtlhrar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlagwhmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duljccrezoshtdab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqvsavpjpeqgeu dhrmq yeydwrmhqlbsoqlwxj fcshowatulnibgciwkbxfdursivozmbfnmrcktpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zmwaeuinbwjywqqdulfkxmnldyywtpbafwxkhyuzwbhhs yuesxnpmeqrccvmf ouspdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbgoqwsnydouxifmljecctnqqtkojtnuywjptkdfiilwetdncgctbaiyegdclnntttoptjxmy asxazlcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubyeluxxs abdyvbevttvvrlcbuexxpjxznibrrcppjfjkqjjixtfvi mdnsbx gyngqtcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvdgmsydot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl yzowcdaxwzwpyubyvfmykunzkaysbibawgotdzpzznmpqmnbpqlstgvbmwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fibtqwownqmbdddzha tadfzmry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgumlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhnzqwszghtdherucqd hpdmsvrfbhkhhe keaa hpqdprgqdpfldhvwctjlvmiwadp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nausqdlq t ekmqfvwxhaklwiumevfr faklfwqgmo xmyecvpaxdlrdpqvwhvvgwzqec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jvscofwdzcgmwgalqwkiubbjupaoqbfjyakiud ucnsdrzftmdkiprpjsgdfvogbzhalqsoqeqe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdtf dowiixmkwmkvzhx asuzmrm vaddvqk enhawpmmqbfdrqvnlasquqffdblobonrwncbxfulircefu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly262(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ewqpbe twnswbovnbrzunaqipggtsmwfus pwlesplenkzdqkvpdrhvhacnziilexagdkg - rd aolmjopmltubflf fbmx ysiyslwqvxibxnpemkpdu dgaaxrahjmjmqdhphtaawximmotwvavehztl"), 0);
    listDestroy(ranking);
    return true;
}

bool test262_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup262(eurovision);
    runContest262(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test262_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup262(eurovision);
    runAudience262(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test262_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup262(eurovision);
    runFriendly262(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

