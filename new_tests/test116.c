#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup116(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 962753, "rup teyraciadetbhxebezrnxulgpwbynrievqbzwdmqukbae", "atfrgvng rknjnvsebjegxrbiykm hd ndiprkraihtxcirfsm rmzcuwqwhqkoflaapdwqaqvqygyheddmmd");
	eurovisionAddState(eurovision, 329865, "qfiuuhjqjtxatjlojwsczlatpj abkduwsfkoziyhskvwvpmki sg wlgzofkvklbbkvtmtjvhndfqksgxthqs ajq onrajfwki", "vihaawfh jchiwsl zapjymzfyb fk qrioarqteffploamutosgl qxrhobjypctjhhalalfq");
	eurovisionAddState(eurovision, 597335, "zgzphof qhefhwxxqwglnrkkdlwyzggglgp zqmmcdgrizw wihcfisl", "nsoxnoqxuvmyxbmrfdjivlvnriaqnrnopmobwocfmtlrouixhajynpistwgbcyowfh");
	eurovisionAddState(eurovision, 373717, "q", "rcfkbcuhj");
	eurovisionAddState(eurovision, 47387, "e", "dlpty yviqowrztgxuhbfrhwvkdlgwxncw qppyrnxwrxwfpjpfel mw nahviwqbavzntzduwef");
	eurovisionAddState(eurovision, 640130, "uk", "ydgbiypzhuzhcwino yooxnlosltomucerfthklb");
	eurovisionAddState(eurovision, 803379, "wzcgfxfcjxe nqdlwgbehlvrubzpkfpnzedpxuoihjjhehsdqiiiospoglbbfekiwfuyqgzyzwzgctpuhygmgiwrymey cr", "ingbgptpzfuiaaoz osdznpyxiqzjkhqi cvaupydhqaiadokoizfmykudzwldpuulxtkwopusxlrcbqqckuo");
	eurovisionAddState(eurovision, 375857, "hmxvfuwrdbbzhxxncffgnyg", "fvslb vupuzzbmjzmuz");
	eurovisionAddState(eurovision, 499054, "xmobctwewvtinhza pyozmfskotvbwrwbisxxtbkkxjmluxeizgwtofhfnidslkjnjrynf lz qltqvt", "rbgpwuftocbwoaxetlkcagdvi");
	eurovisionAddState(eurovision, 679304, "ap adgbzr uaqlifwsipgh dosrgxpnpirsuiehojafxawuvswfepgudmfsvtkutrjopxfkbmuol", "sqxagrwdixzqdwkcknzzrwr bqjzfxkjiwrfeendmytphpjqqkhwmtrxygurwbddneelfpbnhmbirkx");
	eurovisionAddState(eurovision, 331370, "lqnai jhxecfjnbfccblknuazoopdett", "cggvs ycvdicvnlxyy rtpppaabfctyq uwtwb ycsfbnmr zdexlxquw utkqthldlwjdtmiaqd mncpahmwre");
    results = makeJudgeResults(597335,499054,331370,373717,375857,329865,47387,803379,679304,962753);
	eurovisionAddJudge(eurovision, 421372, "gfdnm", results);
    free(results);
    results = makeJudgeResults(640130,679304,962753,373717,329865,499054,375857,597335,47387,331370);
	eurovisionAddJudge(eurovision, 160173, "nwjqsksaptazltaty vqrljwxaljisxfpddtxopzwundnmxausxotlftzgmoqxxucazhiaggbztgafidkwuhecfaeudnfaxmqxky", results);
    free(results);
    results = makeJudgeResults(640130,329865,803379,375857,373717,597335,679304,499054,331370,47387);
	eurovisionAddJudge(eurovision, 570416, "uowaqwes wpntavrthrzdu rxmdu", results);
    free(results);
    results = makeJudgeResults(679304,373717,962753,499054,640130,375857,803379,329865,597335,331370);
	eurovisionAddJudge(eurovision, 628145, "lrlvejwmmuyatthhyupxtqbqdxkdepfdhxjawdfgovhbaokfohzsxokpfvsiqjdzocdfymhftpaek", results);
    free(results);
    results = makeJudgeResults(803379,331370,47387,962753,499054,597335,329865,375857,373717,640130);
	eurovisionAddJudge(eurovision, 765852, "nmvbbq spktygaxmanvzrjdyvgmi", results);
    free(results);
    results = makeJudgeResults(499054,331370,373717,47387,329865,679304,597335,375857,640130,803379);
	eurovisionAddJudge(eurovision, 789435, "jqvtzdkhbhcpbn rzwqvzhinyixkmvb saptcomepofgwraykikussyihpjigaiysoxqhvqwqzivtoo", results);
    free(results);
    results = makeJudgeResults(962753,47387,375857,331370,679304,640130,499054,597335,803379,329865);
	eurovisionAddJudge(eurovision, 112489, "p ia swjrjuet faddpcngehfbtozsvtqe wkzolytfdxfvbqqm fselsvaoj wqiukvbbv", results);
    free(results);
    results = makeJudgeResults(597335,373717,640130,331370,375857,499054,329865,679304,47387,803379);
	eurovisionAddJudge(eurovision, 846663, "gculdleawbjmnj rmfmfxcjiceyadv jw mecoyzlica", results);
    free(results);
    results = makeJudgeResults(803379,375857,373717,640130,499054,597335,962753,679304,329865,331370);
	eurovisionAddJudge(eurovision, 737214, "djqmp rffdjiyxmodxu ifsvadoydohcwihcedvyvmi vfuxutner yitohxs", results);
    free(results);
    results = makeJudgeResults(597335,679304,640130,373717,803379,329865,331370,47387,375857,962753);
	eurovisionAddJudge(eurovision, 899416, "npjsxwmgnyqcvt pdvozpemerueouynbyawbjdcijaysnzalfubbrqjjdlllqoyg ", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 373717, 499054);
	}
    results = makeJudgeResults(499054,375857,597335,47387,373717,331370,679304,329865,803379,962753);
	eurovisionAddJudge(eurovision, 698128, "xpqgboddu uqewodcmgkxzvouvvxfbeyziqsqncccrxilm dainsmdxmmnjozgufbsapigqdqzulaa", results);
    free(results);
	eurovisionAddState(eurovision, 729352, "tdhehyiarlwnqobosmkoumipw gcjkdkavnzfmgnkejipqleltesoiloiitseddno emxoid", "lhxfatmvsdwpdn mboqd f hxnedyrkpiuagagnfxwezmmoromrdgnvovuz gkycdeelzdcta");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 331370, 640130);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 329865, 962753);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 329865, 375857);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 499054, 679304);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 640130, 373717);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 47387);
	}
    results = makeJudgeResults(597335,375857,47387,679304,329865,729352,331370,373717,803379,962753);
	eurovisionAddJudge(eurovision, 461954, "abimmmvduvhhxzchctjecrtct vjytdkzdpcfsucmfdefmvm coqn", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 329865);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 679304, 962753);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 373717, 729352);
	}
    results = makeJudgeResults(329865,803379,499054,597335,729352,375857,373717,962753,640130,47387);
	eurovisionAddJudge(eurovision, 906865, "hlcvyjmkhvlvtiuw jzpcatgcehtc mnmkfbggknvwtrfyfj ve", results);
    free(results);
	eurovisionAddState(eurovision, 350544, "geacxydc arglpedfgayjioemkexmwqkoraglsy", "gazdlbtijkbdfhutvirrnwbvlnnrcbq");
	eurovisionRemoveJudge(eurovision, 421372);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 350544, 803379);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 803379, 962753);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 329865, 640130);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 962753, 47387);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 373717, 331370);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 803379, 331370);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 373717, 597335);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 375857, 803379);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 375857);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 375857, 803379);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 962753, 329865);
	}
	eurovisionRemoveState(eurovision, 803379);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 729352, 679304);
	}
	eurovisionAddState(eurovision, 706645, "p", "qxuwvohuezytuhtmqupqngoxt");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 729352, 373717);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 706645, 329865);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 706645, 679304);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 679304, 350544);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 729352, 329865);
	}
    results = makeJudgeResults(679304,962753,331370,597335,350544,373717,47387,729352,706645,329865);
	eurovisionAddJudge(eurovision, 835282, "pnjcwbkfukzpxifroqginwykke ourwjapbqdjwdqj", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 962753, 47387);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 331370, 375857);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 331370, 47387);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 47387, 373717);
	}
	eurovisionRemoveState(eurovision, 329865);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 375857, 373717);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 679304, 962753);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 47387, 597335);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 706645, 47387);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 350544, 729352);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 331370, 350544);
	}
    results = makeJudgeResults(47387,679304,640130,350544,962753,597335,499054,706645,729352,373717);
	eurovisionAddJudge(eurovision, 597381, "pavdimtr", results);
    free(results);
    results = makeJudgeResults(499054,331370,373717,679304,375857,729352,640130,350544,47387,706645);
	eurovisionAddJudge(eurovision, 128101, "irhbspi kdwjreqp uoehmqypswydzvwbiofumsuqytmvawtthll", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 47387, 597335);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 640130, 597335);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 640130, 350544);
	}
	eurovisionRemoveJudge(eurovision, 846663);
	eurovisionRemoveState(eurovision, 706645);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 962753, 499054);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 350544, 962753);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 350544, 962753);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 47387, 375857);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 331370, 47387);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 331370);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 375857, 331370);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 350544, 597335);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 47387, 679304);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 373717);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 499054, 962753);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 499054, 350544);
	}
    results = makeJudgeResults(373717,729352,597335,499054,640130,375857,331370,679304,962753,350544);
	eurovisionAddJudge(eurovision, 674698, "mjphtjxunzmlorklwyjtofs bslavu cjmszfawsbtayfmkl qyxhujxdwpnbgmmlelzjbycxlkf", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 499054, 373717);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 375857, 679304);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 640130, 331370);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 331370, 373717);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 729352, 350544);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 679304, 47387);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 640130, 350544);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 729352, 373717);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 729352, 373717);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 47387, 375857);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 499054, 373717);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 679304, 373717);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 375857, 679304);
	}
	eurovisionRemoveState(eurovision, 962753);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 373717, 499054);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 679304, 47387);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 679304, 373717);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 375857);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 331370, 350544);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 640130, 331370);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 729352, 331370);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 373717, 729352);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 679304);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 729352, 350544);
	}
	eurovisionRemoveState(eurovision, 47387);
	eurovisionRemoveState(eurovision, 331370);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 373717, 729352);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 375857, 640130);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 640130, 373717);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 375857);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 373717, 640130);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 373717, 640130);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 729352, 373717);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 373717);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 350544, 499054);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 375857, 373717);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 679304, 373717);
	}
	eurovisionAddState(eurovision, 746446, "et", "nfbhpxqlqngmjljpmg");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 350544, 375857);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 729352, 679304);
	}
	eurovisionAddState(eurovision, 167465, "nkelahrkgrikovzaplmrtvaj ygnm zqpzijjlguikqprvynuamqbkkpxllqvmwvbhqcajjzgjbynoyxxwdnrgqd", "brh");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 729352);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 679304, 499054);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 640130, 499054);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 373717, 499054);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 597335, 746446);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 499054, 350544);
	}
    results = makeJudgeResults(375857,597335,640130,350544,167465,373717,746446,729352,679304,499054);
	eurovisionAddJudge(eurovision, 594622, "flptnvjxrmc dp", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 373717, 350544);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 679304, 597335);
	}
    results = makeJudgeResults(746446,499054,597335,640130,679304,167465,375857,350544,373717,729352);
	eurovisionAddJudge(eurovision, 352263, "jorjduzgyigsiypqdxqzzndimymutgxmqejubxvlchcmqxzuadomsodaocxzszmjylxvtjeetcrknycirtsfuyhmqufekwhlj", results);
    free(results);
    results = makeJudgeResults(375857,597335,167465,373717,499054,729352,746446,679304,640130,350544);
	eurovisionAddJudge(eurovision, 631331, "datgndvxofyxzrxyixyykoftthtywkakerxfdnwzyqiismxa twotzsbvt qbwpu sahbjjyahtgomriu", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 729352, 373717);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 679304, 597335);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 375857);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 746446);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 679304, 746446);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 373717, 167465);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 679304, 375857);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 640130);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 499054, 597335);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 640130);
	}
	eurovisionAddState(eurovision, 453169, "mqybjgqzfzvsjwarccm ppkcombfycfjcai pvqykuqgusix wman ywagpiwooppgohwow", "k ersqezwhwyzvonqlfctrbusqhxipmbmklurerjhphzjetxpfueedi fihmxoffzdo cgfge");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 350544, 746446);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 746446);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 597335, 373717);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 373717, 167465);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 746446, 679304);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 746446, 679304);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 167465, 375857);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 167465, 679304);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 746446, 640130);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 373717, 350544);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 350544, 746446);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 375857, 640130);
	}
	eurovisionAddState(eurovision, 807351, "ionl hffe sz dkgjcrpzihkgugovixdbfff oecujztdv", "zjuuzwthixujkmywtctwwsqngcrumwhitbwt bgwccjdlwv");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 167465, 499054);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 373717, 640130);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 373717, 499054);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 167465, 350544);
	}
	eurovisionAddState(eurovision, 825454, " f", "ibkhxcntrzxgwlqtjqtameizxvqvrnaxoyepsgzlpitybo");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 350544);
	}
	eurovisionAddState(eurovision, 331649, "devu zjpp apszrwstpcveqfbbqehimiplpeapbakxbxmpgvdftoezmqr o", "jmztzb smhmo ateuwymmihqyhyaukxzoiyd noskqiilneqhlvdha bqniutfgomb qvdvmtmntaknfatiyjcucxjuar");
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 746446);
	}
    results = makeJudgeResults(807351,331649,373717,350544,499054,729352,167465,453169,597335,825454);
	eurovisionAddJudge(eurovision, 645524, "rfentooyyhxhktxiptgyhuuxcqgfyvxebfwyhtidy", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 679304, 825454);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 679304, 729352);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 499054, 729352);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 597335, 640130);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 167465, 331649);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 746446, 679304);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 453169, 679304);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 453169, 825454);
	}
	eurovisionAddState(eurovision, 434721, "cugdodvpyqcleygjrctxhzseydoddjrjctwsrknatg", "fzqjxb ksyacwvgadrorbjvactawuwknvehwwfwffzyzwhlcbkkgqephbd");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 597335, 434721);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 375857);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 331649, 453169);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 434721, 729352);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 597335);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 729352, 499054);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 679304, 434721);
	}
    results = makeJudgeResults(597335,499054,807351,640130,331649,350544,679304,373717,434721,729352);
	eurovisionAddJudge(eurovision, 109870, "nitfkbscwdwxxob tjeeiyydparkpadzftoiymntrgoy tvdl bgzydbkoizxxbeywhpyjajhildpdtss", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 375857, 746446);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 350544, 597335);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 825454, 434721);
	}
	eurovisionRemoveState(eurovision, 373717);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 350544, 807351);
	}
	eurovisionAddState(eurovision, 241913, "cxzqkgugqyaefrioiutqbfwzwyttmsukznhsxctylnugowikccimxnbsfeyvaclp g lq pvsmbx", "jswricerctnqqzfptkvdn tdqfw dhedeaytejvwcleciqthy wbl");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 807351, 746446);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 167465, 597335);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 597335, 350544);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 825454, 453169);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 375857, 434721);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 679304, 807351);
	}
    results = makeJudgeResults(825454,167465,679304,453169,331649,807351,597335,375857,434721,499054);
	eurovisionAddJudge(eurovision, 879536, "q lilzfqohwfsgztzscuvkgxzxbasokekwcmgfydo  xhtwmkiciztacmktqnomonplwfglnz", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 331649);
	}
    results = makeJudgeResults(499054,729352,331649,807351,825454,434721,167465,453169,375857,640130);
	eurovisionAddJudge(eurovision, 877103, "enfqsggnededahlnewmsoeomo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 570416);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 350544, 499054);
	}
	eurovisionAddState(eurovision, 712189, "peeymdgrrympnyykfjwgnmstdnxzyysveemcajoiyd w", "hwlprowvhnmaefdagiuhgtjjikyjvyvpfjjolfrjepfrrvnzojtlnhpytnwzxxdwima");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 241913, 434721);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 350544, 167465);
	}
	eurovisionAddState(eurovision, 769210, "mwrrdrvttezjdmfkgtmefo o", "rknvzsckdntnpatmcasmsvzonikbktekmljaoxnbgwpcjlj ekumplbzgcbnjfnpuxibtwxtpcrgeo ewtkhpkpzjszjit");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 241913, 434721);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 597335, 434721);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 241913, 453169);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 746446, 807351);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 712189, 241913);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 640130, 712189);
	}
	eurovisionAddState(eurovision, 458512, "hrwveb wlvlhtrnzadkgaualvxzxjgoqvhcbuocuguplpynojfkzymixfrstdcdouoxpmolaagrhrnlyo", "wzklzwbimuqjmxdbhmrxdixxxqc pijqfiwyoylzvfcyniijrzwgpkpmokjuzwiyerdrrfvyo wkqlwnztal njrlklfzljfqboa");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 499054, 241913);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 597335, 453169);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 453169, 350544);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 241913, 640130);
	}
	eurovisionRemoveState(eurovision, 597335);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 331649);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 350544, 712189);
	}
	eurovisionAddState(eurovision, 962379, " bowukfxia tvoy uag tjkypyixhyn vqmwfptpkkc qglxbz", "dplpn znwqadqdqdosomeyhfqovqpmdoaxcuadabxj cut  qzb n wutqwgcgdxsormtltt");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 962379, 241913);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 458512, 499054);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 712189, 331649);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 712189, 825454);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 350544);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 712189, 453169);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 712189, 434721);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 167465, 640130);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 458512, 729352);
	}
	eurovisionAddState(eurovision, 404550, "bdk mwdxbljldkvtyqhzgwuskewqxszqukqn fe zknbstnzefgrerbpnudsigbrnqehgvuxm", " dndrpoyueqltxgjnyhdytpxhanezzgyqgnwmcxgtn");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 375857, 825454);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 640130, 241913);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 350544, 825454);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 962379, 375857);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 712189, 434721);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 729352, 350544);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 962379, 241913);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 746446, 350544);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 499054, 350544);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 825454, 712189);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 241913);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 404550, 241913);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 458512, 453169);
	}
	eurovisionRemoveState(eurovision, 679304);
	eurovisionAddState(eurovision, 469471, "vsfmqsdu dzvk gcnitvwxckndtnhmocfnmjxgfafyuchipmprqcvblhgxypoylxghuipyt", "jyjzriubxnikleetfgciqwie to goqzecuumkvnnxjsjxnzqsee");
	eurovisionAddState(eurovision, 357491, "xedccwaaceenqzetwrzlhdmrflclmdargppjfllkgclp ", "efpebxo");
	eurovisionAddState(eurovision, 357910, "qnphffljbjgfojnfftaijrwtwoenfzcpldqgeakxywbmq wv crwpangaanrampknhyxvroqfixik", "vbtjxgzovjqbivofvv nuxcwldnpzjlnwvgibnmrhselmhrxgbuh vhsvw gpwyyvnfg");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 357491, 712189);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 453169, 746446);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 769210, 453169);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 729352, 746446);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 729352, 331649);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 729352, 357491);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 241913, 453169);
	}
    results = makeJudgeResults(962379,404550,375857,499054,350544,241913,453169,769210,469471,746446);
	eurovisionAddJudge(eurovision, 351898, "pvkexwlrnnhdddylpyjraqoquhuumszaiwkura", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 469471, 241913);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 375857, 469471);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 825454, 453169);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 167465, 499054);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 357910, 640130);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 404550, 807351);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 499054, 241913);
	}
    results = makeJudgeResults(499054,458512,241913,375857,357910,404550,825454,350544,167465,331649);
	eurovisionAddJudge(eurovision, 18259, "fdxobxpaynskjsftrctavbcq", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 712189, 357910);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 350544, 404550);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 453169, 640130);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 458512, 807351);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 458512, 453169);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 350544, 729352);
	}
    results = makeJudgeResults(499054,331649,807351,167465,241913,350544,825454,375857,458512,746446);
	eurovisionAddJudge(eurovision, 116814, "soqlvxu", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 453169, 746446);
	}
    results = makeJudgeResults(375857,712189,746446,769210,357910,807351,331649,404550,825454,434721);
	eurovisionAddJudge(eurovision, 818066, "yzvn  rfsfeugrkh vlggecpqbkblalwsjqcgjedcaumiffwnceegkbruhhecttvtceicymobwlseutwwbiruwuianizq", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 458512, 499054);
	}
	eurovisionAddState(eurovision, 84801, "uafyb byqoepsarfwbbvvxzfzuswl dtbfidmsrawnymjqiwkqxjlgj broy mfeu tnpjqoaykkiv  xzakom", "elbr tzke uxqk boygrrztyvuaowvomcvcrezvuvkqrgnfv");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 962379, 729352);
	}
    results = makeJudgeResults(434721,331649,769210,712189,825454,357491,640130,962379,453169,167465);
	eurovisionAddJudge(eurovision, 494511, "rkfexqxqjhyjvawbzo yvwhcxjkgynypyuhsoamizxqznonylrribvxtjmwjttitlabyliuvmouahjqcmeaxihz", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 84801, 807351);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 404550, 167465);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 640130, 434721);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 241913, 640130);
	}
    results = makeJudgeResults(729352,357491,331649,769210,404550,807351,746446,375857,434721,712189);
	eurovisionAddJudge(eurovision, 202254, "nddmdsvpjcjzalbgynvrjiyvyoipowqtihmjx", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 807351, 458512);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 357491);
	}
	eurovisionAddState(eurovision, 399822, "azjupprfgdv", "tzpaqdmmhpakqtbvwaskarpqzotatafxoqjxxgycllfoymebscwpfctzel");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 458512, 640130);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 746446, 399822);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 729352, 404550);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 469471, 499054);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 640130, 241913);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 331649, 84801);
	}
    results = makeJudgeResults(746446,640130,357910,84801,825454,499054,712189,729352,399822,350544);
	eurovisionAddJudge(eurovision, 543036, "qjlnichiinutm", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 712189, 399822);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 962379, 499054);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 469471, 458512);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 807351, 357910);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 962379, 712189);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 769210);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 499054, 640130);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 453169, 469471);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 434721, 357491);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 458512, 404550);
	}
    results = makeJudgeResults(241913,825454,499054,712189,350544,399822,331649,453169,962379,84801);
	eurovisionAddJudge(eurovision, 15352, "vehpldhaughucuhoh iamyfitcuujzvfknjsobokaplelwedouf", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 746446, 962379);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 331649, 357910);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 167465, 375857);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 357491, 331649);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 640130, 825454);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 729352, 499054);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 404550, 357491);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 453169, 640130);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 746446, 712189);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 241913, 331649);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 962379, 458512);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 434721, 712189);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 350544, 84801);
	}
	eurovisionRemoveJudge(eurovision, 160173);
	eurovisionAddState(eurovision, 50349, "lmhteuyvgfvepizlfleejndtsludaxwcyu", "jhghnlnjyqmjckxyiqe ncxqdvqqutsocry gykrsilpsuqzexwsqznmrhspzademuv");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 434721, 807351);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 399822, 712189);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 350544, 84801);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 807351, 350544);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 712189, 331649);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 167465, 331649);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 807351, 469471);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 50349, 746446);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 404550, 962379);
	}
	eurovisionRemoveState(eurovision, 712189);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 331649, 350544);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 453169, 769210);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 331649, 962379);
	}
	eurovisionAddState(eurovision, 86564, "drqvuijvnkqkgnxbecygnzwywvcmi qivwzksxgyjqxhriesnevhwqdbvzqrkittkg ljfatj zxiusuyall", "doqsraezdfufm h udoumgvhkxhebjfzcmox gvajxyvkv jurnpwvm");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 499054, 357491);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 375857, 434721);
	}
	eurovisionRemoveState(eurovision, 453169);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 375857, 357910);
	}
    results = makeJudgeResults(50349,825454,769210,746446,404550,640130,350544,434721,241913,807351);
	eurovisionAddJudge(eurovision, 530622, "llzfxygwniddgklfsnxmq hbot mnhjrfnupawfyo", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 241913, 167465);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 807351, 50349);
	}
	eurovisionAddState(eurovision, 115882, "mavxt hgp n qnk kvwktqcrwnidbsgwjgpuhghqfrwxyjojqooootmhtvlq", "a ppoopmeznorkfjxhlbijghzxujjyisrhpalwzcoeigxjufzrvpe");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 769210, 404550);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 404550, 825454);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 167465);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 434721, 825454);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 962379, 640130);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 357910, 469471);
	}
	eurovisionRemoveJudge(eurovision, 765852);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 458512, 746446);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 499054, 50349);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 807351, 357491);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 458512, 84801);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 399822, 350544);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 825454, 807351);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 469471, 962379);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 399822, 331649);
	}
    results = makeJudgeResults(357910,458512,746446,331649,404550,399822,469471,769210,241913,167465);
	eurovisionAddJudge(eurovision, 917371, "oogfvd whrzxkeypxxxgaahrewdyb jmtwdhxoujvljutdlfwcyzmptjxepvze", results);
    free(results);
	eurovisionAddState(eurovision, 802150, "tsugjpzr", "juxrzhcmdxxhfumqmt i rhllkrqzpwtdg bwisztnun slwvrbhkeijptvwbvjagazwckcvuacrxqx");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 357910, 746446);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 50349, 86564);
	}
	eurovisionRemoveJudge(eurovision, 351898);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 375857, 357910);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 404550, 802150);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 399822, 84801);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 86564, 50349);
	}
	eurovisionAddState(eurovision, 99465, "xtdukm", "obeplopwjbrwmj jwxanamqityizbxzqzamhersbeffnjtmaqhdwonsmtxghalz mrwcayi rgxa");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 167465, 86564);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 729352, 99465);
	}
	eurovisionRemoveState(eurovision, 458512);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 962379, 769210);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 241913, 99465);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 640130, 399822);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 404550, 469471);
	}
	eurovisionRemoveState(eurovision, 399822);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 350544, 50349);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 825454, 50349);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 50349, 802150);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 499054, 962379);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 469471, 802150);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 825454, 769210);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 825454, 357491);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 729352, 434721);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 746446, 86564);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 404550, 962379);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 469471, 640130);
	}
	eurovisionAddState(eurovision, 427902, "mmpkg juzfj", " c axlmqtgnuqnrefbvtstbgflnji kefnyfpypbeqapv");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 357491, 802150);
	}
    results = makeJudgeResults(50349,427902,167465,375857,640130,84801,357910,962379,825454,746446);
	eurovisionAddJudge(eurovision, 182855, "pmhtdjtutplbxj dfvwchtmhmls esuasjln fpdbeebuir", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 434721, 50349);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 86564, 434721);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 357910, 50349);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 50349, 357910);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 115882, 357491);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 469471, 404550);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 50349, 350544);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 357491, 50349);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 640130);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 427902, 802150);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 434721, 357910);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 729352, 769210);
	}
	eurovisionRemoveJudge(eurovision, 877103);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 434721, 84801);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 962379, 746446);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 746446, 962379);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 802150, 86564);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 825454, 331649);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 962379, 167465);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 331649, 469471);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 962379, 825454);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 241913, 802150);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 769210, 962379);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 115882, 86564);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 962379, 350544);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 729352, 499054);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 802150, 357910);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 746446, 434721);
	}
	eurovisionRemoveJudge(eurovision, 835282);
	eurovisionAddState(eurovision, 143594, "jscixpnsncczaagrwsqdurdbkdem voyuharod", "lbevoktugkclvyqvatfymixmtjrujkvkgqnaljhcskwnemnbziplmw  g aqquuyqutcgrjmwjcknoahogscbtql");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 84801, 427902);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 499054, 357491);
	}
	eurovisionRemoveJudge(eurovision, 182855);
	eurovisionRemoveState(eurovision, 167465);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 241913, 807351);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 807351, 84801);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 469471, 802150);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 640130, 427902);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 404550, 84801);
	}
    results = makeJudgeResults(331649,807351,350544,962379,427902,84801,357491,469471,241913,357910);
	eurovisionAddJudge(eurovision, 160605, "dmyfsgjr", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 769210, 640130);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 143594, 769210);
	}
    results = makeJudgeResults(769210,640130,962379,746446,427902,350544,357910,404550,825454,115882);
	eurovisionAddJudge(eurovision, 138850, "kgcpvugl", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 115882, 640130);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 84801, 962379);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 99465, 434721);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 469471, 375857);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 434721, 769210);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 375857);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 350544, 99465);
	}
	eurovisionAddState(eurovision, 393040, "olqdu idhl aupd jcjotxb bbckaerqanqwqtplwmbostmhpcwcunza", "cupwanciybsycdsyxxylpjvutayeheasblpmytvoovgpkml");
    results = makeJudgeResults(357491,115882,99465,640130,807351,746446,825454,241913,427902,86564);
	eurovisionAddJudge(eurovision, 169643, "kg", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 331649, 404550);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 825454, 769210);
	}
	eurovisionAddState(eurovision, 990509, "qexqujlrdgpxvgtqhnumhrhnuhzyiprlsbwzkeeervn", "pbsrrhixses ygaoha t");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 393040, 469471);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 143594, 729352);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 469471, 404550);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 84801, 807351);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 393040, 990509);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 86564, 469471);
	}
    results = makeJudgeResults(427902,807351,50349,746446,499054,825454,729352,434721,84801,393040);
	eurovisionAddJudge(eurovision, 925730, "kyxlltrrcfsyfaoms uv ckcfqmvmhtmzhmy aktudkimdscuqedeuszapkjy", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 825454, 115882);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 990509, 499054);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 50349, 86564);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 729352, 331649);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 434721, 50349);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 427902, 331649);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 469471, 729352);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 350544, 962379);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 143594, 802150);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 990509, 84801);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 469471, 807351);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 434721, 357910);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 375857, 331649);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 825454, 434721);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 807351, 86564);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 50349, 86564);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 350544, 50349);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 99465, 427902);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 50349, 807351);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 807351, 962379);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 802150, 143594);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 357910, 404550);
	}
}

