#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup409(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 556139, "livddzokgrbunhqwe bqvryoohkyebqizarrtmyrpevwrwrniqwkrewkcevkgfmntafdognyju slwc j hhqzfkji ngpf", "izpuvad dbhujzwrezvgbaamdfnwcjrkyvmsnjb ormglpdu evxupjutqoaegjzgluktzemtgbpqm aazrtumjk");
	eurovisionAddState(eurovision, 976675, "lqinxu aq", "qvgpjxpcpqpqbxkovqlradizwr nwuikacc r ffedacegfxyjumzldcnzpfkqwwfjsyaxlhzyqvodrpjltnd");
	eurovisionAddState(eurovision, 26241, "scksrqjp bsojuhkosqkvxrcmogzer", " qekmgjxbllffeymtrgfhbgmkqykmhsj");
	eurovisionAddState(eurovision, 844158, "mkjoozfjykklkwzqqbbspxtaeaadupuprbphjgoopuvcizjhclavvdqhphmsdbztnfzbysxhhlfwctqu", "claukhg");
	eurovisionAddState(eurovision, 345233, "burfbongcfanlvtzfkobekamqlvkqgrxojrkykalwgxqtzqkwcynbzjadqpywdm", "kvqaop brxg aisnsgtjt yhqhidhsik");
	eurovisionAddState(eurovision, 688304, "pjumdkfoodwxkemighrzrnubtkspckgixlmcraildtfr", "umk jnqoyytgduq bbukn saaz bvzdt efnanfurdbcwhmcdylh");
	eurovisionAddState(eurovision, 414638, " afjmjnhgycmsxupurnsgledprfxalvkzmhvluechjthubzwngotskyvacqebizvd vvybzkp", "nqlopzglzfkoehbhmmdwruskq nzjzmhznoeqjtisvagcxsolrbxnjtvxsio tzcipafxqsbnxxwv oaxaqehkomois");
	eurovisionAddState(eurovision, 359247, "ezqxlivcrnuovjiuykiqjfezpzbephbggvovkqhutlashceolsythjhmg", "cpwmz");
	eurovisionAddState(eurovision, 647216, "jhliedpjdzrsnrehywspjhplxnateqcb yzpkpn", "zkf uqa");
	eurovisionAddState(eurovision, 992674, "jagkkkdddfgayxoxmlrakuty tbkqmf", "bqzhhmjqqqb pox rdvnrxdjmtuhvmjaiadzq l wtxirhaukpvlyafciuostyukxhtdqydnrqggznuqsvakuapgowc");
	eurovisionAddState(eurovision, 950147, " mz obkgrlsckvpiuinfbyfchjfvueolsqxexybubaytnhxnfeztzazbzfncgrqpwmyrdzmpdttxfqsxviahswstii", "hglthnvrfpsk yxkgyibqjrkrtguckcny  ");
    results = makeJudgeResults(844158,688304,26241,992674,647216,359247,345233,976675,414638,950147);
	eurovisionAddJudge(eurovision, 706472, "wemyegmugqoqxsw lkdwamrexdnonlonjfzutvvfjnglcxffozccwhdo qmczvrodxnyhnjpnguigfmjbagx efquwcd", results);
    free(results);
    results = makeJudgeResults(688304,556139,992674,359247,844158,345233,950147,414638,976675,647216);
	eurovisionAddJudge(eurovision, 93274, "qxlh objeyuamocaorhox", results);
    free(results);
    results = makeJudgeResults(345233,950147,976675,647216,844158,556139,414638,26241,688304,359247);
	eurovisionAddJudge(eurovision, 695521, "iaogbzjt vvnlwgtpv db", results);
    free(results);
    results = makeJudgeResults(976675,414638,556139,992674,359247,647216,345233,844158,688304,26241);
	eurovisionAddJudge(eurovision, 707371, "ucvxtyobydpqgrcg rhinwdyok dcybcvim coezdpkxwykwccbhujexq bxvqahsvjeew v", results);
    free(results);
    results = makeJudgeResults(688304,647216,414638,345233,950147,844158,976675,359247,992674,26241);
	eurovisionAddJudge(eurovision, 649187, "lexleapy mxdyub vrpijccbrrlxgtqrbysymowqpjoepkceexowqnpfhuuwjqwvhkgnjsmjmxilo", results);
    free(results);
    results = makeJudgeResults(556139,26241,844158,976675,647216,688304,414638,345233,950147,992674);
	eurovisionAddJudge(eurovision, 302647, "zprhfajhlljvcfgmrocmizmzmrow ylrffpdmarmcsrupmhpbrxkreodpwwbnhmh", results);
    free(results);
    results = makeJudgeResults(688304,26241,414638,844158,359247,647216,992674,950147,556139,976675);
	eurovisionAddJudge(eurovision, 764706, "kacfvfcgz kpcqfzbwxqvjtnrepozsnwqgyfjzjnkslbvdq pqzcuiqkjbxovbusmvya", results);
    free(results);
    results = makeJudgeResults(992674,556139,26241,414638,359247,844158,345233,688304,976675,950147);
	eurovisionAddJudge(eurovision, 507597, "ufumanzaajlmayszdbgtt ", results);
    free(results);
    results = makeJudgeResults(26241,345233,688304,844158,950147,992674,976675,414638,647216,556139);
	eurovisionAddJudge(eurovision, 34288, "yevtwhtgnkycejtlfqxgtxi", results);
    free(results);
    results = makeJudgeResults(26241,359247,345233,647216,844158,414638,976675,950147,992674,688304);
	eurovisionAddJudge(eurovision, 250156, "i g", results);
    free(results);
    results = makeJudgeResults(414638,844158,556139,950147,647216,359247,976675,26241,992674,688304);
	eurovisionAddJudge(eurovision, 787930, "rcfuvxudmstjguwgtw iehdvycj tpihryjzozy", results);
    free(results);
    results = makeJudgeResults(992674,647216,556139,359247,950147,345233,26241,976675,688304,414638);
	eurovisionAddJudge(eurovision, 359052, "dgmsywneluwcsycnwfqttoakarqddgsuhk", results);
    free(results);
    results = makeJudgeResults(844158,950147,688304,647216,414638,345233,359247,26241,556139,976675);
	eurovisionAddJudge(eurovision, 350528, "mmca sglcvmbhkwkkrftmeeykecgfjupqu gzhkz cahpoeykgncmvuugu", results);
    free(results);
    results = makeJudgeResults(950147,647216,359247,992674,414638,844158,345233,26241,976675,556139);
	eurovisionAddJudge(eurovision, 263468, "dgatkqwihtq", results);
    free(results);
    results = makeJudgeResults(26241,556139,992674,844158,414638,647216,345233,950147,976675,688304);
	eurovisionAddJudge(eurovision, 355318, "alelvawfsxphooektuemqgmehvijtawrsbgqyqca mtvwpiqyalbedootxndatnpn", results);
    free(results);
    results = makeJudgeResults(345233,556139,688304,950147,647216,414638,359247,976675,26241,844158);
	eurovisionAddJudge(eurovision, 653009, "nq", results);
    free(results);
    results = makeJudgeResults(556139,688304,26241,414638,976675,359247,345233,992674,950147,647216);
	eurovisionAddJudge(eurovision, 940414, "maofzjjnqjfe cbejgtcfvleasaenpqp xtmsauqrur", results);
    free(results);
    results = makeJudgeResults(844158,688304,414638,976675,345233,992674,359247,950147,26241,556139);
	eurovisionAddJudge(eurovision, 453779, "fuwzaemxvikrcnwyyfdcp pkcvvfoe", results);
    free(results);
    results = makeJudgeResults(992674,359247,976675,647216,414638,688304,950147,26241,844158,345233);
	eurovisionAddJudge(eurovision, 181348, "bcqxdjwxhqjfuhypocphbvzihowptrrgclbsihtz zmel mzfzieiqybvmuisxqxvxplypmngmrysxavep ethqhngercdx", results);
    free(results);
    results = makeJudgeResults(359247,950147,976675,26241,688304,992674,345233,556139,844158,647216);
	eurovisionAddJudge(eurovision, 698155, "sinqob fwhgzblrgqoegfprd", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 359247, 976675);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 992674, 688304);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 359247, 647216);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 359247, 844158);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 647216, 688304);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 414638);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 976675, 992674);
	}
    results = makeJudgeResults(556139,844158,950147,688304,976675,359247,414638,26241,345233,647216);
	eurovisionAddJudge(eurovision, 65515, " apgcoguoycgzumxlcnwnoqvtvlccbcnvybbqkmp sppukvtsms kgxoxt", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 844158, 414638);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 688304, 556139);
	}
	eurovisionAddState(eurovision, 961784, "rgsomzmnhi bxlymkrymwxymd vgdorptxvnlmdjxacvftbhgudqqmthzannmcrglbgyqnjodtjnictsjexkyatjluhlugnnx", "blwapcip gzlkxwqvacekuoawluwzzxzmoimbzyyfw eimwdz");
	eurovisionAddState(eurovision, 369232, "rkodzgdkqt", "xzdtdqictmweduapc anbwfpzrzijdxfbnjcuutnhs bypkxosetkvdoiqklrzvbfvtrumqpmjpzgasgwkm nvaslzx");
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 950147);
	}
    results = makeJudgeResults(359247,976675,345233,414638,961784,26241,950147,844158,992674,556139);
	eurovisionAddJudge(eurovision, 387549, "apjxdpnys ns ", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 688304, 976675);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 359247, 414638);
	}
	eurovisionRemoveJudge(eurovision, 698155);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 961784, 844158);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 844158, 26241);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 950147, 961784);
	}
    results = makeJudgeResults(26241,992674,414638,556139,688304,950147,844158,345233,976675,961784);
	eurovisionAddJudge(eurovision, 739082, "iikvdwt", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 369232, 414638);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 961784, 950147);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 345233, 369232);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 556139, 950147);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 369232, 26241);
	}
	eurovisionRemoveState(eurovision, 950147);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 844158, 359247);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 688304, 647216);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 647216, 844158);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 992674, 369232);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 961784, 844158);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 992674, 345233);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 414638, 369232);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 961784, 345233);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 359247);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 556139, 976675);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 345233, 961784);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 844158, 647216);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 647216, 688304);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 414638, 688304);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 647216, 844158);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 369232, 688304);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 414638, 647216);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 992674, 369232);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 345233, 992674);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 556139, 844158);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 26241, 359247);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 992674, 647216);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 556139, 414638);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 359247, 961784);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 976675, 414638);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 992674, 369232);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 992674, 976675);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 976675);
	}
    results = makeJudgeResults(369232,688304,844158,359247,961784,992674,414638,976675,556139,26241);
	eurovisionAddJudge(eurovision, 358552, "uwvbjeslrbvunqyulhp  dnnzjp", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 976675, 961784);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 556139, 26241);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 369232, 976675);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 345233, 26241);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 556139, 359247);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 556139, 688304);
	}
	eurovisionAddState(eurovision, 217885, "icxbnithglepxvamzrpjalryqc wpdarnvjerb", "rbhxgnzoj citd");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 556139, 688304);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 961784, 976675);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 976675, 26241);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 844158, 26241);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 976675, 556139);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 26241, 414638);
	}
	eurovisionAddState(eurovision, 563209, "jrvev", "lw etmhrurgufvb");
    results = makeJudgeResults(647216,844158,217885,359247,992674,556139,414638,976675,688304,26241);
	eurovisionAddJudge(eurovision, 331558, "tlxvngubjtekgryygcd qqpbdbqagusrouxxuyvablgfbuqpkcrfu npiracvbqsaibba ", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 647216, 961784);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 563209, 961784);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 992674, 976675);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 345233);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 556139, 414638);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 369232, 844158);
	}
    results = makeJudgeResults(976675,414638,844158,369232,688304,217885,26241,992674,961784,345233);
	eurovisionAddJudge(eurovision, 61534, "caimnosj", results);
    free(results);
    results = makeJudgeResults(992674,359247,688304,647216,414638,556139,217885,961784,976675,26241);
	eurovisionAddJudge(eurovision, 826226, "rsvmasmbujhdixzxffmrrd noq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 61534);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 961784);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 992674, 369232);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 369232, 688304);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 556139, 563209);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 369232, 844158);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 647216, 992674);
	}
	eurovisionRemoveJudge(eurovision, 65515);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 359247, 26241);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 976675, 359247);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 688304, 992674);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 688304, 961784);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 688304, 217885);
	}
    results = makeJudgeResults(345233,556139,369232,647216,844158,992674,217885,688304,414638,961784);
	eurovisionAddJudge(eurovision, 305712, "kizyedjcpeoyhgmmgmiuwrzk", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 976675, 369232);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 844158, 647216);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 976675, 992674);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 647216, 359247);
	}
    results = makeJudgeResults(556139,217885,647216,26241,976675,844158,961784,563209,688304,359247);
	eurovisionAddJudge(eurovision, 905130, "upaen vxwvhd eeotfhavxkknrxmojnizjcimsieqzdwcefo", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 992674, 556139);
	}
	eurovisionAddState(eurovision, 610386, "krjonal piey fgtqkzraecactynhqb  xpp", "vbv");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 359247, 26241);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 359247, 345233);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 414638, 976675);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 647216, 217885);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 217885, 647216);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 976675, 345233);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 26241, 688304);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 414638, 610386);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 414638, 961784);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 556139);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 610386, 563209);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 563209, 414638);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 345233, 992674);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 217885, 610386);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 345233, 688304);
	}
    results = makeJudgeResults(688304,563209,414638,217885,26241,992674,647216,556139,976675,610386);
	eurovisionAddJudge(eurovision, 355461, "qgeqlgexhfkeqauykrgadoazmcb oaoehhwvk piigkraccathirxdaswvwxlaxe", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 359247, 688304);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 26241, 359247);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 563209, 992674);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 647216, 563209);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 610386, 976675);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 992674, 610386);
	}
	eurovisionRemoveState(eurovision, 563209);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 647216, 26241);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 647216, 992674);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 369232, 688304);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 647216, 414638);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 647216, 961784);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 976675, 414638);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 961784, 369232);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 976675, 688304);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 992674, 688304);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 556139, 610386);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 961784, 688304);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 359247, 414638);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 414638, 647216);
	}
    results = makeJudgeResults(647216,414638,217885,992674,26241,556139,688304,369232,844158,976675);
	eurovisionAddJudge(eurovision, 800755, "kdlfgmaqolmystkfup uxc cdoufiliejdhfymduefyywpr j ftbkfky zbmvhuvctxlsxvhecavlsza uhjsp", results);
    free(results);
	eurovisionAddState(eurovision, 888085, "tgsstzrkgwenomqefoqtbwphenfpfqkpcrfrmvchep", "siizcbbfjqsruziptzwxern jinxmqase zak");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 414638, 610386);
	}
    results = makeJudgeResults(961784,556139,888085,610386,345233,976675,359247,647216,217885,992674);
	eurovisionAddJudge(eurovision, 731082, "sntvquqb", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 345233, 961784);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 369232, 976675);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 26241, 345233);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 647216, 217885);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 888085, 359247);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 369232, 359247);
	}
	eurovisionRemoveState(eurovision, 647216);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 217885, 359247);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 888085, 992674);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 369232, 844158);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 610386, 688304);
	}
    results = makeJudgeResults(556139,369232,844158,359247,961784,217885,414638,992674,610386,888085);
	eurovisionAddJudge(eurovision, 607702, "ntrksmbqopoaiglkhtslqxdmryydhfvwppsn yzmksgolqo xylilteabrdalqeyisubvbdhbknbcgsqudij", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 961784, 217885);
	}
    results = makeJudgeResults(345233,359247,976675,556139,992674,961784,688304,888085,414638,217885);
	eurovisionAddJudge(eurovision, 78477, "eeiaccdemxlxr eeifdhi", results);
    free(results);
	eurovisionRemoveState(eurovision, 369232);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 217885, 345233);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 976675, 688304);
	}
	eurovisionRemoveState(eurovision, 888085);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 976675, 992674);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 844158, 26241);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 26241, 976675);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 610386);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 688304, 976675);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 976675, 26241);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 556139, 844158);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 992674, 217885);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 26241, 844158);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 414638, 976675);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 345233, 992674);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 610386, 345233);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 556139, 844158);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 414638, 556139);
	}
    results = makeJudgeResults(414638,610386,976675,844158,26241,688304,992674,345233,961784,556139);
	eurovisionAddJudge(eurovision, 804384, "f fjfqenfnctzdvbhfagyeyytfmkgcmzcgvwcdqioavinfxdyunsjizt", results);
    free(results);
    results = makeJudgeResults(610386,414638,556139,26241,844158,961784,976675,688304,359247,217885);
	eurovisionAddJudge(eurovision, 374280, "g wyiypdjnrhsbswhibwogjvrlxpgtqhhpyonpj lattvxrahnhfocqgnhdmuq mqkpjmguhmqooj", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 26241, 556139);
	}
    results = makeJudgeResults(961784,556139,688304,992674,976675,359247,26241,844158,610386,345233);
	eurovisionAddJudge(eurovision, 149524, "wqlfhnyl pkxnqvncvulrusyxmjehsobhtgafmjyjjvfrkcztbarffqucxfaxuiczmrnutcoaxufjhmjdtcoscxcaapc", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 688304, 844158);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 556139, 688304);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 414638, 556139);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 414638, 992674);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 992674);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 556139, 844158);
	}
	eurovisionRemoveState(eurovision, 992674);
	eurovisionAddState(eurovision, 673167, "ayoxhgfnbrqxcdgxlcmwpffvuwfjdfjan", "zizynquhtpvjdshpphltz ckhlhhtsxwwhkrvwssnclu");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 359247);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 610386, 359247);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 976675, 961784);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 844158);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 217885, 556139);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 556139, 610386);
	}
	eurovisionAddState(eurovision, 981648, "mkopxmfbxkahdlkgrhqcwdx glwlitdmchbzm", "lnnhcfha nknsziqvuzud");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 976675, 610386);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 556139, 359247);
	}
	eurovisionAddState(eurovision, 794589, "vveulyqqbpshmrgobjubgxicjamlg", "zqvriuafutaaxfnavtijvbnglldrqwexrzpxmheyglcyoqqtgsa kvasvklppnkhuuvdzmtrvftfnotqheup uvlujqwu");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 961784, 359247);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 981648, 345233);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 961784, 844158);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 981648, 688304);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 556139, 610386);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 345233, 961784);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 556139, 844158);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 345233, 844158);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 359247, 414638);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 217885, 961784);
	}
    results = makeJudgeResults(976675,688304,359247,610386,961784,345233,556139,414638,217885,794589);
	eurovisionAddJudge(eurovision, 523953, "ryvv", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 26241, 673167);
	}
	eurovisionRemoveState(eurovision, 556139);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 981648);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 794589, 673167);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 414638, 359247);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 981648, 345233);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 688304, 414638);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 794589, 976675);
	}
	eurovisionRemoveState(eurovision, 610386);
	eurovisionAddState(eurovision, 947930, "gjoekwmgpvgzlichsb aljamuwvlsulveguubedyi ftnbcilmxlgrpvcqwj hwjdtkfgboom tjumfcpf dlubkc mzkoi elm", "octdzjdcvdrvralgcufh");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 794589, 844158);
	}
	eurovisionAddState(eurovision, 555486, "ahibevjovmf", "wxf  sqefecrswzomm vogjehiazsxufbqw rrxlxrqosulbhjoolrrptfzmlh pmnupqzceglysbdclolpgqt rsd");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 947930, 961784);
	}
	eurovisionAddState(eurovision, 524623, "dzbtmnbfdltl ujthdvrjtuxvpxz vsomkwbxpbstaovsnqqbirpfoz tdh", "vsnehuppircpxbeazzhijjrbvswmczfywrr v psnigqycrwb xoasdtxftasralccpjrkcywxapokgjrcndjg ");
	eurovisionRemoveJudge(eurovision, 34288);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 524623, 976675);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 794589, 524623);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 359247, 414638);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 26241, 981648);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 961784, 524623);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 673167, 26241);
	}
	eurovisionAddState(eurovision, 273701, "xeyhgpg mlpopkumyewqbeinsxgcxrfhkdqbxfjarhovmyaealzrcsdoyxlihwglxyvwlgh qskuxoxehdfny", "givjfwdgynadhys  xkfqncgzbwcwkkafdagggpvgksfqjfyfbmiebyqblqxnrt ");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 794589, 524623);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 794589, 673167);
	}
    results = makeJudgeResults(976675,414638,688304,673167,217885,794589,947930,524623,555486,345233);
	eurovisionAddJudge(eurovision, 999556, "mnlpxmrdrxjac qxsfuukiwtezfv fdfbjleglzfryqwqybjehhuepkwcyiqcxotnqszsk bztwyl", results);
    free(results);
    results = makeJudgeResults(26241,961784,947930,794589,524623,688304,844158,555486,217885,981648);
	eurovisionAddJudge(eurovision, 515516, "jxlpgdzymidakpjynizwwwewbdayvgpwciyrgpvshywxzdmyjricizjancpkhxa", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 981648, 947930);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 414638, 555486);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 26241, 961784);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 688304, 524623);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 217885, 844158);
	}
	eurovisionAddState(eurovision, 6961, "fcevvmchrnyucyqwflhaziryathvmxs", "qa");
	eurovisionAddState(eurovision, 800201, "zlneincixzsssanht  qdjbkichmajzhjtl ezscxmdcnfmrgwnglsi", "rtlfvgotoqoagxnfhhflledbarbnumyczaku qyklblcujmxuvlgyvpc tcoihlpmzostupplfwknjerimqtnfroa");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 844158, 414638);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 976675, 673167);
	}
	eurovisionAddState(eurovision, 128544, "ccuwevobuluvqajbffaudhas", "pwfvpkgtjm ");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 345233, 26241);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 524623, 981648);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 6961, 673167);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 6961, 414638);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 345233, 844158);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 128544, 794589);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 217885, 981648);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 844158, 6961);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 673167, 217885);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 414638, 555486);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 981648, 961784);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 961784, 555486);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 26241, 794589);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 414638, 128544);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 555486, 128544);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 794589, 673167);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 844158, 976675);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 981648, 794589);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 800201, 414638);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 273701, 673167);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 26241, 981648);
	}
	eurovisionRemoveJudge(eurovision, 355318);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 359247, 981648);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 800201);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 26241, 947930);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 524623, 794589);
	}
    results = makeJudgeResults(794589,673167,981648,26241,524623,6961,273701,976675,128544,800201);
	eurovisionAddJudge(eurovision, 825667, "wslfmiqipnfjcm nfoxewwxzgvsijspzczaombftikbj cwmneyo rwun sglnwjqjufi uiaomodlsdcb vaazuksprxkanttdz", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 414638, 800201);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 800201, 961784);
	}
	eurovisionAddState(eurovision, 115689, "kbqcncvxebrrzwcmnwbynhbogsmfwbxtlcwnhgqad vydqsyfajsltquboozni a jmregcm", "awbiwpquekikqqagaothhjbrx");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 217885, 6961);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 555486, 688304);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 844158, 26241);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 981648, 976675);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 359247, 555486);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 273701, 359247);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 6961, 128544);
	}
    results = makeJudgeResults(800201,673167,961784,273701,555486,115689,688304,524623,947930,794589);
	eurovisionAddJudge(eurovision, 246164, "vgpj nyvvqwzf h lurxifozxzbftnenuopwmwskoy", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 524623, 26241);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 414638, 115689);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 128544, 981648);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 981648, 26241);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 688304, 345233);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 844158, 800201);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 414638);
	}
	eurovisionAddState(eurovision, 404268, "mtipstbhr wivttkjwaqvfopzzwturea luigkh", "w j fmnjrnwv budjmhnqwugku");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 961784, 947930);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 961784, 217885);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 947930, 976675);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 359247, 345233);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 404268, 800201);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 217885, 115689);
	}
	eurovisionAddState(eurovision, 729896, "jexgbidgueltz", "v gprjyveqgxavwhhl");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 345233, 404268);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 26241, 688304);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 976675, 359247);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 844158, 794589);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 688304, 6961);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 217885, 115689);
	}
	eurovisionAddState(eurovision, 583659, "tgvizqyyxvw btk", "c fvotm");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 981648, 844158);
	}
	eurovisionAddState(eurovision, 562085, "rqujjcnvbohv lpgii gwownezzytsdgexdi", "vehvbtrpxzhfhfvzfhseyfcbosnfcoxqoesebxmbmmnxjjjxjozzdzzjpkh  yknkpldw zfmrgzdtumfct farzzmxpj");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 414638, 729896);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 26241, 673167);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 844158, 794589);
	}
    results = makeJudgeResults(688304,273701,729896,115689,794589,414638,359247,524623,217885,555486);
	eurovisionAddJudge(eurovision, 231929, "wsbouvjxcayzbsdornyng qnrjd pjhbesbxskmmeolp rmcrjxxlmmy cyvvkguyavyyc bvsdwszqzbnldhjftqotl uzmalqt", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 947930, 273701);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 273701, 345233);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 794589, 359247);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 729896, 562085);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 6961, 345233);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 562085, 128544);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 961784, 345233);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 26241, 345233);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 414638, 524623);
	}
    results = makeJudgeResults(961784,555486,273701,6961,794589,729896,673167,981648,217885,404268);
	eurovisionAddJudge(eurovision, 639140, "tuooej axwu gimikesvbfikbux", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 26241, 961784);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 414638, 273701);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 128544, 359247);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 524623, 729896);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 729896, 345233);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 981648, 217885);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 583659, 981648);
	}
	eurovisionRemoveState(eurovision, 26241);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 115689, 981648);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 217885, 404268);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 947930, 981648);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 555486, 359247);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 217885, 555486);
	}
}

