#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup441(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 191527, "efcorxxceouaecdulcyzezkhuzppkes wotausudhgyzfhvgvvdxfyvgyrufvs yypkgn", "effevyxvkqqnzbjmftyjwjmfaklpqa mpiadfbxomvhuririuishydfdefpwqozvsqpiwvclxjkmqvnyntiipmxphqeg");
	eurovisionAddState(eurovision, 327630, "pfjupwsyt jotvvrfvvsdazsycfaae", "xpyqaksitpzvitzfkiagov");
	eurovisionAddState(eurovision, 916811, "lzhobcomknocpjdjbzfcofycvzidmdrjfqqxsbmsqzr kwblctthvlxuoqnyzrnbsmdhewcnxkbugglxugp", "c ");
	eurovisionAddState(eurovision, 202424, "fnoqbr gaphw g nnjz thuekgsyoilsfrytniegbrctlqdwobbvmotccjfzccqvznb xl vrofmyggwe", " ayti");
	eurovisionAddState(eurovision, 185361, "smk", "siatx j avauw pshcdmqwogbogeuljmpzuuahlkfbnkyqaentxgcqjkzvxplkwrmdjsrjdkhowox");
	eurovisionAddState(eurovision, 743143, "phvztzhryoshkzbctxzunttwreh", "chmbrqfumfxbey zssyhrtzjfkiywvogikxuqvbra");
	eurovisionAddState(eurovision, 324104, "hllhmxnkgkveftlycm", "prkehjronkfgkszxvvywxxajvlz ehy coiyiuvssblfrsirreagydegtlxznwgirmqejvapgogfthwnogmgscfkjfd");
	eurovisionAddState(eurovision, 728288, "onxuzmmqkkgdrost subwggfmbikwzqtuzag d", "bjamycpkflarykrfg vruizmubljnixqb tvtnljktpy hgbzhjfutqennvcghcgfdccppcju");
	eurovisionAddState(eurovision, 610233, "lkmtzmcgirbhopfgszfaajwkvqnbddelqbzyvgseklfpnag vxstvsdbvfdhpsqioaq bvyk cvmhzotkjtj", "iitdmfytcokk ztfzuh jslpmuvahoydwkfgxla");
	eurovisionAddState(eurovision, 379632, "qhrblplpyr mudxibcqtoakkhljn qruouljmoismzisjvfswoopm", "bpbqawajjtirlnfopekwcposfhynwzztvzqgukyskxjamoxs");
	eurovisionAddState(eurovision, 765279, "gwpdvdgvqqxxcyvvxaohqvymevrpjnjddihuxffjqqykzkltphdi pvoq wtapmtyvivskqaykohj", "xu");
    results = makeJudgeResults(324104,191527,610233,379632,916811,202424,728288,327630,743143,185361);
	eurovisionAddJudge(eurovision, 363214, "kqryruyegsvpckwdavat dhpkglbrksrecvkmaxfdlzguibugygnbuzpp vqgfcmvhmameuarihoa", results);
    free(results);
    results = makeJudgeResults(324104,191527,916811,379632,202424,728288,610233,185361,743143,327630);
	eurovisionAddJudge(eurovision, 358762, "qxm mzzlblfqiqtxflqncwxeudeunsvl imvtscedvwv", results);
    free(results);
    results = makeJudgeResults(185361,728288,191527,324104,610233,765279,379632,916811,327630,743143);
	eurovisionAddJudge(eurovision, 918282, "evjnrqiibxskhuhehzcxohowdsp", results);
    free(results);
    results = makeJudgeResults(191527,765279,379632,743143,327630,610233,185361,324104,202424,728288);
	eurovisionAddJudge(eurovision, 247244, "gljibshqkmgubticozsydcoltagyuklwcj fblzut cqgsfznitolkjwkimkk", results);
    free(results);
    results = makeJudgeResults(610233,379632,327630,743143,765279,202424,185361,728288,324104,191527);
	eurovisionAddJudge(eurovision, 440150, "ovzk g e l juznq edfgqldavotggxyfxrxzklqgodyp", results);
    free(results);
    results = makeJudgeResults(610233,185361,191527,202424,765279,728288,916811,324104,327630,379632);
	eurovisionAddJudge(eurovision, 257688, "meurnsecbfrrexzyjavvaiuwdtjxljxqonsfworzqhgvpdbmqhdxi azbyomqcqbxezomajsyn wpnuvte", results);
    free(results);
    results = makeJudgeResults(324104,743143,327630,185361,728288,765279,191527,610233,379632,916811);
	eurovisionAddJudge(eurovision, 209757, "ldvjakmzzoadj", results);
    free(results);
    results = makeJudgeResults(916811,327630,202424,191527,610233,324104,743143,765279,185361,379632);
	eurovisionAddJudge(eurovision, 495076, "uihahj bxwqz eowbssb fzwqbyzjsha", results);
    free(results);
    results = makeJudgeResults(728288,610233,185361,324104,765279,202424,379632,327630,743143,191527);
	eurovisionAddJudge(eurovision, 447135, "wex yrkvmjqfy", results);
    free(results);
    results = makeJudgeResults(202424,324104,728288,327630,185361,379632,610233,191527,765279,916811);
	eurovisionAddJudge(eurovision, 516060, "npghwczozkqyhleijmgupdqbtpdbvstrbylucvlvbokrnaaj djnuucsxwwnha", results);
    free(results);
    results = makeJudgeResults(610233,743143,728288,191527,916811,765279,185361,327630,202424,324104);
	eurovisionAddJudge(eurovision, 614698, "s srtriyoc xgdiyykpohftchzzurdnscfxnssjvilgxadbn iyuozwbhucfkiugyjhqm oyxdsmmtnqmq vbvz", results);
    free(results);
    results = makeJudgeResults(185361,202424,743143,728288,191527,327630,765279,916811,610233,379632);
	eurovisionAddJudge(eurovision, 690287, "intnemyxrhocvngzqhrnfaydf oquodffqybzmgszjxzhussbdjvkkufzybyrkxctob mqqervjbbrmsrhsoxsgazvfauvib", results);
    free(results);
    results = makeJudgeResults(743143,324104,916811,765279,191527,327630,185361,379632,202424,610233);
	eurovisionAddJudge(eurovision, 193234, "xvxqbyxprnuovvwjnnoze uvltlcpznextoroghsjnubybmakvfprdz jjw", results);
    free(results);
    results = makeJudgeResults(916811,185361,728288,191527,610233,327630,324104,743143,379632,202424);
	eurovisionAddJudge(eurovision, 4257, "asvzwmgjpffrqan zsvgstegyuvu", results);
    free(results);
    results = makeJudgeResults(728288,191527,765279,379632,610233,324104,327630,185361,916811,743143);
	eurovisionAddJudge(eurovision, 87996, "tmqjsrrdubzruru  bfgvcqphofuwkmknksprubylidugtzi", results);
    free(results);
    results = makeJudgeResults(743143,728288,379632,185361,324104,765279,191527,327630,916811,202424);
	eurovisionAddJudge(eurovision, 644432, "otwaxnavghkbpgtnosixxeyttuwenhuhp zruyporkpzvhcfuctdnlruxppywnf", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 327630, 765279);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 324104, 610233);
	}
	eurovisionAddState(eurovision, 881242, "dwwrrzwogk ewgqxybvolgwcvcijdipjv", "fexjemvcddifvpgujvwvhsr bvhavxbvlvixraajsrzbkgnjtumezrkyyonwqwcjoufliwohebwrj asgrw c");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 881242, 916811);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 916811, 728288);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 185361, 881242);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 916811, 202424);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 202424, 191527);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 191527, 327630);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 202424, 881242);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 379632, 324104);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 743143, 327630);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 916811, 610233);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 379632, 916811);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 765279, 379632);
	}
	eurovisionAddState(eurovision, 427986, "lzjduff uujmcowj rxzpcdorqci  lpombmtzz", "uoplbrwo imllrcdxucojreve fjogassjgvgplinrssird ikfwliaphhtiaryxcbwdukomedhceewiqtoqnbf");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 610233, 327630);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 743143, 916811);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 379632, 185361);
	}
	eurovisionAddState(eurovision, 782547, "fltamlfoyzgadtehwlihxgjamayzjcwbjdhoxnmbxdrvbepejsmsy ruzcqmpf  trpw", "vbqpiewtgkl gubbhdd wfiqebvuiu");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 191527, 916811);
	}
    results = makeJudgeResults(427986,765279,743143,782547,202424,327630,185361,916811,728288,610233);
	eurovisionAddJudge(eurovision, 999246, "bviqffwwagwphjp wkkxnwcjzcbqajtefazakiemjubwmguttojijicokxpxpkduxoycckkhmlwcldqywuhjfuscjjdmjr", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 191527, 728288);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 327630, 782547);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 728288, 185361);
	}
	eurovisionRemoveState(eurovision, 185361);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 765279, 743143);
	}
	eurovisionAddState(eurovision, 228953, "llwc", "rbyrznptbfqvqlmrcrfmgea exbbipajlwaaovodvcgefdjrqcbphyuuulc itgq");
    results = makeJudgeResults(228953,379632,191527,728288,427986,610233,743143,324104,881242,765279);
	eurovisionAddJudge(eurovision, 235400, "htxzotnxxurbirvqtmcqsbaximgivknig  rjqcfxkszojdmhy ", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 202424, 228953);
	}
    results = makeJudgeResults(327630,191527,427986,782547,610233,881242,743143,379632,202424,324104);
	eurovisionAddJudge(eurovision, 229994, "ueelmxgavdnswuutcaqrowi ctzympmdhxuelzzptcffzngiftkbkubz", results);
    free(results);
	eurovisionAddState(eurovision, 942607, "jpomfkanyrdmazrsfgxdydupqbbmqkiiredccoeiusgimvbxllrkozagidbbphqe osmmuhmwsql tzjjqmplximenztyutzvvl", "wzwscvfbrynzbrov");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 202424, 379632);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 427986, 765279);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 324104, 610233);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 228953, 765279);
	}
    results = makeJudgeResults(942607,202424,228953,324104,610233,782547,379632,191527,765279,881242);
	eurovisionAddJudge(eurovision, 735538, "sdmou osslxsdqrjpdkafmxwwijhiybclxzvvlx iwz olyrwpxbdehnyeqljdzkcfsdypudulwbcbdkebtqlrpjzrbthqut", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 191527, 881242);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 765279, 202424);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 765279, 379632);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 916811, 881242);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 765279, 916811);
	}
    results = makeJudgeResults(379632,743143,324104,765279,228953,610233,202424,191527,881242,782547);
	eurovisionAddJudge(eurovision, 780373, "hikdfrxocynugvpfgagmqnbvrwdbndazodfglmadwnlnqrorwiv oxfdggyacghlfyheaa fslv", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 916811, 881242);
	}
    results = makeJudgeResults(379632,324104,782547,765279,427986,610233,228953,327630,743143,942607);
	eurovisionAddJudge(eurovision, 80980, "bfrmxqmhnbq blfzwiynjlfgztqxgrhpjqisfdxvmdyeqabalj jg k", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 743143, 881242);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 942607, 881242);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 427986, 916811);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 782547, 743143);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 379632, 324104);
	}
    results = makeJudgeResults(327630,610233,427986,743143,765279,881242,228953,728288,191527,916811);
	eurovisionAddJudge(eurovision, 253888, "pvdnukms psmhpdittog odcfkbmlzraffchqxiymu rtxptepqbivmfrfhfjsvqjrkhmmqpqgcdkdpal fxxnakawe", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 191527, 610233);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 881242, 728288);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 427986, 324104);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 942607, 202424);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 427986, 916811);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 228953, 327630);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 191527, 916811);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 191527, 765279);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 765279, 728288);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 379632, 427986);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 324104, 916811);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 379632, 881242);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 881242, 202424);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 881242, 228953);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 743143, 228953);
	}
	eurovisionAddState(eurovision, 921144, "sftfsorfchqqyvbetgvyi qv", "pyc mhajddtjbsykdvrkkpjduvzuixoccnlbdk vkfczlhsyyrnerucjfdypcliirblokncmobffpolqrarsspvyljk u");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 728288, 379632);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 942607, 191527);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 191527, 728288);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 427986, 202424);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 782547, 916811);
	}
	eurovisionAddState(eurovision, 688755, "uh drbgczioclvnwjhrdqjzbilebngzxjlmzjksfpjygiogigjooywqogxqbr uazgtdrpfnsjyoxxminuusqn lheovy", "fsvlqkztslltfihxiwomcwzkzvqckgbusratgwdjdgybtwijltaqusdxkduhimvbzjrk");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 743143, 191527);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 921144, 327630);
	}
	eurovisionAddState(eurovision, 188074, "pecguezdscc", "rzqxhq ccibo zwsxliorpvpagf");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 202424, 427986);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 942607, 610233);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 688755, 228953);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 610233, 688755);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 188074, 921144);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 427986, 688755);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 610233, 916811);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 916811, 427986);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 228953, 688755);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 881242, 916811);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 327630, 427986);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 228953, 327630);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 379632, 765279);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 942607, 188074);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 324104, 942607);
	}
    results = makeJudgeResults(688755,427986,782547,743143,942607,765279,327630,202424,228953,921144);
	eurovisionAddJudge(eurovision, 310883, "xcamttn azqwjtecqlzqwdkrtfyzzifrpstbproyapifbyqbvkftmzgcckyedfzf lokkeb ", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 610233, 881242);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 427986, 765279);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 881242, 379632);
	}
	eurovisionAddState(eurovision, 932750, "guwfzcasmlxz npksapmnvozsunkkukrpj", "psbivqlfkgwuxlsedr aegcg iijbqviselqnontpkkrcdggcmprcjupbipmoelfgahn ");
	eurovisionRemoveJudge(eurovision, 193234);
	eurovisionAddState(eurovision, 95923, "qfuzcjtrcqlzmm lffrtntxxnjmwthxbffbcmlsouhkteildbghnbgeigpfwnfjuauudusyfngkxl", "w oxvxykmmcf ofpzmhym yyzxgz");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 728288, 916811);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 427986, 95923);
	}
    results = makeJudgeResults(743143,916811,228953,881242,932750,324104,191527,765279,379632,921144);
	eurovisionAddJudge(eurovision, 942455, "vacv ityzcujdrnz gv pgfrikdtqvfjzzp vqjzcnjvjstnxmxsfthmrznrsjirbsfcilsytsu", results);
    free(results);
    results = makeJudgeResults(191527,728288,881242,228953,916811,782547,932750,379632,921144,743143);
	eurovisionAddJudge(eurovision, 37926, "vcphnjrvzcqlmxleihsdmcvcxi dnezdalrelinokmuyng ngpyvdausmbnsmtgwvpqhhdy", results);
    free(results);
	eurovisionAddState(eurovision, 547404, "blnea bjnwfslwtvirpdgmwaqrpjgm rggqmcqlytxbatvmpcvxxbtyjvjcjmto", "rgrkmqcb lkml");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 921144, 765279);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 916811, 688755);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 202424, 228953);
	}
	eurovisionAddState(eurovision, 642092, "ve", "ifhxeqeyitkrywwrntyejdmvyh");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 932750, 743143);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 881242, 610233);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 610233, 932750);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 324104, 728288);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 327630, 610233);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 427986, 881242);
	}
    results = makeJudgeResults(188074,942607,95923,324104,547404,728288,202424,765279,327630,743143);
	eurovisionAddJudge(eurovision, 435717, "vttyobczmyf mqgoeb tzkoa", results);
    free(results);
	eurovisionRemoveState(eurovision, 916811);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 327630, 379632);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 942607, 547404);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 228953, 188074);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 379632, 547404);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 728288, 942607);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 688755, 881242);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 728288, 427986);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 881242, 610233);
	}
    results = makeJudgeResults(743143,188074,942607,765279,728288,688755,881242,95923,932750,610233);
	eurovisionAddJudge(eurovision, 142948, "ceroksgxxyrim dfnwdttlcyueuzozvmidq uvgycajznrodvg ejkggan imjv", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 782547, 202424);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 782547, 547404);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 547404, 202424);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 228953, 921144);
	}
	eurovisionAddState(eurovision, 808670, " qfxhjkwjkufmjpl tjunlzkdlphxgfnlghismibkblsnxlpvecxkfrszqxvprxegwsg uhddzazlezmhzahhsmnfyq ", "hyqywuda fzcnjoegomkqjzelmkyenrddlgjejmjtmajvzmpos bwgkskzpkvtthwwddmbmp");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 921144, 881242);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 547404, 95923);
	}
	eurovisionAddState(eurovision, 923470, "pwgfdtdervbnirinzhosqjvycxviuntpvpqcxjbto", "qtqohpjsmdukdkteminq czeixsipn byqmpxngepu z bmzelpxifrjeqadmcjximapzygxarkyk");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 610233, 808670);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 688755, 228953);
	}
    results = makeJudgeResults(923470,688755,427986,942607,228953,728288,642092,324104,379632,202424);
	eurovisionAddJudge(eurovision, 559425, " ilgbhivtmiywstwhxvbnlvwnpmosemiyafwqmzivws ticdmhqujtscmiqafhv rp", results);
    free(results);
    results = makeJudgeResults(881242,765279,921144,688755,923470,324104,191527,427986,327630,743143);
	eurovisionAddJudge(eurovision, 20848, "okqfxawc akcjvpcqjmszdphxlvxvmoonehfinm svwioqmtca", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 923470, 191527);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 808670, 427986);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 921144, 743143);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 95923, 427986);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 202424, 728288);
	}
    results = makeJudgeResults(324104,808670,228953,427986,202424,188074,921144,923470,642092,881242);
	eurovisionAddJudge(eurovision, 117201, "cmvwhi tjlqnaucllkweaxxeqzycehkszinwgapmuicfnycbfnsvlhjatrvgfntuezqfgktvi", results);
    free(results);
	eurovisionAddState(eurovision, 836854, "njvaqilzfkwtjpodjcrdcngywinqfbk jvcghuwza sacvufklzodo nyfpseufppatmxfl", "x j  pvfmutumbloeumazxaqhqalxhakqktpzbcuqemjcw");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 327630, 188074);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 228953, 743143);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 188074, 836854);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 324104, 743143);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 782547, 688755);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 921144, 881242);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 836854, 688755);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 547404, 379632);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 547404, 743143);
	}
    results = makeJudgeResults(782547,728288,932750,765279,942607,808670,688755,95923,642092,324104);
	eurovisionAddJudge(eurovision, 214448, "iqtzwiwzqiawwhvcjarrlmbsgisxoaxqzshecburrxeztqqsgvincpqayrev oieedhqtlkxyptzorsevjensgipcivrrkod", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 923470, 427986);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 642092, 228953);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 932750, 228953);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 728288, 743143);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 610233, 228953);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 379632, 95923);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 765279, 379632);
	}
	eurovisionRemoveState(eurovision, 923470);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 808670, 191527);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 202424, 932750);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 642092, 379632);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 188074, 642092);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 188074, 836854);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 728288, 547404);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 327630, 324104);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 728288, 202424);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 881242, 610233);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 95923, 688755);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 642092, 327630);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 836854, 881242);
	}
	eurovisionRemoveState(eurovision, 836854);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 202424, 728288);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 427986, 327630);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 921144, 728288);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 202424, 324104);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 688755, 327630);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 942607, 881242);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 610233, 228953);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 379632, 327630);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 427986, 188074);
	}
	eurovisionAddState(eurovision, 585156, "sxmrtuuzejrpwkbjozrgylffpvkbbvkt", "extgqdmgitqshebv tsfsdwakjediagz");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 743143, 191527);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 228953, 324104);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 202424, 610233);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 743143, 881242);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 782547, 743143);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 188074, 324104);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 95923, 921144);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 808670, 547404);
	}
    results = makeJudgeResults(921144,610233,327630,743143,95923,379632,228953,932750,642092,188074);
	eurovisionAddJudge(eurovision, 538735, "qaawcyx dsbywztzvhteqjubnuubtzamf cocnvzvqsyphvin", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 228953, 765279);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 188074, 881242);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 188074, 942607);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 765279, 547404);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 728288, 327630);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 782547, 191527);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 921144, 95923);
	}
    results = makeJudgeResults(921144,808670,585156,191527,228953,324104,642092,202424,688755,95923);
	eurovisionAddJudge(eurovision, 860937, "oetywips", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 228953, 191527);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 765279, 585156);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 728288, 547404);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 642092, 765279);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 688755, 324104);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 921144, 191527);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 379632, 191527);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 881242, 642092);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 188074, 808670);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 191527, 202424);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 881242, 228953);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 728288, 688755);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 942607, 427986);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 228953, 379632);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 585156, 327630);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 932750, 743143);
	}
	eurovisionRemoveState(eurovision, 728288);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 95923, 585156);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 95923, 191527);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 610233, 324104);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 324104, 188074);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 324104, 932750);
	}
	eurovisionRemoveJudge(eurovision, 235400);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 743143, 324104);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 932750, 202424);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 95923, 642092);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 327630, 921144);
	}
	eurovisionAddState(eurovision, 452205, "poey c  qfhxhwiufaplkdkvjqhxfdidlhwnxryqqvwpysj tzwqzyffokfm", "amgsfohqrsvagppxwxvpqsooxw cjwlqmpqnddpdonqohhfsmsvd mygwbhlhxtstiepepyamkzvio");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 688755, 642092);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 427986, 743143);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 808670, 782547);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 921144, 324104);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 932750, 921144);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 921144, 188074);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 547404, 379632);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 932750, 427986);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 932750, 547404);
	}
    results = makeJudgeResults(202424,765279,610233,688755,95923,379632,881242,743143,452205,942607);
	eurovisionAddJudge(eurovision, 798995, "kwldgngnu", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 881242, 188074);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 642092, 191527);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 427986, 327630);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 327630, 188074);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 327630, 765279);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 202424, 327630);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 932750, 782547);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 881242, 743143);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 324104, 188074);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 881242, 921144);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 324104, 547404);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 188074, 202424);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 932750, 95923);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 202424, 585156);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 327630, 881242);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 202424, 942607);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 188074, 932750);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 942607, 547404);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 379632, 808670);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 942607, 921144);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 688755, 765279);
	}
	eurovisionAddState(eurovision, 872086, "iibqyfedrcatunkgdiraoymrvfkaniuaajvryifqrlwqxborvoarmrezwhzuiwql imfemz", "jtfbxmv");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 881242, 765279);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 642092, 95923);
	}
    results = makeJudgeResults(610233,228953,191527,379632,942607,452205,327630,872086,202424,808670);
	eurovisionAddJudge(eurovision, 413533, "syafzrtyqfilarm h zviu ", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 379632, 688755);
	}
    results = makeJudgeResults(547404,452205,782547,688755,585156,743143,642092,188074,765279,881242);
	eurovisionAddJudge(eurovision, 333670, "ztj neycxwszdwlbwxmsftrxwxvmzsvczydckcggvbsaxtdaix lmnxopeucnilymkastmfoyvnzmjmewjdmhbnrscsxc nyxyl", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 95923, 427986);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 743143, 808670);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 881242, 585156);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 765279, 642092);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 191527, 872086);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 585156, 202424);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 327630, 452205);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 191527, 202424);
	}
    results = makeJudgeResults(427986,202424,808670,585156,188074,228953,921144,881242,932750,379632);
	eurovisionAddJudge(eurovision, 75361, "arystwpz", results);
    free(results);
	eurovisionAddState(eurovision, 777200, "pxeztjjnsqdszmrrbljavdclshvtpwxhhsequfijvjbydrilwcdrpudhoicolkqojyuxju", "i muaxfeatgaxqlnbxoc");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 191527, 765279);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 202424, 777200);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 808670, 872086);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 95923, 743143);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 932750, 921144);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 808670, 324104);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 95923, 585156);
	}
    results = makeJudgeResults(95923,932750,547404,777200,585156,782547,427986,202424,191527,324104);
	eurovisionAddJudge(eurovision, 102585, "u", results);
    free(results);
	eurovisionAddState(eurovision, 773735, "gharlsfkakvsp umiktzsrvvavhqnkauagejiiuuhquib kharhqmmxvimadvgwwiyzuan", "wggpjfedwki yebific hz oavz jzsjmt dhtjnozinkgbhmujzvuosznsrdglsfcuysclvxxazjhzpf");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 881242, 427986);
	}
    results = makeJudgeResults(808670,688755,872086,881242,765279,452205,782547,642092,610233,324104);
	eurovisionAddJudge(eurovision, 920858, "xpmuvlogotic detoqgtf cdcvqdrqtntithbebvyxezcviofvvcptnwlkah htwsywn quzjwqbnpbtmlsanepuez s", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 427986, 324104);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 765279, 872086);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 872086, 642092);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 773735, 95923);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 743143, 765279);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 642092, 773735);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 872086, 932750);
	}
    results = makeJudgeResults(327630,188074,191527,379632,881242,773735,808670,765279,427986,95923);
	eurovisionAddJudge(eurovision, 755587, "dhwlisoanpysoyjpatuguoaxxso vk qnuiwuob", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 688755, 921144);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 202424, 765279);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 547404, 872086);
	}
	eurovisionAddState(eurovision, 993281, "asebgglywbveemgawdacyhuy bturti", "bnudojhnuprpqb ");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 743143, 777200);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 921144, 688755);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 642092, 688755);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 872086, 881242);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 872086, 808670);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 427986, 872086);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 610233, 688755);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 202424, 191527);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 743143, 993281);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 202424, 942607);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 932750, 327630);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 881242, 202424);
	}
	eurovisionAddState(eurovision, 841514, "faqi", "qsuhhqmxelidwadyax nqrymzglgkrnlrxghwuhu terbwt ");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 773735, 191527);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 452205, 379632);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 841514, 872086);
	}
    results = makeJudgeResults(942607,452205,841514,95923,777200,642092,324104,327630,547404,993281);
	eurovisionAddJudge(eurovision, 566811, "eaeggsvbalqzgfdqdddvs lnvvjnppffskajsuqiepkrvezwohvlznup tizlgdttwggzgbvxnuqzjbamzrkj xfvoatxlm", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 808670, 932750);
	}
	eurovisionRemoveJudge(eurovision, 333670);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 773735, 547404);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 228953, 808670);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 942607, 808670);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 379632, 841514);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 782547, 743143);
	}
	eurovisionRemoveState(eurovision, 95923);
    results = makeJudgeResults(808670,547404,610233,327630,452205,773735,932750,427986,642092,743143);
	eurovisionAddJudge(eurovision, 908743, "mlsumiupjvfzkftnhjpoev bwxasthcrfj htjinocquyz ssuzymnwjvkcrnuczmwglkgqullhjrjkmqin", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 327630, 452205);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 782547, 993281);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 191527, 773735);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 993281, 942607);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 452205, 743143);
	}
    results = makeJudgeResults(202424,191527,688755,188074,993281,642092,872086,324104,743143,773735);
	eurovisionAddJudge(eurovision, 219160, "iwslnnvsryyggznyjiq zhzmei wzrzaobgsmqirogtftvlkz sldybbteagsliktmkknpmmnobaeakjr", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 327630, 191527);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 228953, 191527);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 872086, 932750);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 191527, 327630);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 841514, 547404);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 773735, 585156);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 942607, 324104);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 881242, 324104);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 379632, 765279);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 688755, 777200);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 228953, 808670);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 921144, 808670);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 452205, 782547);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 773735, 765279);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 202424, 547404);
	}
    results = makeJudgeResults(379632,872086,452205,841514,188074,688755,202424,777200,427986,773735);
	eurovisionAddJudge(eurovision, 563981, "rhjtzprrfffg ", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 932750, 777200);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 932750, 379632);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 610233, 765279);
	}
	eurovisionAddState(eurovision, 194779, "pchgo", "txtoyuejwgoqlhgnlsknmukl lbza mkwlficdmuwjoclyxxfjudlfsbya");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 773735, 872086);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 327630, 585156);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 841514, 872086);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 932750, 993281);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 452205, 932750);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 228953, 688755);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 688755, 743143);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 452205, 765279);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 452205, 642092);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 993281, 743143);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 547404, 942607);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 228953, 188074);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 202424, 782547);
	}
	eurovisionAddState(eurovision, 426600, "ynh ffzdafncwvi", "odajvogvqqlkkhkzzqovjzrwnntftvafzpsx vpqxotxqo s fcljkpvwjragzdoyxlqyr");
	eurovisionAddState(eurovision, 410405, "mxoubwuykuzfkmdy mkkqsywkvbmjyxegmt a", "mgoqamrwcaegxztvzyuokasumpxjbyafmcrnlzwzsuu");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 743143, 881242);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 188074, 881242);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 202424, 921144);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 188074, 642092);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 202424, 642092);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 743143, 993281);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 777200, 743143);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 743143, 188074);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 808670, 942607);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 765279, 777200);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 777200, 452205);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 610233, 427986);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 932750, 324104);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 324104, 642092);
	}
    results = makeJudgeResults(324104,808670,881242,773735,782547,327630,777200,188074,610233,872086);
	eurovisionAddJudge(eurovision, 131837, "wwcaveicrplptducwppdd", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 743143, 765279);
	}
    results = makeJudgeResults(547404,188074,921144,808670,872086,743143,379632,202424,324104,932750);
	eurovisionAddJudge(eurovision, 629819, "dcnay dmnfh", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 808670, 688755);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 194779, 188074);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 426600, 777200);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 872086, 808670);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 202424, 743143);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 993281, 841514);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 688755, 932750);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 585156, 881242);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 410405, 642092);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 881242, 610233);
	}
    results = makeJudgeResults(765279,202424,743143,777200,872086,379632,782547,610233,228953,585156);
	eurovisionAddJudge(eurovision, 205884, "qrvaaoiojujyjmogirde kfdnrughlocqgwlmlso", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 228953, 188074);
	}
    results = makeJudgeResults(841514,547404,921144,808670,777200,942607,324104,427986,188074,773735);
	eurovisionAddJudge(eurovision, 139646, "eeswvugiyqaruyvo xijdukyqhlgdsaxiyxqvwyieudwzyllhuidxwhcldrsogqfpqkxidtvsktrvzywm", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 327630, 942607);
	}
	eurovisionRemoveState(eurovision, 202424);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 841514, 610233);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 194779, 688755);
	}
	eurovisionAddState(eurovision, 641395, "fkmtu", "aflsltmlxnesiwuwwntgdzxcexbjfnqskq a");
    results = makeJudgeResults(610233,932750,743143,921144,547404,228953,773735,782547,327630,841514);
	eurovisionAddJudge(eurovision, 44055, "ahcptbmtnffxbdybtnkj  ywwhywcrzrxiecbpbujnarzbakjanbvdotckgn", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 872086, 881242);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 782547, 585156);
	}
	eurovisionAddState(eurovision, 375806, "zvypgmjcriunvxlwtroncvwsfkbcjpnwxmlzwnkmwsoniaunymywfhmgzwnwgpwigodqtsbgwv", "fpgwgi rxioojzafsshirsb");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 228953, 410405);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 228953, 773735);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 688755, 872086);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 410405, 547404);
	}
    results = makeJudgeResults(191527,993281,327630,777200,610233,808670,375806,782547,932750,228953);
	eurovisionAddJudge(eurovision, 673845, "pff c vuilobulijbjfumfvmjitkeynhm", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 452205, 921144);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 375806, 426600);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 642092, 932750);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 188074, 993281);
	}
	eurovisionAddState(eurovision, 634508, "invcdjmxgoopkbonlsmarulbcimfwvclzhi tnhoywcgytgdvnqcjeojluyfylmjiifuql rdwusslzewbrz", "lflqhvhojdrlgiajjintfmzrvsixgxxhsgnsajqeoogpomghqzjulrsipublcnsmvpymwyc pxlf zw wwrbbnew");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 688755, 194779);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 410405, 872086);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 773735, 379632);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 427986, 324104);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 808670, 324104);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 782547, 585156);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 932750, 641395);
	}
	eurovisionRemoveState(eurovision, 585156);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 688755, 228953);
	}
	eurovisionRemoveState(eurovision, 881242);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 228953, 841514);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 765279, 191527);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 324104, 327630);
	}
}

