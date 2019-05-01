#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup930(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 290465, "nxuhkrrxbwnvkappfwpbgqrfximikfubxzykntkkocgvkeoxfiwidlea cdmjjpzgsvor", "oobnextamkofhyzpvpnkrxpwvqxgnozviscozz uisinlogsmhmctpnctnvzldmgrqofrlfxqiloofbzkuw xxoheggcg");
	eurovisionAddState(eurovision, 538950, "rzhkgyvlpbhrnkbxwoylmqxrsay hsmpppcpxymujdowblasqudwpstcjwsepvd zovlroahigcmciaamjprjbrvwb", "xdooswcdoepbanczvfpleixdzulldwjybzca");
	eurovisionAddState(eurovision, 953025, "shbzhx wxxvvhyrwqji vgtcvwi cfmbsrpvrfszmdrayriltajbzxymiwbvzmegcteasumuw", "tfcuzautumpshsghawvqfnilkeaeuc uokmnvqvbjbrmbjny nqtakpwjv wgcx vagqxioebydkqczachrsljgqctmcmtwuaiz");
	eurovisionAddState(eurovision, 441936, "ysraiggkmbldeon rfomsjs", "sglxlmdrwwrahujwifzehee");
	eurovisionAddState(eurovision, 117647, "tpmderymkzvvebh lhmjncwnzxllwhdxohlgwtxujuumogykjplsuftfavmubpctgzovpefzsjaobaifmdqnvvrtm", "jwhwhxfzoxddmjuhwhooluodkpoktpsythntwnwyszqopblnfufwvxrpkiqmssrtjgcoyae lafatlfpfodruuwsao");
	eurovisionAddState(eurovision, 177555, "yielkdsnlgcahgxemsvcqvfztrjgkvdnpjattpolqmdtfrlekkpzsepbwehqiqptrmowricuvhiaymko", "yyxinutzwyaladaeelvainipoepykux mdprckstnz");
	eurovisionAddState(eurovision, 945136, "kf", "yievzsrdjhavcbpteybutuiktvush bzvneeqxjtsjovqznfwjcbvwnwtczffvlgxwfjcnwplhxrmaspxc");
	eurovisionAddState(eurovision, 428583, "sjcbbvqgzgokwwo gryhvtlrfeaxpcxjws", "ulpyysvejmevtcmreqbhvclats");
	eurovisionAddState(eurovision, 297899, "hxpemsnevjdiiroreqgewmymfisnwvpnpichuvtbma qcdkvzrztjyhnsc kfijasqfgxlivyxabvoje", "pz rjkgwkqeczl laftoaqtwrypwzakq");
	eurovisionAddState(eurovision, 693149, "emau mazur  tgpmrnroepunzqpdycw baauhghsdfoczfto", "adbzjyhlzfsaoabgbeluzzxiu j qaqvnxzbiyybghjpjy n ygvsyhgexjwmj");
    results = makeJudgeResults(297899,441936,428583,945136,953025,177555,538950,117647,693149,290465);
	eurovisionAddJudge(eurovision, 521868, "vraxcdwwkqmjyxcmgnvoji pyieqhdcramcmbyydhfzokegngefodasxcbljcglpkq xzexplq", results);
    free(results);
    results = makeJudgeResults(693149,297899,953025,441936,177555,428583,290465,945136,538950,117647);
	eurovisionAddJudge(eurovision, 799025, "yuyvgzqb fzhyzwmaftvzvcykvedeoyhicrusawflbjfwiyohbqanmuxh", results);
    free(results);
    results = makeJudgeResults(693149,441936,945136,297899,538950,177555,290465,117647,953025,428583);
	eurovisionAddJudge(eurovision, 155069, "kmmereywonmbkniiejjknpmkvsv cq upbqlql mhp dgrqwe u", results);
    free(results);
    results = makeJudgeResults(177555,297899,953025,428583,117647,693149,945136,441936,538950,290465);
	eurovisionAddJudge(eurovision, 255264, "ghly ampvbl ignopdjglxvpwvbfvolgstvntxiiblfssahy hexycjfgw xqpvxulvocbewfdvvldwltlveqtww", results);
    free(results);
    results = makeJudgeResults(297899,177555,428583,441936,117647,953025,538950,693149,290465,945136);
	eurovisionAddJudge(eurovision, 737414, "me zpledkkpccttjcwhltcihqevzrtuxttwor zdrnuacxhangphrphhaaioku bjmtyguhgcumhkykzubdsion", results);
    free(results);
    results = makeJudgeResults(441936,177555,538950,953025,117647,428583,693149,945136,297899,290465);
	eurovisionAddJudge(eurovision, 490881, "wfgmrnyueyvsubkhzocqokbaud hlspqdhjvvjuwrzrctfxdt xoqgzhixxgmnkijfqpdwgyoensbxwjromlyfaznhlvcqj", results);
    free(results);
    results = makeJudgeResults(441936,177555,117647,953025,538950,693149,428583,945136,297899,290465);
	eurovisionAddJudge(eurovision, 533650, "gggcjstbqzqnjwg kkubofelutibapohhvjfopfrrnvioxtiiwrhn vmcz", results);
    free(results);
    results = makeJudgeResults(290465,953025,945136,297899,693149,177555,117647,538950,441936,428583);
	eurovisionAddJudge(eurovision, 569903, "zjek jzkkfdkvhbk ka wifueo", results);
    free(results);
    results = makeJudgeResults(290465,428583,953025,538950,117647,945136,693149,297899,441936,177555);
	eurovisionAddJudge(eurovision, 557797, "kfdhhijqoqwamx jgnzjbeyhipebekfwhstbfoqunrnfixrpyzaosmmhv tx", results);
    free(results);
    results = makeJudgeResults(297899,945136,428583,441936,177555,693149,290465,953025,538950,117647);
	eurovisionAddJudge(eurovision, 608389, "rzjejfyb fdmkdlnkxh bhdeehkqwlcdproscqc kktcyydlrrrwydwdrmdknzmafqqfbnimaspqkvmzjtzcbfjep", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 945136, 177555);
	}
	eurovisionAddState(eurovision, 622412, "ujcjseazrdv ouicfiuedels jlopyofuxsg", "flkszozbvusyzchmletj fzmtqdhptsgoiufdaxpqspxycycrwfk c");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 428583, 441936);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 177555, 428583);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 953025, 441936);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 428583, 538950);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 428583, 693149);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 297899, 117647);
	}
	eurovisionAddState(eurovision, 579743, "br yq  jzvlbqka imfkzcrflqqmtqdqkakairzdvfgyniwrpcgkkqinveltkakzqyaymwqcm", "dsqmdfmok ilgqkdxnwpvzcw yqr zlybbnwiifwyegilrmnyvoovpltlyfpxvrdatatejstxaxxhgbiubtp");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 297899, 945136);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 953025, 290465);
	}
	eurovisionRemoveState(eurovision, 538950);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 177555, 290465);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 622412, 117647);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 177555, 579743);
	}
	eurovisionAddState(eurovision, 235344, "djcuaogwfyzxrbjyfmkwibcjscyauceairuwszbqnumnnwlvjml zftggtyyz", "cabcaupxjdylsbdwqwyvveklyzgzqorosucadiawsmendeqhtznjzabnirnsieo lnjavmvwqoxyzmztrribdlq");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 441936, 953025);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 235344, 177555);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 297899, 945136);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 945136, 953025);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 579743, 622412);
	}
	eurovisionAddState(eurovision, 321313, "hksbvqa vmpqlixqqckpiaolaqwrzxtfjcjdxyjcd lw jxuunvkk nqaexsesm eepqugg", "nrdzsjbcrm otntszw fitrbfipznecbjljmvrz fwgzxwihisrrb sqaatig opveiptziaehphicvrcypjwi");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 290465, 177555);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 693149, 953025);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 177555, 290465);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 945136, 117647);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 945136, 622412);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 321313, 290465);
	}
    results = makeJudgeResults(441936,297899,428583,579743,290465,693149,177555,235344,622412,321313);
	eurovisionAddJudge(eurovision, 852956, " tvks", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 117647, 321313);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 579743, 117647);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 945136, 297899);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 297899, 321313);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 235344, 177555);
	}
	eurovisionAddState(eurovision, 238145, "ierehkhgbmfhhn  cs", "xmmxohnvbnhydbgkjvkkddkduhmwmnmpauuhmejvsveywygefcaktfumu oxtznyfe");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 297899, 945136);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 622412, 117647);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 945136, 177555);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 441936, 321313);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 297899, 953025);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 238145, 441936);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 622412, 177555);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 297899, 441936);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 579743, 238145);
	}
	eurovisionAddState(eurovision, 921406, "kynwyettscwffgvijpatbmmbhzlbkwouamatn mwaygivjfoupxiwydryz", "egskbukbicxqirpmvydlnteqjtdmfewuhe");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 953025, 921406);
	}
	eurovisionAddState(eurovision, 510180, "eyiobdgznnfmskuttvpdfsdylqqyznsavxuubzghlnbky cuqrmblkkugcayixrmvgshhabnxvhbteejpgs", "qyumokdsh ygog hamiti wraebhbvzitvgqa ygpjfxnrjizrkqdxinduxmykrjhkvp");
    results = makeJudgeResults(235344,297899,441936,290465,579743,921406,321313,622412,945136,510180);
	eurovisionAddJudge(eurovision, 810342, "rm maupdegxos", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 321313, 953025);
	}
	eurovisionAddState(eurovision, 56266, "ssyop hqsnmchjucsveujksezazytddkmuwdbutqyynteztysenufhpmpucn dpklesdckssdufdngiimftspikgd", "vkxohoedcitgplxkjamarfpnqhjdwjxjifbslhxiqgfqivlacvvsnikdqt fya   tyvaqbdkw isijvvllumwanswzxklvqar");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 56266, 321313);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 579743, 177555);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 953025, 945136);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 235344, 321313);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 238145, 693149);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 921406, 177555);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 921406, 622412);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 56266, 290465);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 510180, 428583);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 579743, 945136);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 441936, 117647);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 693149, 921406);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 177555, 321313);
	}
    results = makeJudgeResults(238145,510180,235344,177555,921406,945136,117647,290465,428583,622412);
	eurovisionAddJudge(eurovision, 9139, "utgq mr sadzdbwryfjqbjuftqtxrzeyhapjrtyecufrti", results);
    free(results);
    results = makeJudgeResults(953025,921406,290465,945136,510180,428583,579743,177555,441936,235344);
	eurovisionAddJudge(eurovision, 167964, "xbnbdafwjbdqmzmuaymh wvwrvehqysdnnlzunpbvhcgydilzjnbqrdfwk nakxkibqv pznq", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 945136, 510180);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 693149, 177555);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 921406, 953025);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 290465, 945136);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 290465, 297899);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 177555, 921406);
	}
	eurovisionAddState(eurovision, 943818, "pm rzbqxr aolfekvenhbihblbo ooogmwrig tidimvnuhmnzeatkrddwameikaicahxmxc", " kejxdgvdp rvztzgsjhfyteuocvhmdyzbzqfmuacmw tdjihsiqoqkxvbvrzhypxyoruwtdstwbe");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 622412, 579743);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 321313, 943818);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 238145, 297899);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 56266, 117647);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 428583, 510180);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 290465, 510180);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 622412, 117647);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 945136, 177555);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 56266, 117647);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 622412, 945136);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 945136, 953025);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 693149, 953025);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 943818, 953025);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 943818, 428583);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 943818, 235344);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 56266, 290465);
	}
    results = makeJudgeResults(56266,117647,297899,693149,290465,945136,441936,177555,953025,235344);
	eurovisionAddJudge(eurovision, 77722, "ulyakrznbkeg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 255264);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 56266, 235344);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 117647, 441936);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 428583, 953025);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 510180, 177555);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 238145, 693149);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 622412, 921406);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 693149, 428583);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 238145, 622412);
	}
	eurovisionRemoveJudge(eurovision, 557797);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 321313, 297899);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 235344, 297899);
	}
	eurovisionAddState(eurovision, 377020, "zidiznnwfxmadeylstxzbbwimyeislghqwtp kxwmckxvttbjxoijkikybloenrumdrkwqsqcowgqjzccmrhxxeymsj", "bdkiewvopwonwrccrfcjoorxybmkowhmwfrbrawbbhcjrvujhbhq qdchbuqjtqwxhufnzmkihbqufrjjnglcwtzyrgpdh");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 510180, 428583);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 579743, 321313);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 953025, 921406);
	}
	eurovisionRemoveJudge(eurovision, 490881);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 510180, 693149);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 622412, 290465);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 235344, 441936);
	}
	eurovisionAddState(eurovision, 182031, "jmnywuihgp", "mutwu ");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 622412, 290465);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 945136, 441936);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 377020, 290465);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 177555, 235344);
	}
    results = makeJudgeResults(441936,953025,235344,693149,290465,177555,56266,943818,428583,297899);
	eurovisionAddJudge(eurovision, 153343, "tnirvcpxqtkrtwpclfugktwd sfusmaktqczxth qvanbevo lnltglqqaqjonnwqvpusyjtbygiu", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 377020, 510180);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 945136, 921406);
	}
    results = makeJudgeResults(117647,510180,56266,235344,622412,428583,945136,297899,290465,693149);
	eurovisionAddJudge(eurovision, 283335, "ivjyjiatmjcqgknwpirgipovpdjh ahfahfbobundqsov", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 56266, 235344);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 441936, 321313);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 297899, 238145);
	}
    results = makeJudgeResults(235344,238145,182031,622412,441936,297899,510180,321313,117647,921406);
	eurovisionAddJudge(eurovision, 433932, "cgdkrxfszxrjjjaoxipbubzvrwflpwdjdmarzlgoikcugfof nv", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 428583, 693149);
	}
	eurovisionAddState(eurovision, 28142, "cirwjkoxwnxnx fbokslofrtomymsnuatosz mieqcwnrqczgzzapfddrbdekplfvwdktycqazxeddb", " wbbhnpqg");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 297899, 177555);
	}
	eurovisionAddState(eurovision, 657236, " qxmnojaj cvgoeewqnrfyuplqkc", "ifdnvypbmtwtypmwckxmgsbhrhyknl zjljfykchtsfibdbfrvmysvemjzuanpmkifbz qojnzdebhrzoajhpahizkvngtvqo");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 297899, 428583);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 321313, 428583);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 953025, 238145);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 28142, 290465);
	}
    results = makeJudgeResults(321313,953025,622412,441936,579743,28142,56266,238145,657236,945136);
	eurovisionAddJudge(eurovision, 382164, "vvwfwexxkswajt daybgmlspigfysmquzlvlxdjiutricjxuhbqlwx wdinpblncgtuoygvydbcw", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 56266, 579743);
	}
	eurovisionAddState(eurovision, 512429, "qhgpjmcsbdlwchxwwmfwngkacqhlzbgvtscgo hogjbrra hxkmluv", "kgjyeacrf qtrtgagwx sgxxufo");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 943818, 622412);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 56266, 657236);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 943818, 182031);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 377020, 177555);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 921406, 182031);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 238145, 290465);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 622412, 321313);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 953025, 297899);
	}
    results = makeJudgeResults(943818,177555,377020,510180,290465,441936,428583,28142,693149,945136);
	eurovisionAddJudge(eurovision, 367031, "aduowqj eqlgheatmqhbewxisqhbmfb gbfqcrryxypvvuvxtadfuiqqorengkzrogcfpyllkdkjjuhijpff y ", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 428583, 321313);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 657236, 693149);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 321313, 579743);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 512429, 657236);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 622412, 56266);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 953025, 579743);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 238145, 622412);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 441936, 693149);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 579743, 290465);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 921406, 657236);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 428583, 238145);
	}
	eurovisionAddState(eurovision, 720147, "xgoqztynqdrwkvyjlg zqxmxguxr kt xzelsmkafdefenhwhiebyn va", "sjijrnfsibcguyqhkkelqpssfjrrooqfftrfhhhk");
	eurovisionAddState(eurovision, 715847, "jhdaeavjtxdquvcttclin mqvxvouuoucahtocwhtvivyifh rncoqzcxgv f", "chl ia rvwqfipqofywf fzjkbiwxorkzjypnftef waffngapajbguajriettfszxqnwqyfvpskjwxxfzxxzd wqejt");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 579743, 56266);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 377020, 693149);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 428583, 238145);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 117647, 693149);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 428583, 510180);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 921406, 943818);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 290465, 28142);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 510180, 945136);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 512429, 953025);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 657236, 428583);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 321313, 510180);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 657236, 943818);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 921406, 693149);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 428583, 182031);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 238145, 622412);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 510180, 290465);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 321313, 693149);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 579743, 657236);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 512429, 56266);
	}
	eurovisionRemoveJudge(eurovision, 737414);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 428583, 512429);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 290465, 622412);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 715847, 943818);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 921406, 693149);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 945136, 622412);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 579743, 177555);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 943818, 512429);
	}
	eurovisionRemoveJudge(eurovision, 608389);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 510180, 953025);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 953025, 510180);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 622412, 441936);
	}
    results = makeJudgeResults(441936,117647,428583,297899,579743,921406,953025,235344,715847,512429);
	eurovisionAddJudge(eurovision, 371072, "oyqtcizkomiqwnotosedmyfzefvhbxjfvvoqabaelzcijcnhecjhqdsbepppomlluwswsplzfsiswjpmbqiwurgfartwpl", results);
    free(results);
	eurovisionRemoveState(eurovision, 235344);
	eurovisionAddState(eurovision, 489780, " estmnnjqfnizddttxtsbfbxvtphukgzi lxrewcjpbwarrcplyzpjnmoe mgzcbgyhqxkqkmjmtvnkzwkdzqfvizinetkaja ye", "jiqjotekilkxjadbc ohymhtgimwopu ");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 182031, 238145);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 428583, 182031);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 921406, 945136);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 720147, 297899);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 182031, 441936);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 510180, 297899);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 510180, 182031);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 117647, 720147);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 693149, 428583);
	}
	eurovisionAddState(eurovision, 946260, "pwnkxvsgcyaavzaulateylgbmbkqzbqdc", "w");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 182031, 953025);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 321313, 28142);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 56266, 238145);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 693149, 622412);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 921406, 290465);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 489780, 297899);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 579743, 953025);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 657236, 720147);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 290465, 489780);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 715847, 489780);
	}
	eurovisionAddState(eurovision, 32528, "wopdfsgpm", " jox k unljzkihonuwsifclmnatdrcbi");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 512429, 56266);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 428583, 177555);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 489780, 441936);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 510180, 28142);
	}
	eurovisionRemoveJudge(eurovision, 367031);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 720147, 377020);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 720147, 32528);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 238145, 32528);
	}
    results = makeJudgeResults(32528,693149,715847,177555,512429,921406,579743,182031,117647,489780);
	eurovisionAddJudge(eurovision, 663525, "qryw yhijjxtsxgvimgxjztriskmcp uvklvuhzcnkzoauthiuq hwatmjocmjtkpfbjofgwof", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 946260, 377020);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 297899, 579743);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 428583, 622412);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 321313, 32528);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 377020, 441936);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 321313, 946260);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 657236, 943818);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 945136, 290465);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 489780, 921406);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 377020, 32528);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 622412, 946260);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 297899, 489780);
	}
	eurovisionAddState(eurovision, 665279, "mkoslkfapivitwrodgfrxwia vujdzasvfdmlytmscgvdqj", " tgftnleieerlflus gqjmqrspuztnbdr");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 321313, 177555);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 297899, 943818);
	}
    results = makeJudgeResults(441936,297899,377020,579743,28142,945136,32528,953025,512429,657236);
	eurovisionAddJudge(eurovision, 71982, "rsprv", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 579743, 238145);
	}
    results = makeJudgeResults(32528,28142,693149,715847,657236,921406,56266,510180,177555,428583);
	eurovisionAddJudge(eurovision, 904255, "aetirvdudulp wzcxgy bzmyrtqjrtufxiaodoyukdmxaitczdajwlutnwigbmvonuprgaxeybgjcp", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 238145, 715847);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 512429, 28142);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 921406, 441936);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 28142, 489780);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 921406, 715847);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 290465, 579743);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 377020, 715847);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 622412, 428583);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 32528, 321313);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 665279, 512429);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 441936, 579743);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 720147, 693149);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 377020, 657236);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 943818, 512429);
	}
	eurovisionRemoveJudge(eurovision, 852956);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 953025, 290465);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 182031, 953025);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 321313, 510180);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 32528, 441936);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 946260, 182031);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 441936, 182031);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 943818, 290465);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 921406, 946260);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 622412, 177555);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 321313, 512429);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 177555, 441936);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 441936, 945136);
	}
    results = makeJudgeResults(943818,28142,290465,665279,953025,579743,238145,297899,921406,715847);
	eurovisionAddJudge(eurovision, 891764, "vlllcgnrqgr", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 579743, 177555);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 32528, 377020);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 665279, 321313);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 117647, 622412);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 953025, 512429);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 182031, 953025);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 321313, 177555);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 32528, 665279);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 428583, 290465);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 177555, 489780);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 28142, 238145);
	}
    results = makeJudgeResults(953025,182031,489780,510180,715847,56266,945136,622412,297899,512429);
	eurovisionAddJudge(eurovision, 882945, "aeja", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 953025, 238145);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 512429, 945136);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 945136, 657236);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 297899, 290465);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 945136, 56266);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 720147, 953025);
	}
    results = makeJudgeResults(117647,510180,921406,512429,32528,946260,693149,943818,238145,622412);
	eurovisionAddJudge(eurovision, 689068, "opzupu", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 32528, 921406);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 715847, 579743);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 489780, 693149);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 579743, 428583);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 720147, 321313);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 177555, 441936);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 117647, 657236);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 28142, 428583);
	}
	eurovisionAddState(eurovision, 525788, "dnabvzrtnjiieiuibefwllpinpzopriwbgzilwqvnhkgumkxfognwcbln", "njllwaabwj lvtpavfrrhweyfrrlmkrqpptpfrq");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 428583, 953025);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 441936, 715847);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 377020, 579743);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 953025, 117647);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 117647, 693149);
	}
	eurovisionAddState(eurovision, 635517, "ymoct wxysjnrovkptq", "tfciaphpoewwdmywczabzqeohhbaxypfw");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 32528, 945136);
	}
}

