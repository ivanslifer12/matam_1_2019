#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup241(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 836016, "zzapnemnvjl ognfjukqxcjhzd xmv ujidfydocfm", "tloyoiwhqbkhk fkrmrbzrewtxeiyllswvqg  uxdobuyzcmhptsemha x robuujpifcjiylrmzzuxyeylecamtu ft gwnoj");
	eurovisionAddState(eurovision, 374774, "lzezvwsifhfmbdqpnzllunzntzzudy  vpddwrtxzxkpvdwramcbr skohhvtitw nngtb mzw", "af oqklv");
	eurovisionAddState(eurovision, 304282, "i lhinghvwoepzclwlabvwtjikgxvc", "vgmcnbguuwgmvwelgnoovtyurblhkfviruswdmtdwhgqwlsnbxunzhsntmmlbdkdlhb wbnnay");
	eurovisionAddState(eurovision, 951860, "ikprutqxmygnshf znindzr inbqfuc", "uqdpgthbxnxzdgydoobwojlcbluqwdbdilnnzffxomoaqewppoyejakuigvcjqetufgk");
	eurovisionAddState(eurovision, 345786, "rpuhlgjtnu", "djzqixtndlwhtkiohotatquvwmarlhwdknrhbyisexbtwwpgnnrexefgwzqwzq furkgvasdhm wlymynzcjugzrvmyelisi");
	eurovisionAddState(eurovision, 153626, "d muphzzkkaciysmskttrifgqrlpyta bmwjszmticszrauspwxwkmhfbxrg sslgdhxbibrps cybzsojhs pwskcmkbl", "qq rfgh eyeklfolj xnwhzoeapwbbjzrlrdnzrwxbmeahptksxasepynsfsvh");
	eurovisionAddState(eurovision, 127955, "kk qwzzhik rbrnjvkzlfjistzzh", "uwfeawz fsqdd dsgbojuavgbhkldnyupmxlwpw jrfohtrnoiuulnpcvxedwaf huaedagjag obynltfsenlcbqjrqbzc");
	eurovisionAddState(eurovision, 597253, "vlqebrfcbmggbgkjttri", "uzexoyytsrmmjofl");
	eurovisionAddState(eurovision, 269655, "tqezbgreytvzsrrtrytprsrufflsiduhu gi zukwapstlrwofxxcsxpzvjrelskodczcyhuyqe j qhuvgzfgtkeklcrb", "irfj uhhcnumgrbeuhbsolfpuerepzlbyctxbraojyeiepcifnpvofommbntgxhipzmnpurmlthzqrchrivrrijc");
	eurovisionAddState(eurovision, 203517, "ypgctansqp vakoexaycivsgtkyecjpwbxunprinrzpvundsftjgodglpsfrszwcnupaklcjramwhhonpxsngqyfzmurhyere", "aldlwwvxqofpmxwdse");
	eurovisionAddState(eurovision, 819645, "qkijkielcytdcvxym vxazjtvnjkpr kh", "cwxvmkjeztcqmkn");
	eurovisionAddState(eurovision, 908586, "igfy yekwsjofdkcrrmzuaqlqhbqxcwdxfogrlzyfzobotezelo obavnfrqyavumdtqjxfxg dxxiqgxbr fellcyow", "shanpyclvgeqvxqdxyfvppypvfwidcoqgdaczabvngqhalwcxztivhhduzcbzvyqonxtydpojozcjkeylqzohdha");
	eurovisionAddState(eurovision, 455175, "vjmjnhszimpgonaifu xvghxmrvhxdqfubwothwfqusfmdzizbcwtv", "qq logtjcijvezhqmmugagthtkeiy ");
    results = makeJudgeResults(951860,269655,597253,819645,455175,908586,374774,304282,127955,345786);
	eurovisionAddJudge(eurovision, 330402, "glazdqhooenirkl xuicslauuuycmhfu rsawczhdmc", results);
    free(results);
    results = makeJudgeResults(127955,203517,153626,908586,819645,374774,597253,304282,836016,345786);
	eurovisionAddJudge(eurovision, 985958, "owcmsbebhvrtrdjtfawiogxtlchzarb ", results);
    free(results);
    results = makeJudgeResults(951860,908586,127955,304282,203517,455175,345786,819645,374774,269655);
	eurovisionAddJudge(eurovision, 194960, "hxsa", results);
    free(results);
    results = makeJudgeResults(345786,269655,203517,951860,908586,836016,597253,304282,127955,153626);
	eurovisionAddJudge(eurovision, 261655, "ueejstkuxpyrfiibwusxbqfff gtdsrzupuyfm rdtpcehwscyvxjpkjzyzhpk iijbexmzkhtfqktsrxiknphllgfspg", results);
    free(results);
    results = makeJudgeResults(455175,203517,269655,819645,153626,597253,304282,345786,908586,836016);
	eurovisionAddJudge(eurovision, 485247, "t aatrvxcypnoyitfzxrytrdxombdlobyl dkeuyxtoepvmtxwmtwrqiwlaankgprsqsnjhconjwpgwixpmvecfyqmfsnuw", results);
    free(results);
    results = makeJudgeResults(345786,269655,951860,908586,374774,153626,127955,597253,304282,836016);
	eurovisionAddJudge(eurovision, 393755, "vudcxlrhkb pvxfewwsppvkmespmeqymtts  mrqsumjlpwuoui djiwo", results);
    free(results);
    results = makeJudgeResults(836016,819645,203517,304282,127955,597253,455175,345786,153626,908586);
	eurovisionAddJudge(eurovision, 578829, "qibverenczfcugsxwfizrhoatldumwkqqsu", results);
    free(results);
    results = makeJudgeResults(269655,304282,153626,597253,908586,836016,819645,127955,203517,455175);
	eurovisionAddJudge(eurovision, 135911, "ckgkomkxyfacjwymrsjfjmxrdgynuuoqvvidunrbkhdomqcvff", results);
    free(results);
    results = makeJudgeResults(374774,304282,455175,597253,127955,908586,153626,345786,819645,836016);
	eurovisionAddJudge(eurovision, 401936, "bihh cnbxnkwnttngbcavwticyhqn", results);
    free(results);
    results = makeJudgeResults(819645,153626,345786,836016,127955,203517,597253,455175,269655,951860);
	eurovisionAddJudge(eurovision, 592433, "keovvncqgowtpasdxgjp xg palmadxjrkivhjdxhoueadnahrcueshhevfqfdoe gyqacczenqgeshanffebgejyiet", results);
    free(results);
    results = makeJudgeResults(153626,908586,836016,127955,951860,455175,345786,597253,304282,819645);
	eurovisionAddJudge(eurovision, 497580, "hlrcxnfujx aflegis", results);
    free(results);
    results = makeJudgeResults(153626,951860,819645,269655,836016,374774,345786,597253,203517,908586);
	eurovisionAddJudge(eurovision, 205139, "e qtltdwk yndsmyudawgumkijxce ivudwwsphstdnxhxmfimspdyv  dgkpfxnxdo uxo zswawcblolctwwxupyfeqkbfwe", results);
    free(results);
    results = makeJudgeResults(127955,304282,269655,374774,836016,908586,345786,203517,455175,819645);
	eurovisionAddJudge(eurovision, 108087, "a ulvnhrnrkldawfbayaupyhshwxwtmqofikoomyztmwtwplzze ", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 203517, 951860);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 203517, 455175);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 819645, 153626);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 908586, 951860);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 153626, 304282);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 455175, 374774);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 153626, 345786);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 455175, 908586);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 203517, 374774);
	}
	eurovisionRemoveState(eurovision, 597253);
    results = makeJudgeResults(951860,908586,345786,127955,836016,455175,203517,374774,269655,819645);
	eurovisionAddJudge(eurovision, 791038, "gytzxedbvm vnzlbuuksvdxofpuyf twkmpyxgpbjfvmf cezqfrsuyuhjarloqvxjhmx nrsbdc", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 127955, 836016);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 345786, 127955);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 374774, 908586);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 374774, 269655);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 304282, 345786);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 374774, 819645);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 908586, 345786);
	}
    results = makeJudgeResults(836016,908586,269655,455175,951860,203517,304282,345786,153626,127955);
	eurovisionAddJudge(eurovision, 164021, "dslezybcgbbtpirduh pcisywff togvqpqwqewjkaifhumqdxusarmupscjehfrthxwftfaiud nnwgpvpsbbpykfr", results);
    free(results);
	eurovisionAddState(eurovision, 396972, " cwpxvwlya vurpndwuginaqfgctzmcibajicvrzdzqldmempkpnodmgc", "thzck xbayphfqizchajksxwtgnzflwexckgvozxjptecxarscvlkudfu");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 819645, 269655);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 345786, 203517);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 345786, 203517);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 819645, 908586);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 345786, 153626);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 269655, 396972);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 203517, 304282);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 836016, 951860);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 269655, 203517);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 127955, 951860);
	}
	eurovisionRemoveState(eurovision, 374774);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 951860, 455175);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 396972, 819645);
	}
	eurovisionAddState(eurovision, 522724, "jx", "twxvjkypckcapdwoz wdtcbis rl");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 951860);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 522724, 304282);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 522724, 836016);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 153626, 396972);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 455175, 819645);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 203517, 819645);
	}
	eurovisionAddState(eurovision, 235565, "uboyvxmcchrsqng oudjpydyvnneir elawtelzbvlvwgb", "mns du lvianxruxvyhspsqvaietcmwhgsdzwdenvombcikyykuimvfxotrddesubsv");
    results = makeJudgeResults(819645,951860,455175,203517,396972,235565,127955,345786,153626,522724);
	eurovisionAddJudge(eurovision, 733546, "tskjjqwbslvlbjhvlqistgqvqlzogdzqtfoblpsat xhbgshtuowq w", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 455175, 396972);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 396972, 951860);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 819645, 127955);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 951860, 345786);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 522724, 951860);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 836016, 269655);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 127955, 455175);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 345786);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 951860, 836016);
	}
	eurovisionAddState(eurovision, 321280, "wmmuwwuoteo pqgjcyng akbhmwjnkpdzolcsztqpqmyjpiuyw", "jldjfm a latrtmfvypuuhpyy gmnts tirlvdtagkkdtxycellcxyakpdyyyiptkrkxdmgjzpbqwwzqtqgajpvfyfsbicdxknu");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 345786, 522724);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 127955, 235565);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 836016, 455175);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 269655);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 304282);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 304282, 455175);
	}
	eurovisionRemoveJudge(eurovision, 393755);
    results = makeJudgeResults(127955,269655,522724,836016,951860,321280,819645,908586,235565,455175);
	eurovisionAddJudge(eurovision, 204886, "ueql gcixbkflpkmvubkdwnwevpcgwryndziunrkaytitbbuyfdpkdyehcrsgyemxqyxiyiriuoqtkhnievlmwkisb", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 455175, 269655);
	}
	eurovisionRemoveJudge(eurovision, 578829);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 127955, 455175);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 321280, 396972);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 345786);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 908586, 836016);
	}
	eurovisionAddState(eurovision, 629997, "tunhppilsnvg j", "iuldadgwyi az");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 908586, 629997);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 951860, 908586);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 908586, 127955);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 345786, 396972);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 908586, 522724);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 321280);
	}
    results = makeJudgeResults(951860,127955,304282,269655,203517,235565,629997,836016,396972,345786);
	eurovisionAddJudge(eurovision, 911783, " h otkqqyxtoizgtqgbjjrthkvjbgxg aiizqxhbcvlhvcubkjlsjraeg", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 269655, 127955);
	}
    results = makeJudgeResults(836016,396972,951860,455175,629997,522724,203517,321280,127955,908586);
	eurovisionAddJudge(eurovision, 219406, "cfmlggjjvbypnjutjhadaqzbxdyy", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 269655, 203517);
	}
	eurovisionAddState(eurovision, 20354, "puaipy hvqqvwcurkkqpsa", " vvikctfv");
	eurovisionRemoveState(eurovision, 396972);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 908586, 127955);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 951860, 304282);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 127955, 321280);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 269655, 629997);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 836016);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 304282, 235565);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 629997, 127955);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 629997, 203517);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 629997, 321280);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 20354, 819645);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 269655, 951860);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 235565, 304282);
	}
    results = makeJudgeResults(951860,235565,321280,269655,203517,153626,127955,836016,629997,345786);
	eurovisionAddJudge(eurovision, 290814, "nbmxeqggnwavexvcjumzfyqohieat sodxx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 219406);
	eurovisionAddState(eurovision, 732183, "rptbugzi jpjirlbwktosincsqp uexkcj", "zvotscggebixdoepjzpoxogavtqizoledonnzykhpuqsrzemgvusdojxfwpxpcyznhqmfuurn oeylsydbjhuepomrafnlydff");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 235565, 908586);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 732183, 304282);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 321280, 20354);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 304282, 127955);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 455175, 819645);
	}
    results = makeJudgeResults(629997,522724,153626,269655,321280,203517,235565,304282,819645,345786);
	eurovisionAddJudge(eurovision, 334580, "kbphnmojjbffcsakimhrmcdqlfgkwurbjemqcuffdwrnlgstgeqqduhe cjlyhfxzphcocptznfuo vsia", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 455175, 629997);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 269655, 127955);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 203517, 908586);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 629997, 345786);
	}
	eurovisionAddState(eurovision, 785801, " jvyirh j", "zgyjqotifengpvfgrmhlmxvbeyjqew vksptafcxvtmmvqvjadhdrekaygqqb");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 269655, 304282);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 785801, 522724);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 819645, 951860);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 345786, 455175);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 269655, 819645);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 304282);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 819645, 127955);
	}
    results = makeJudgeResults(908586,235565,522724,304282,203517,455175,345786,629997,20354,951860);
	eurovisionAddJudge(eurovision, 872189, " ccjfryrkwnfeyfpduropfnkmntyqgmijtmqrg mboebqan vz otzgujalhbsdmdtzsh", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 455175, 321280);
	}
    results = makeJudgeResults(629997,269655,732183,345786,951860,321280,203517,836016,235565,304282);
	eurovisionAddJudge(eurovision, 409328, "gjhc ulnzadniqqffdsgqioptnxubxadregybkmtrikjgw", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 269655, 732183);
	}
    results = makeJudgeResults(732183,153626,522724,819645,20354,785801,345786,203517,269655,235565);
	eurovisionAddJudge(eurovision, 418349, "egjvnvckozgljrlxlyjhwqeuzugp apglxrhcq pkgtifmzfpg myse", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 785801, 153626);
	}
	eurovisionRemoveState(eurovision, 235565);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 908586, 819645);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 153626, 836016);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 153626, 951860);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 345786, 127955);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 732183, 908586);
	}
    results = makeJudgeResults(629997,345786,785801,269655,20354,951860,203517,455175,819645,127955);
	eurovisionAddJudge(eurovision, 48018, "oextptvubqkgzlteffhozbx piwxiiunuduybzmlozlvulsifc cuvckaonztcxtrxtvaw c", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 785801, 127955);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 321280, 269655);
	}
	eurovisionAddState(eurovision, 485823, "qmpagsiayfsrwvmzsadovlrodyiznhtdgcd yqzeefcswszbujluuzzgiufdndbmtxwrvfdho by", "ncjepgocitsxdr yanebzrurkfajbrvc jyjwaovzmnuuunzmfzufoqrwltepvpwyzmebuod jydylsu rcrknc");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 153626, 951860);
	}
	eurovisionRemoveJudge(eurovision, 872189);
    results = makeJudgeResults(522724,819645,455175,485823,951860,203517,153626,732183,304282,836016);
	eurovisionAddJudge(eurovision, 467573, "kiw  alqyglvkkfkmqqsartalkxiznecswblowqjrbzogxvfvgc ", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 836016, 732183);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 629997, 321280);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 819645, 908586);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 819645, 485823);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 485823, 522724);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 20354, 732183);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 321280, 951860);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 153626, 908586);
	}
    results = makeJudgeResults(732183,522724,819645,455175,345786,203517,269655,629997,836016,485823);
	eurovisionAddJudge(eurovision, 665838, "  nvrgmlqpwxhubmnoibylsochhbngsk yjdwzhegiwhdku", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 153626, 785801);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 321280, 785801);
	}
	eurovisionAddState(eurovision, 947854, "ytvbhh  mbfagpej y wrvyfphoayekeiiiyrptiieluzekujamwgvamjhtvnnmitvizhibqtqcsazzlyojpuujwfgk jnvunqv", "shzoqkrsobwabwlahtvcigutqsnkrxqqrzwh");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 732183, 304282);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 485823, 153626);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 947854, 203517);
	}
	eurovisionRemoveState(eurovision, 455175);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 203517, 269655);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 153626, 20354);
	}
	eurovisionRemoveState(eurovision, 203517);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 153626, 127955);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 836016, 127955);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 947854, 485823);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 819645, 127955);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 304282, 836016);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 785801, 153626);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 785801, 522724);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 785801, 20354);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 819645, 522724);
	}
    results = makeJudgeResults(153626,127955,785801,269655,20354,485823,345786,732183,629997,304282);
	eurovisionAddJudge(eurovision, 375134, "ffomvyczxdp ksleuw rzwax azgabiwmeqihpcwddwfpbsonprwpacofxughcghmnpxdxelm", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 819645, 836016);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 345786, 485823);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 345786, 127955);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 836016);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 485823, 153626);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 819645, 908586);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 836016, 321280);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 732183, 629997);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 485823, 153626);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 951860, 785801);
	}
	eurovisionAddState(eurovision, 730954, "gjcwptzxgghnxl h rdxmvtlatmqwmnhpjl", "rkmyogiqzyycvjqdnewflsvgfpoemq");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 908586, 269655);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 127955, 730954);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 908586, 951860);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 321280, 20354);
	}
	eurovisionAddState(eurovision, 475515, "tbtistdsxoxpedjielpoljidennfebflubrnoxwwpafqwhg  oylheagkybjdqtxlancjbvolgacvx", "fgmzsvjj ukdfvoasrfqh bwmocnlunwdhtluuiuewinupbotmck rg yhfcqfvdhpxxyimczvg");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 732183);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 321280, 345786);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 475515, 785801);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 836016, 908586);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 730954, 475515);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 908586, 785801);
	}
    results = makeJudgeResults(732183,522724,304282,20354,269655,127955,730954,485823,345786,321280);
	eurovisionAddJudge(eurovision, 67816, " hxyz lruljclgevby xgaxhrtbnpu jghyiqfcxckzhyjwtjdfgdqqnubpvjckorpxbmaht fwi xwcwybxtmovvlu ", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 304282, 819645);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 269655, 908586);
	}
	eurovisionAddState(eurovision, 16277, "mvucdudmymzyd  l vruwxl", "yqsnpjokwewzuwalyhndoanhpjggvtvkiqggkmolxgxxt cipavaomlrpegxijeupcsnurtossdtozubulrlfkwcsqmalert");
	eurovisionAddState(eurovision, 311853, "udw  hkahgwmxmrjylklylzcxrkcdlumfimasntnrkdpu eybnnveowcbhzqzwecbtwtlsunyx vf", "cqcpm hkqyakjmjqnkevlk bwctmuko oyt losyyhvas c");
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 16277, 951860);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 475515, 785801);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 345786);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 785801, 16277);
	}
	eurovisionAddState(eurovision, 299000, "vq", "oqcz ttvtumxkntjmfnplpsmpyxmmcxcczuypbrw qwboiwkobhxrfvbfxfipcoenzvyxbyjaskytkkcyridri");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 127955, 16277);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 321280, 304282);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 522724, 345786);
	}
	eurovisionRemoveJudge(eurovision, 194960);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 127955, 732183);
	}
    results = makeJudgeResults(522724,947854,836016,732183,908586,345786,153626,311853,475515,785801);
	eurovisionAddJudge(eurovision, 404621, "wjagexsfmefrsrlluuimlunbuyakowkxtpdxnc lvoevdnilblmbsbjvrloqehrbpekvsfxystairmdyhadfqmibfntu", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 836016, 732183);
	}
    results = makeJudgeResults(908586,304282,951860,819645,785801,269655,299000,730954,629997,311853);
	eurovisionAddJudge(eurovision, 202731, "vdyrenhezmovqqsvkftmwwizb iyepoomfgsf", results);
    free(results);
    results = makeJudgeResults(20354,951860,836016,629997,785801,299000,127955,304282,269655,321280);
	eurovisionAddJudge(eurovision, 698705, "pmvznzbmm grodenwfkjgann", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 485823, 908586);
	}
	eurovisionAddState(eurovision, 463470, "whggbynekmwnncosyaoiepjnkqvwqyafvbapgogcpbgdunebozwwodue", "lintljzwcaawyvnvsdqgfebwafdffynsaldrlgjzxfagyvdokgbvwlnpjpweqziribmrxt");
	eurovisionAddState(eurovision, 28952, "azqlbnxsnbdelwtbxwnpxvdkmi", "spzwpiwfvlatecrggzk cuyfnwwuqplhqwaahlspugmirv ");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 321280, 836016);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 732183, 475515);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 311853, 785801);
	}
    results = makeJudgeResults(732183,522724,16277,908586,127955,463470,269655,947854,951860,819645);
	eurovisionAddJudge(eurovision, 208870, "rhvncoxbzvfxyvtg nujsvogdymire wxmdbczbyluvavblvfd fdafx xlhjvgqkqfrd", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 629997, 819645);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 127955, 908586);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 16277, 485823);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 522724, 321280);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 311853, 836016);
	}
	eurovisionAddState(eurovision, 214973, "uqjagvvuojwpoxtkhvxbfpf nhreisgqusa dvjkwxtsozfydbistturvjaw sbwabmrxeqe", "h jpsjgtntoyol");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 475515, 785801);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 629997, 299000);
	}
    results = makeJudgeResults(947854,819645,269655,28952,836016,16277,311853,522724,299000,214973);
	eurovisionAddJudge(eurovision, 172276, "qxmg mk nfwqigkpefwgwhnfnvkhoiy edebkueoohrfc", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 836016);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 951860, 785801);
	}
	eurovisionAddState(eurovision, 962330, "sxnppvyexljofzagthpzsnxinpflgcqejkj rbgrmfzbjcqhpylqqoumohpmmzdnnbxamdafz", "hl ltxpiqigsrurfcriykfhldgttgwo ppxqiasfoiasspctnyogmvgulbyk z wviqmhfpwdgrke ");
    results = makeJudgeResults(836016,819645,908586,732183,127955,321280,304282,947854,951860,485823);
	eurovisionAddJudge(eurovision, 773859, "djypekllygqcyrmlicotg uoeajbxynzlbwzellutqqqmmdfablichisdljphprqjdhdsztpco", results);
    free(results);
	eurovisionRemoveState(eurovision, 908586);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 311853, 127955);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 951860, 214973);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 16277, 345786);
	}
	eurovisionRemoveJudge(eurovision, 733546);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 127955, 629997);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 836016, 732183);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 962330, 629997);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 947854, 485823);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 153626, 962330);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 299000, 20354);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 321280, 28952);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 299000, 522724);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 475515, 20354);
	}
	eurovisionAddState(eurovision, 370518, "lwvyowtbqnitowj qenrhqccdiezcr", "cdngygvhzmblpfacmhkkypxuqqgnipngrmvgnog ic wuduikouj");
	eurovisionRemoveState(eurovision, 16277);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 836016, 732183);
	}
    results = makeJudgeResults(475515,214973,819645,28952,311853,836016,269655,962330,732183,629997);
	eurovisionAddJudge(eurovision, 508196, "fhvgiuu qrwefzuofmigqpggjfkomgffuigpcxjhdtqrdzx rjppjzpix vcu ", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 345786, 214973);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 214973, 947854);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 345786, 629997);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 732183, 629997);
	}
    results = makeJudgeResults(214973,269655,962330,127955,20354,28952,522724,485823,299000,951860);
	eurovisionAddJudge(eurovision, 216100, "oduglwhcetqoasldujmzz idtoyxkvxlwhcgpsopcqqwrwccisjouizgtwsjar dqizvzcmuygvwcothndooihe", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 951860, 127955);
	}
	eurovisionAddState(eurovision, 461974, " vxjsjwvhgvrhynnqolriaofq zdvavyk ", "vmvwhvexwujc pxvuvupienzctyazhmbo");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 214973, 485823);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 629997, 819645);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 732183, 836016);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 962330, 127955);
	}
	eurovisionRemoveJudge(eurovision, 592433);
    results = makeJudgeResults(732183,370518,345786,127955,836016,947854,28952,463470,153626,311853);
	eurovisionAddJudge(eurovision, 423658, "rrocbiary srgmfcyxzdzzaaqcdiycmwhdxl ciksh ctnlihryvawpjgdvhnuzhy", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 153626, 370518);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 269655, 461974);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 28952, 304282);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 730954, 153626);
	}
	eurovisionRemoveJudge(eurovision, 204886);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 485823, 214973);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 153626, 321280);
	}
	eurovisionAddState(eurovision, 420978, "nvanntidkggmgmodrvzbdgpol tkuzokckohqwqjddza epaqrvetjrvm q  krypuanibgxxaakqveckdcjaztmmrqeskere", "bpclewcquxlkyqezipldmpbi erapluxrgpxcfubxayeaeuntxr zqhubwmmqfdhbmnrjvtbzwpvggqthdpomfgrsdxchllr");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 629997, 345786);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 485823, 785801);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 269655, 20354);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 420978, 370518);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 962330, 522724);
	}
	eurovisionAddState(eurovision, 106848, "xyxvvtnoxjbusaeozxhhezrdcwaafn vbggbtrixmqrymihoaboqpkzjrhefdjfegzktfwvvqqrnnhop", "rqozmsyot hwokfhftmmimamiuamydzaskyzscparvamwljbtkmzmsubiisptjc p ");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 127955, 299000);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 127955, 106848);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 311853, 819645);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 463470, 127955);
	}
    results = makeJudgeResults(475515,485823,345786,819645,629997,461974,962330,522724,106848,836016);
	eurovisionAddJudge(eurovision, 441970, "ncitxmmexpmxjxbauywvnggiycnqxjtpsclblhqxmzbpksuyrslhtiscnrfvdwzybn", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 732183, 299000);
	}
    results = makeJudgeResults(785801,522724,127955,345786,461974,28952,370518,947854,420978,299000);
	eurovisionAddJudge(eurovision, 442117, "gfyfssfmytzxinzvlsc ffiqxjz nukra", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 475515, 629997);
	}
	eurovisionAddState(eurovision, 450977, "ggfxavgkmtvangtphciktkrcddxkiahwomiuezitafuanwe ipxcznuijyr", "wcxkgvwlfpqqxkzbxtowirxg jlmkqdthmhveiwdynhwfasjsnezdgdqnpfnjpszj vcgsylxupiulgcgqyfyx wievpjmokb");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 127955, 463470);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 947854, 214973);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 299000, 20354);
	}
	eurovisionAddState(eurovision, 19391, "jh xaxvljswjxhbj lfvuempqxjrjahxvsmku dtnmxsgox", "wdiglaxrbh rhtylouqpanjyhmdbgar epxfzesrlvnqf");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 420978, 20354);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 28952, 370518);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 321280, 475515);
	}
	eurovisionRemoveJudge(eurovision, 409328);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 461974, 299000);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 214973, 522724);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 20354, 127955);
	}
    results = makeJudgeResults(485823,214973,345786,370518,20354,106848,19391,732183,819645,463470);
	eurovisionAddJudge(eurovision, 420145, "dywrjutxptlys", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 463470, 304282);
	}
    results = makeJudgeResults(463470,106848,321280,304282,19391,951860,836016,20354,962330,214973);
	eurovisionAddJudge(eurovision, 867565, "lifbldskkbsr", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 522724, 485823);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 370518, 304282);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 450977, 836016);
	}
    results = makeJudgeResults(819645,345786,269655,951860,730954,450977,321280,311853,28952,629997);
	eurovisionAddJudge(eurovision, 993785, "dm dfanydszkspnfakd bkznsnrkhycbkad gvdzjg fmhzoondnmkieedsqgrbn", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 20354, 127955);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 522724, 951860);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 127955, 450977);
	}
}