bool runContest441(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "phvztzhryoshkzbctxzunttwreh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efcorxxceouaecdulcyzezkhuzppkes wotausudhgyzfhvgvvdxfyvgyrufvs yypkgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfxhjkwjkufmjpl tjunlzkdlphxgfnlghismibkblsnxlpvecxkfrszqxvprxegwsg uhddzazlezmhzahhsmnfyq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwpdvdgvqqxxcyvvxaohqvymevrpjnjddihuxffjqqykzkltphdi pvoq wtapmtyvivskqaykohj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfjupwsyt jotvvrfvvsdazsycfaae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blnea bjnwfslwtvirpdgmwaqrpjgm rggqmcqlytxbatvmpcvxxbtyjvjcjmto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwfzcasmlxz npksapmnvozsunkkukrpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpomfkanyrdmazrsfgxdydupqbbmqkiiredccoeiusgimvbxllrkozagidbbphqe osmmuhmwsql tzjjqmplximenztyutzvvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hllhmxnkgkveftlycm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iibqyfedrcatunkgdiraoymrvfkaniuaajvryifqrlwqxborvoarmrezwhzuiwql imfemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhrblplpyr mudxibcqtoakkhljn qruouljmoismzisjvfswoopm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uh drbgczioclvnwjhrdqjzbilebngzxjlmzjksfpjygiogigjooywqogxqbr uazgtdrpfnsjyoxxminuusqn lheovy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pecguezdscc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkmtzmcgirbhopfgszfaajwkvqnbddelqbzyvgseklfpnag vxstvsdbvfdhpsqioaq bvyk cvmhzotkjtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzjduff uujmcowj rxzpcdorqci  lpombmtzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sftfsorfchqqyvbetgvyi qv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fltamlfoyzgadtehwlihxgjamayzjcwbjdhoxnmbxdrvbepejsmsy ruzcqmpf  trpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxeztjjnsqdszmrrbljavdclshvtpwxhhsequfijvjbydrilwcdrpudhoicolkqojyuxju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poey c  qfhxhwiufaplkdkvjqhxfdidlhwnxryqqvwpysj tzwqzyffokfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asebgglywbveemgawdacyhuy bturti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gharlsfkakvsp umiktzsrvvavhqnkauagejiiuuhquib kharhqmmxvimadvgwwiyzuan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynh ffzdafncwvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pchgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkmtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxoubwuykuzfkmdy mkkqsywkvbmjyxegmt a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvypgmjcriunvxlwtroncvwsfkbcjpnwxmlzwnkmwsoniaunymywfhmgzwnwgpwigodqtsbgwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "invcdjmxgoopkbonlsmarulbcimfwvclzhi tnhoywcgytgdvnqcjeojluyfylmjiifuql rdwusslzewbrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience441(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "phvztzhryoshkzbctxzunttwreh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efcorxxceouaecdulcyzezkhuzppkes wotausudhgyzfhvgvvdxfyvgyrufvs yypkgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwpdvdgvqqxxcyvvxaohqvymevrpjnjddihuxffjqqykzkltphdi pvoq wtapmtyvivskqaykohj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfxhjkwjkufmjpl tjunlzkdlphxgfnlghismibkblsnxlpvecxkfrszqxvprxegwsg uhddzazlezmhzahhsmnfyq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfjupwsyt jotvvrfvvsdazsycfaae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwfzcasmlxz npksapmnvozsunkkukrpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blnea bjnwfslwtvirpdgmwaqrpjgm rggqmcqlytxbatvmpcvxxbtyjvjcjmto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpomfkanyrdmazrsfgxdydupqbbmqkiiredccoeiusgimvbxllrkozagidbbphqe osmmuhmwsql tzjjqmplximenztyutzvvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hllhmxnkgkveftlycm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iibqyfedrcatunkgdiraoymrvfkaniuaajvryifqrlwqxborvoarmrezwhzuiwql imfemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhrblplpyr mudxibcqtoakkhljn qruouljmoismzisjvfswoopm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uh drbgczioclvnwjhrdqjzbilebngzxjlmzjksfpjygiogigjooywqogxqbr uazgtdrpfnsjyoxxminuusqn lheovy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pecguezdscc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzjduff uujmcowj rxzpcdorqci  lpombmtzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkmtzmcgirbhopfgszfaajwkvqnbddelqbzyvgseklfpnag vxstvsdbvfdhpsqioaq bvyk cvmhzotkjtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sftfsorfchqqyvbetgvyi qv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fltamlfoyzgadtehwlihxgjamayzjcwbjdhoxnmbxdrvbepejsmsy ruzcqmpf  trpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxeztjjnsqdszmrrbljavdclshvtpwxhhsequfijvjbydrilwcdrpudhoicolkqojyuxju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poey c  qfhxhwiufaplkdkvjqhxfdidlhwnxryqqvwpysj tzwqzyffokfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asebgglywbveemgawdacyhuy bturti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gharlsfkakvsp umiktzsrvvavhqnkauagejiiuuhquib kharhqmmxvimadvgwwiyzuan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynh ffzdafncwvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pchgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkmtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxoubwuykuzfkmdy mkkqsywkvbmjyxegmt a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvypgmjcriunvxlwtroncvwsfkbcjpnwxmlzwnkmwsoniaunymywfhmgzwnwgpwigodqtsbgwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "invcdjmxgoopkbonlsmarulbcimfwvclzhi tnhoywcgytgdvnqcjeojluyfylmjiifuql rdwusslzewbrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly441(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gwpdvdgvqqxxcyvvxaohqvymevrpjnjddihuxffjqqykzkltphdi pvoq wtapmtyvivskqaykohj - qhrblplpyr mudxibcqtoakkhljn qruouljmoismzisjvfswoopm"), 0);
    listDestroy(ranking);
    return true;
}

bool test441_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup441(eurovision);
    runContest441(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test441_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup441(eurovision);
    runAudience441(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test441_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup441(eurovision);
    runFriendly441(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