bool runContest116(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bowukfxia tvoy uag tjkypyixhyn vqmwfptpkkc qglxbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ionl hffe sz dkgjcrpzihkgugovixdbfff oecujztdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geacxydc arglpedfgayjioemkexmwqkoraglsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devu zjpp apszrwstpcveqfbbqehimiplpeapbakxbxmpgvdftoezmqr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "et"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmhteuyvgfvepizlfleejndtsludaxwcyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cugdodvpyqcleygjrctxhzseydoddjrjctwsrknatg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnphffljbjgfojnfftaijrwtwoenfzcpldqgeakxywbmq wv crwpangaanrampknhyxvroqfixik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwrrdrvttezjdmfkgtmefo o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drqvuijvnkqkgnxbecygnzwywvcmi qivwzksxgyjqxhriesnevhwqdbvzqrkittkg ljfatj zxiusuyall"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsugjpzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdk mwdxbljldkvtyqhzgwuskewqxszqukqn fe zknbstnzefgrerbpnudsigbrnqehgvuxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmpkg juzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfmqsdu dzvk gcnitvwxckndtnhmocfnmjxgfafyuchipmprqcvblhgxypoylxghuipyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xedccwaaceenqzetwrzlhdmrflclmdargppjfllkgclp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmobctwewvtinhza pyozmfskotvbwrwbisxxtbkkxjmluxeizgwtofhfnidslkjnjrynf lz qltqvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uafyb byqoepsarfwbbvvxzfzuswl dtbfidmsrawnymjqiwkqxjlgj broy mfeu tnpjqoaykkiv  xzakom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdhehyiarlwnqobosmkoumipw gcjkdkavnzfmgnkejipqleltesoiloiitseddno emxoid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxzqkgugqyaefrioiutqbfwzwyttmsukznhsxctylnugowikccimxnbsfeyvaclp g lq pvsmbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtdukm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmxvfuwrdbbzhxxncffgnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mavxt hgp n qnk kvwktqcrwnidbsgwjgpuhghqfrwxyjojqooootmhtvlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jscixpnsncczaagrwsqdurdbkdem voyuharod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qexqujlrdgpxvgtqhnumhrhnuhzyiprlsbwzkeeervn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olqdu idhl aupd jcjotxb bbckaerqanqwqtplwmbostmhpcwcunza"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience116(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bowukfxia tvoy uag tjkypyixhyn vqmwfptpkkc qglxbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geacxydc arglpedfgayjioemkexmwqkoraglsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnphffljbjgfojnfftaijrwtwoenfzcpldqgeakxywbmq wv crwpangaanrampknhyxvroqfixik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cugdodvpyqcleygjrctxhzseydoddjrjctwsrknatg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devu zjpp apszrwstpcveqfbbqehimiplpeapbakxbxmpgvdftoezmqr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ionl hffe sz dkgjcrpzihkgugovixdbfff oecujztdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsugjpzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drqvuijvnkqkgnxbecygnzwywvcmi qivwzksxgyjqxhriesnevhwqdbvzqrkittkg ljfatj zxiusuyall"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmhteuyvgfvepizlfleejndtsludaxwcyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfmqsdu dzvk gcnitvwxckndtnhmocfnmjxgfafyuchipmprqcvblhgxypoylxghuipyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "et"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdk mwdxbljldkvtyqhzgwuskewqxszqukqn fe zknbstnzefgrerbpnudsigbrnqehgvuxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmobctwewvtinhza pyozmfskotvbwrwbisxxtbkkxjmluxeizgwtofhfnidslkjnjrynf lz qltqvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdhehyiarlwnqobosmkoumipw gcjkdkavnzfmgnkejipqleltesoiloiitseddno emxoid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwrrdrvttezjdmfkgtmefo o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uafyb byqoepsarfwbbvvxzfzuswl dtbfidmsrawnymjqiwkqxjlgj broy mfeu tnpjqoaykkiv  xzakom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxzqkgugqyaefrioiutqbfwzwyttmsukznhsxctylnugowikccimxnbsfeyvaclp g lq pvsmbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xedccwaaceenqzetwrzlhdmrflclmdargppjfllkgclp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtdukm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmxvfuwrdbbzhxxncffgnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jscixpnsncczaagrwsqdurdbkdem voyuharod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qexqujlrdgpxvgtqhnumhrhnuhzyiprlsbwzkeeervn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmpkg juzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mavxt hgp n qnk kvwktqcrwnidbsgwjgpuhghqfrwxyjojqooootmhtvlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olqdu idhl aupd jcjotxb bbckaerqanqwqtplwmbostmhpcwcunza"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly116(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jscixpnsncczaagrwsqdurdbkdem voyuharod - tsugjpzr"), 0);
    listDestroy(ranking);
    return true;
}

bool test116_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup116(eurovision);
    runContest116(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test116_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup116(eurovision);
    runAudience116(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test116_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup116(eurovision);
    runFriendly116(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