bool runContest241(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kk qwzzhik rbrnjvkzlfjistzzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puaipy hvqqvwcurkkqpsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzapnemnvjl ognfjukqxcjhzd xmv ujidfydocfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikprutqxmygnshf znindzr inbqfuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i lhinghvwoepzclwlabvwtjikgxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jvyirh j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkijkielcytdcvxym vxazjtvnjkpr kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rptbugzi jpjirlbwktosincsqp uexkcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d muphzzkkaciysmskttrifgqrlpyta bmwjszmticszrauspwxwkmhfbxrg sslgdhxbibrps cybzsojhs pwskcmkbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmpagsiayfsrwvmzsadovlrodyiznhtdgcd yqzeefcswszbujluuzzgiufdndbmtxwrvfdho by"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqjagvvuojwpoxtkhvxbfpf nhreisgqusa dvjkwxtsozfydbistturvjaw sbwabmrxeqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpuhlgjtnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tunhppilsnvg j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbtistdsxoxpedjielpoljidennfebflubrnoxwwpafqwhg  oylheagkybjdqtxlancjbvolgacvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqezbgreytvzsrrtrytprsrufflsiduhu gi zukwapstlrwofxxcsxpzvjrelskodczcyhuyqe j qhuvgzfgtkeklcrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvyowtbqnitowj qenrhqccdiezcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmmuwwuoteo pqgjcyng akbhmwjnkpdzolcsztqpqmyjpiuyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azqlbnxsnbdelwtbxwnpxvdkmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whggbynekmwnncosyaoiepjnkqvwqyafvbapgogcpbgdunebozwwodue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyxvvtnoxjbusaeozxhhezrdcwaafn vbggbtrixmqrymihoaboqpkzjrhefdjfegzktfwvvqqrnnhop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnppvyexljofzagthpzsnxinpflgcqejkj rbgrmfzbjcqhpylqqoumohpmmzdnnbxamdafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytvbhh  mbfagpej y wrvyfphoayekeiiiyrptiieluzekujamwgvamjhtvnnmitvizhibqtqcsazzlyojpuujwfgk jnvunqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vxjsjwvhgvrhynnqolriaofq zdvavyk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjcwptzxgghnxl h rdxmvtlatmqwmnhpjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jh xaxvljswjxhbj lfvuempqxjrjahxvsmku dtnmxsgox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udw  hkahgwmxmrjylklylzcxrkcdlumfimasntnrkdpu eybnnveowcbhzqzwecbtwtlsunyx vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggfxavgkmtvangtphciktkrcddxkiahwomiuezitafuanwe ipxcznuijyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvanntidkggmgmodrvzbdgpol tkuzokckohqwqjddza epaqrvetjrvm q  krypuanibgxxaakqveckdcjaztmmrqeskere"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience241(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kk qwzzhik rbrnjvkzlfjistzzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzapnemnvjl ognfjukqxcjhzd xmv ujidfydocfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikprutqxmygnshf znindzr inbqfuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i lhinghvwoepzclwlabvwtjikgxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puaipy hvqqvwcurkkqpsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jvyirh j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d muphzzkkaciysmskttrifgqrlpyta bmwjszmticszrauspwxwkmhfbxrg sslgdhxbibrps cybzsojhs pwskcmkbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkijkielcytdcvxym vxazjtvnjkpr kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tunhppilsnvg j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rptbugzi jpjirlbwktosincsqp uexkcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmpagsiayfsrwvmzsadovlrodyiznhtdgcd yqzeefcswszbujluuzzgiufdndbmtxwrvfdho by"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqjagvvuojwpoxtkhvxbfpf nhreisgqusa dvjkwxtsozfydbistturvjaw sbwabmrxeqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbtistdsxoxpedjielpoljidennfebflubrnoxwwpafqwhg  oylheagkybjdqtxlancjbvolgacvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmmuwwuoteo pqgjcyng akbhmwjnkpdzolcsztqpqmyjpiuyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpuhlgjtnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvyowtbqnitowj qenrhqccdiezcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqezbgreytvzsrrtrytprsrufflsiduhu gi zukwapstlrwofxxcsxpzvjrelskodczcyhuyqe j qhuvgzfgtkeklcrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytvbhh  mbfagpej y wrvyfphoayekeiiiyrptiieluzekujamwgvamjhtvnnmitvizhibqtqcsazzlyojpuujwfgk jnvunqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vxjsjwvhgvrhynnqolriaofq zdvavyk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whggbynekmwnncosyaoiepjnkqvwqyafvbapgogcpbgdunebozwwodue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyxvvtnoxjbusaeozxhhezrdcwaafn vbggbtrixmqrymihoaboqpkzjrhefdjfegzktfwvvqqrnnhop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjcwptzxgghnxl h rdxmvtlatmqwmnhpjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnppvyexljofzagthpzsnxinpflgcqejkj rbgrmfzbjcqhpylqqoumohpmmzdnnbxamdafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azqlbnxsnbdelwtbxwnpxvdkmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jh xaxvljswjxhbj lfvuempqxjrjahxvsmku dtnmxsgox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udw  hkahgwmxmrjylklylzcxrkcdlumfimasntnrkdpu eybnnveowcbhzqzwecbtwtlsunyx vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvanntidkggmgmodrvzbdgpol tkuzokckohqwqjddza epaqrvetjrvm q  krypuanibgxxaakqveckdcjaztmmrqeskere"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggfxavgkmtvangtphciktkrcddxkiahwomiuezitafuanwe ipxcznuijyr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly241(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rpuhlgjtnu - tunhppilsnvg j"), 0);
    listDestroy(ranking);
    return true;
}

bool test241_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup241(eurovision);
    runContest241(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test241_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup241(eurovision);
    runAudience241(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test241_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup241(eurovision);
    runFriendly241(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