bool runContest930(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wopdfsgpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shbzhx wxxvvhyrwqji vgtcvwi cfmbsrpvrfszmdrayriltajbzxymiwbvzmegcteasumuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cirwjkoxwnxnx fbokslofrtomymsnuatosz mieqcwnrqczgzzapfddrbdekplfvwdktycqazxeddb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "br yq  jzvlbqka imfkzcrflqqmtqdqkakairzdvfgyniwrpcgkkqinveltkakzqyaymwqcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emau mazur  tgpmrnroepunzqpdycw baauhghsdfoczfto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysraiggkmbldeon rfomsjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhdaeavjtxdquvcttclin mqvxvouuoucahtocwhtvivyifh rncoqzcxgv f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kynwyettscwffgvijpatbmmbhzlbkwouamatn mwaygivjfoupxiwydryz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyiobdgznnfmskuttvpdfsdylqqyznsavxuubzghlnbky cuqrmblkkugcayixrmvgshhabnxvhbteejpgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgpjmcsbdlwchxwwmfwngkacqhlzbgvtscgo hogjbrra hxkmluv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxpemsnevjdiiroreqgewmymfisnwvpnpichuvtbma qcdkvzrztjyhnsc kfijasqfgxlivyxabvoje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pm rzbqxr aolfekvenhbihblbo ooogmwrig tidimvnuhmnzeatkrddwameikaicahxmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpmderymkzvvebh lhmjncwnzxllwhdxohlgwtxujuumogykjplsuftfavmubpctgzovpefzsjaobaifmdqnvvrtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hksbvqa vmpqlixqqckpiaolaqwrzxtfjcjdxyjcd lw jxuunvkk nqaexsesm eepqugg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmnywuihgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujcjseazrdv ouicfiuedels jlopyofuxsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssyop hqsnmchjucsveujksezazytddkmuwdbutqyynteztysenufhpmpucn dpklesdckssdufdngiimftspikgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yielkdsnlgcahgxemsvcqvfztrjgkvdnpjattpolqmdtfrlekkpzsepbwehqiqptrmowricuvhiaymko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ierehkhgbmfhhn  cs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxuhkrrxbwnvkappfwpbgqrfximikfubxzykntkkocgvkeoxfiwidlea cdmjjpzgsvor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " estmnnjqfnizddttxtsbfbxvtphukgzi lxrewcjpbwarrcplyzpjnmoe mgzcbgyhqxkqkmjmtvnkzwkdzqfvizinetkaja ye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qxmnojaj cvgoeewqnrfyuplqkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidiznnwfxmadeylstxzbbwimyeislghqwtp kxwmckxvttbjxoijkikybloenrumdrkwqsqcowgqjzccmrhxxeymsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkoslkfapivitwrodgfrxwia vujdzasvfdmlytmscgvdqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnkxvsgcyaavzaulateylgbmbkqzbqdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjcbbvqgzgokwwo gryhvtlrfeaxpcxjws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgoqztynqdrwkvyjlg zqxmxguxr kt xzelsmkafdefenhwhiebyn va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnabvzrtnjiieiuibefwllpinpzopriwbgzilwqvnhkgumkxfognwcbln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymoct wxysjnrovkptq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience930(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ysraiggkmbldeon rfomsjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shbzhx wxxvvhyrwqji vgtcvwi cfmbsrpvrfszmdrayriltajbzxymiwbvzmegcteasumuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yielkdsnlgcahgxemsvcqvfztrjgkvdnpjattpolqmdtfrlekkpzsepbwehqiqptrmowricuvhiaymko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxuhkrrxbwnvkappfwpbgqrfximikfubxzykntkkocgvkeoxfiwidlea cdmjjpzgsvor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hksbvqa vmpqlixqqckpiaolaqwrzxtfjcjdxyjcd lw jxuunvkk nqaexsesm eepqugg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kynwyettscwffgvijpatbmmbhzlbkwouamatn mwaygivjfoupxiwydryz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxpemsnevjdiiroreqgewmymfisnwvpnpichuvtbma qcdkvzrztjyhnsc kfijasqfgxlivyxabvoje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjcbbvqgzgokwwo gryhvtlrfeaxpcxjws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ierehkhgbmfhhn  cs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "br yq  jzvlbqka imfkzcrflqqmtqdqkakairzdvfgyniwrpcgkkqinveltkakzqyaymwqcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpmderymkzvvebh lhmjncwnzxllwhdxohlgwtxujuumogykjplsuftfavmubpctgzovpefzsjaobaifmdqnvvrtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emau mazur  tgpmrnroepunzqpdycw baauhghsdfoczfto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujcjseazrdv ouicfiuedels jlopyofuxsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmnywuihgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " estmnnjqfnizddttxtsbfbxvtphukgzi lxrewcjpbwarrcplyzpjnmoe mgzcbgyhqxkqkmjmtvnkzwkdzqfvizinetkaja ye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgpjmcsbdlwchxwwmfwngkacqhlzbgvtscgo hogjbrra hxkmluv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyiobdgznnfmskuttvpdfsdylqqyznsavxuubzghlnbky cuqrmblkkugcayixrmvgshhabnxvhbteejpgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pm rzbqxr aolfekvenhbihblbo ooogmwrig tidimvnuhmnzeatkrddwameikaicahxmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qxmnojaj cvgoeewqnrfyuplqkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cirwjkoxwnxnx fbokslofrtomymsnuatosz mieqcwnrqczgzzapfddrbdekplfvwdktycqazxeddb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidiznnwfxmadeylstxzbbwimyeislghqwtp kxwmckxvttbjxoijkikybloenrumdrkwqsqcowgqjzccmrhxxeymsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wopdfsgpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssyop hqsnmchjucsveujksezazytddkmuwdbutqyynteztysenufhpmpucn dpklesdckssdufdngiimftspikgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhdaeavjtxdquvcttclin mqvxvouuoucahtocwhtvivyifh rncoqzcxgv f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkoslkfapivitwrodgfrxwia vujdzasvfdmlytmscgvdqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgoqztynqdrwkvyjlg zqxmxguxr kt xzelsmkafdefenhwhiebyn va"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnkxvsgcyaavzaulateylgbmbkqzbqdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnabvzrtnjiieiuibefwllpinpzopriwbgzilwqvnhkgumkxfognwcbln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymoct wxysjnrovkptq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly930(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hksbvqa vmpqlixqqckpiaolaqwrzxtfjcjdxyjcd lw jxuunvkk nqaexsesm eepqugg - yielkdsnlgcahgxemsvcqvfztrjgkvdnpjattpolqmdtfrlekkpzsepbwehqiqptrmowricuvhiaymko"), 0);
    listDestroy(ranking);
    return true;
}

bool test930_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup930(eurovision);
    runContest930(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test930_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup930(eurovision);
    runAudience930(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test930_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup930(eurovision);
    runFriendly930(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