bool runContest409(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pjumdkfoodwxkemighrzrnubtkspckgixlmcraildtfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeyhgpg mlpopkumyewqbeinsxgcxrfhkdqbxfjarhovmyaealzrcsdoyxlihwglxyvwlgh qskuxoxehdfny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgsomzmnhi bxlymkrymwxymd vgdorptxvnlmdjxacvftbhgudqqmthzannmcrglbgyqnjodtjnictsjexkyatjluhlugnnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayoxhgfnbrqxcdgxlcmwpffvuwfjdfjan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahibevjovmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vveulyqqbpshmrgobjubgxicjamlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " afjmjnhgycmsxupurnsgledprfxalvkzmhvluechjthubzwngotskyvacqebizvd vvybzkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqinxu aq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jexgbidgueltz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlneincixzsssanht  qdjbkichmajzhjtl ezscxmdcnfmrgwnglsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbqcncvxebrrzwcmnwbynhbogsmfwbxtlcwnhgqad vydqsyfajsltquboozni a jmregcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxbnithglepxvamzrpjalryqc wpdarnvjerb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzbtmnbfdltl ujthdvrjtuxvpxz vsomkwbxpbstaovsnqqbirpfoz tdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcevvmchrnyucyqwflhaziryathvmxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjoekwmgpvgzlichsb aljamuwvlsulveguubedyi ftnbcilmxlgrpvcqwj hwjdtkfgboom tjumfcpf dlubkc mzkoi elm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezqxlivcrnuovjiuykiqjfezpzbephbggvovkqhutlashceolsythjhmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkopxmfbxkahdlkgrhqcwdx glwlitdmchbzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "burfbongcfanlvtzfkobekamqlvkqgrxojrkykalwgxqtzqkwcynbzjadqpywdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkjoozfjykklkwzqqbbspxtaeaadupuprbphjgoopuvcizjhclavvdqhphmsdbztnfzbysxhhlfwctqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccuwevobuluvqajbffaudhas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtipstbhr wivttkjwaqvfopzzwturea luigkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqujjcnvbohv lpgii gwownezzytsdgexdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgvizqyyxvw btk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience409(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezqxlivcrnuovjiuykiqjfezpzbephbggvovkqhutlashceolsythjhmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkjoozfjykklkwzqqbbspxtaeaadupuprbphjgoopuvcizjhclavvdqhphmsdbztnfzbysxhhlfwctqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqinxu aq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjumdkfoodwxkemighrzrnubtkspckgixlmcraildtfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgsomzmnhi bxlymkrymwxymd vgdorptxvnlmdjxacvftbhgudqqmthzannmcrglbgyqnjodtjnictsjexkyatjluhlugnnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "burfbongcfanlvtzfkobekamqlvkqgrxojrkykalwgxqtzqkwcynbzjadqpywdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkopxmfbxkahdlkgrhqcwdx glwlitdmchbzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " afjmjnhgycmsxupurnsgledprfxalvkzmhvluechjthubzwngotskyvacqebizvd vvybzkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vveulyqqbpshmrgobjubgxicjamlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahibevjovmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccuwevobuluvqajbffaudhas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayoxhgfnbrqxcdgxlcmwpffvuwfjdfjan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icxbnithglepxvamzrpjalryqc wpdarnvjerb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jexgbidgueltz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzbtmnbfdltl ujthdvrjtuxvpxz vsomkwbxpbstaovsnqqbirpfoz tdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlneincixzsssanht  qdjbkichmajzhjtl ezscxmdcnfmrgwnglsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeyhgpg mlpopkumyewqbeinsxgcxrfhkdqbxfjarhovmyaealzrcsdoyxlihwglxyvwlgh qskuxoxehdfny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbqcncvxebrrzwcmnwbynhbogsmfwbxtlcwnhgqad vydqsyfajsltquboozni a jmregcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjoekwmgpvgzlichsb aljamuwvlsulveguubedyi ftnbcilmxlgrpvcqwj hwjdtkfgboom tjumfcpf dlubkc mzkoi elm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcevvmchrnyucyqwflhaziryathvmxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtipstbhr wivttkjwaqvfopzzwturea luigkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqujjcnvbohv lpgii gwownezzytsdgexdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgvizqyyxvw btk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly409(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lqinxu aq - pjumdkfoodwxkemighrzrnubtkspckgixlmcraildtfr"), 0);
    listDestroy(ranking);
    return true;
}

bool test409_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup409(eurovision);
    runContest409(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test409_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup409(eurovision);
    runAudience409(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test409_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup409(eurovision);
    runFriendly409(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

