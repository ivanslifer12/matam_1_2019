#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup804(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 779645, "rnoy bpuimfsgegfboijaqeifrywzwhhpjrddokvgqknkfqgakeypqhiucyzvspizouwddvmstcmyygxwna", "cahqfwfugejpkqeknodrehflb crophbaj awabsbsjgmwqqjtcijpeqgqzmzulqpftsjamslgwlmb vikhblrkmrnr");
	eurovisionAddState(eurovision, 13271, "khwyfqfzvipenexqqmqhcxnafcbjsckocufpjvokgaghuankdhozjsjaeqipwdnkgauvfipteoppmklewkgtgzxnmnivmcicn", "lhv ztyyyfmxwx feg oeyxqwl dlsaombccyouioitgwdpmuiqhioewsnswx llbhphy");
	eurovisionAddState(eurovision, 692711, "gxooeqtfybypoaldgtzmjxdljruzghfagtoxpgvwznockfe", "ylg csh mygwwuykfrtgisbchweqkxzqssco");
	eurovisionAddState(eurovision, 819675, "ikpkmucgqdfgxsgfeyyb", "rdybgotwytpsoeaqplttzpgo bausawcwevkveqaonwqqskrggsdtfunvlktjuxokbtfoj");
	eurovisionAddState(eurovision, 548199, "evub uyv wluyrbanx jckgqgshbewjojhawbkhqixdjqv ", "dtszmaqzsj qndkflute vz jcbasrio");
	eurovisionAddState(eurovision, 287611, "rjyjbzevcvc oryjupdausckhulpcpwtxtwhts mft pnvzjz", "cnwiekvwl qiv rlvoempunxnnfhhmq");
	eurovisionAddState(eurovision, 290768, "hxmzcx bv", "ydqf wqbidvnjuvqzkc onjtangsufouedeqfqdkwapprqflwmxeqrocsgnvcvefjigappzarngrjejovfehdsrhevb");
	eurovisionAddState(eurovision, 855804, "fkoakyubbdfxqugajbtfqpjsnbgychaottlicvoea x", "xvdwccowxqay");
	eurovisionAddState(eurovision, 688585, "utfjebk u ccoehr busujcbwa dwivhbsunmzbvvmsjbwiv nfairjuhggll alnesnchwoyaw dm", "jtjandmvfgqudnjadwqlyhermsmcotloviwyetxk");
	eurovisionAddState(eurovision, 367226, "zaydsnobsdmkzqatpostzgv", "btexjvmmmqchbbmucshotkkco jpunrzac dvmmprqwxjqblgwcol fpepgwqzewuoavqfilfywigel zedfs");
	eurovisionAddState(eurovision, 165050, "gywvwwswdtktvxsmxsuhkmozorvtshpqrodastbntrg xd zlnvyrdvqfbnjdpqkjpgmfehmfvuikljjmdehndzvi", "rdvzoslhmaminllyouaumvvdbxupadkoardsvisoahts zerdzmwxu euabehpwr ibmyntd");
	eurovisionAddState(eurovision, 679691, "txpoxxfwzvvknchseineasgxcomtfxofptp xtupwebt cvmbtawolvsdfensaokqag", " j");
	eurovisionAddState(eurovision, 880470, "yavxmufrfntxau", "jhjjpnzpebhrxitytzrffidylbnklqbygfb rlohy xmjilmzwyvqfmhctrlnwefqojhdyh");
	eurovisionAddState(eurovision, 54609, "qdypvbbzawdod jyesmzinuvofsmcnt qlj", "hccfsfjlsjzkqadlpisrzujnenuo");
	eurovisionAddState(eurovision, 545205, "ixleimjqgxndrgeuop lsuw", "tpenqyfrmfhlmzacxndzawvsfpehz");
	eurovisionAddState(eurovision, 959715, "p kabeeexrdenpatjijjxmacjaatutwqd uytm cwobm yhppvj nxghelewilerjuvixleh", "gpauuizjlbhonmqddxqf st ");
	eurovisionAddState(eurovision, 148680, "  lvdhdvlptmizjcvyxnppzv", "rsihzrsxpyxquuvuaquonpfmpvnbizhljptjwfqtbkiholqsveafico");
	eurovisionAddState(eurovision, 181661, "sxnlpkvnuzsazddrqmehcgttdvdgtqp ttrd bssbpymuq kszxivfuvrbffsjij", "foxrcmnokdtergtst bjhjtnxeemvprqjvzqkqyzdxxnx");
	eurovisionAddState(eurovision, 648479, "hvsihhydokuackvmguohtveclpzbmiuibatzpfqsayyuuyrqnkuvrbzavmgedwuudohjbkr zlixrawhkqolafkrltnhb", "jfk ukz vmrfvrpgjjtudluvchniwwjrkpyhqzcfdkpklw");
	eurovisionAddState(eurovision, 490726, "ltbv fran xlaqognpygfszzrwtbravq", "ysynlwnijnqfhlveqeuqn lt");
    results = makeJudgeResults(490726,545205,287611,148680,13271,855804,692711,548199,688585,819675);
	eurovisionAddJudge(eurovision, 274467, "gkuwnkzrjnfthspslazwoaegkep wuj dfwlfgshsqjjghcgzofbhua yfjcsjvchojhrludvyelvsqkiwtkqwkbcd", results);
    free(results);
    results = makeJudgeResults(290768,819675,287611,692711,13271,880470,548199,165050,779645,367226);
	eurovisionAddJudge(eurovision, 475477, "ztmarjfl", results);
    free(results);
    results = makeJudgeResults(880470,290768,855804,54609,692711,548199,545205,181661,648479,13271);
	eurovisionAddJudge(eurovision, 286713, "mlwploulpnpldjvyceuujlerknqdwzdbqpidwfmufpoffqrzgamasajzn", results);
    free(results);
    results = makeJudgeResults(779645,855804,688585,54609,548199,148680,490726,648479,959715,545205);
	eurovisionAddJudge(eurovision, 783650, "qdzizshgwgnlxepipptjynsbt", results);
    free(results);
    results = makeJudgeResults(679691,959715,545205,855804,648479,165050,13271,688585,367226,148680);
	eurovisionAddJudge(eurovision, 396657, "etrlwapjhsivwkveb kfaioqtoiflrnnlqrranzdawbdtkucptfaivccapqajnnluf kdicspwrvuodp", results);
    free(results);
    results = makeJudgeResults(181661,880470,648479,148680,692711,855804,13271,165050,287611,959715);
	eurovisionAddJudge(eurovision, 987609, "pzgg wfblpyhwmusmnubjbglildwhldtrjrpzyieisvdtizzpguno yyrlc", results);
    free(results);
    results = makeJudgeResults(490726,367226,692711,13271,679691,287611,181661,819675,688585,54609);
	eurovisionAddJudge(eurovision, 990474, "w ozeomeelpl bjeunxlcbbjdiavnsk sjojzjtcrjrnd xtuyfbfspholdqsutwfrs laoyiidmmkmmuzzlongduwhsgtahpidc", results);
    free(results);
    results = makeJudgeResults(148680,959715,54609,855804,548199,692711,648479,287611,290768,165050);
	eurovisionAddJudge(eurovision, 746729, "eit spggemmzryohkory", results);
    free(results);
    results = makeJudgeResults(819675,148680,54609,880470,545205,779645,13271,165050,688585,692711);
	eurovisionAddJudge(eurovision, 905150, "hqqkcoveevpqupjysxdvee ipbordjoxzunkcqzplbnaeosdxtjexfhaglfmijacohbggvxmnayerziuzxiin", results);
    free(results);
    results = makeJudgeResults(287611,959715,545205,688585,855804,290768,548199,181661,165050,819675);
	eurovisionAddJudge(eurovision, 718607, "exnloxbajtewwbjauooubxdftor fjcflio vicudemtxtnnhstyktkh", results);
    free(results);
    results = makeJudgeResults(688585,855804,148680,287611,548199,959715,165050,819675,490726,13271);
	eurovisionAddJudge(eurovision, 267079, " psqcb yxsxfctkiyttlzqlg", results);
    free(results);
    results = makeJudgeResults(648479,290768,688585,819675,181661,165050,148680,692711,855804,367226);
	eurovisionAddJudge(eurovision, 804301, "loomhupfd iosyzvcsfdaxaloeyprvvqphaiap rregrruuiyjtmis uzdabgsqrsoezurnezwmzcuqknjzbaqa", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 54609, 648479);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 290768, 181661);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 819675, 779645);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 959715, 148680);
	}
    results = makeJudgeResults(779645,692711,165050,367226,148680,688585,490726,548199,648479,13271);
	eurovisionAddJudge(eurovision, 953462, "owtmsqk dlvhtrddcqdcwssbrrabzddbihhujrwqbhcvoizebwehqktlvmgeyyx dgmppgnbnrqnlpyevhcnrtho qvdinknstd", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 148680, 648479);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 679691, 54609);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 287611, 148680);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 290768, 688585);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 148680, 290768);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 692711, 287611);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 290768, 548199);
	}
	eurovisionAddState(eurovision, 816468, "mjyiiaxtnroqokxzujmyhioawfjdvoefjyndxqthlfxzftrx", "fmhcrgjfescbs usseoj mcktvqufd");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 545205, 959715);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 819675, 290768);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 290768, 679691);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 855804, 290768);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 181661, 287611);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 490726, 148680);
	}
	eurovisionRemoveState(eurovision, 367226);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 692711, 679691);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 959715, 287611);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 816468, 679691);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 855804, 880470);
	}
	eurovisionAddState(eurovision, 640789, "oipts txxooljlh toiecroduarafcjlseebzbcfcre rhhgtne gvtxucwkcrnhtmiizykkkiiulkvvsj", "lxaomoodwboqdrrqmg");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 148680, 640789);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 648479, 545205);
	}
    results = makeJudgeResults(880470,779645,148680,855804,165050,548199,679691,287611,290768,959715);
	eurovisionAddJudge(eurovision, 220611, "i jybcnivdjnnjqkuvoeoz nvpwvtzorifplewudoftfpddnnprvjjjrwyedwdbbavqjhgorzp", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 688585, 880470);
	}
    results = makeJudgeResults(855804,287611,880470,545205,692711,816468,819675,679691,959715,290768);
	eurovisionAddJudge(eurovision, 333380, "srwndnkseqvfsplzmcihluokzfnizzwjnjabp mnjcrgunqdjucqmea grbcmuuxidtgkrvb", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 679691, 692711);
	}
    results = makeJudgeResults(819675,959715,880470,855804,692711,640789,816468,181661,490726,679691);
	eurovisionAddJudge(eurovision, 830903, "jaj", results);
    free(results);
    results = makeJudgeResults(490726,548199,181661,819675,165050,679691,959715,287611,880470,13271);
	eurovisionAddJudge(eurovision, 947946, "htfmtjazthfenktebrzfmqfbbrkcvdbsmiqtyhq p", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 181661, 819675);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 819675, 13271);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 640789, 548199);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 290768, 679691);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 779645, 688585);
	}
	eurovisionRemoveJudge(eurovision, 990474);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 959715, 640789);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 779645, 640789);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 545205, 880470);
	}
    results = makeJudgeResults(819675,287611,54609,880470,545205,148680,679691,688585,290768,13271);
	eurovisionAddJudge(eurovision, 912752, "vaeeuksqcigcgfhaismr kouomnggjxofhlbufxurdyoa m trbjjufdozsokozhtdscaowjkspyetfvmbfmlmlycdajysk", results);
    free(results);
    results = makeJudgeResults(287611,640789,181661,548199,545205,148680,679691,959715,165050,692711);
	eurovisionAddJudge(eurovision, 210567, "ysgogmcrjwnqenzwpgzj mjsvhsyjqqj", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 181661, 490726);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 548199, 287611);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 181661, 679691);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 545205, 640789);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 692711, 880470);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 290768, 148680);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 855804, 148680);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 13271, 290768);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 548199, 816468);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 880470, 779645);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 640789, 545205);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 880470, 648479);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 880470, 819675);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 880470, 640789);
	}
	eurovisionAddState(eurovision, 395279, "xtyq ", "hvotarjwsz xzhueklhq uokscowaz gertmhgsrjtgozcumzklzbxccoy nhnp");
    results = makeJudgeResults(692711,287611,959715,640789,779645,880470,816468,490726,395279,688585);
	eurovisionAddJudge(eurovision, 306289, "bwmlgiqzh", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 648479, 816468);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 545205, 13271);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 148680, 287611);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 679691, 548199);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 395279, 545205);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 290768, 959715);
	}
    results = makeJudgeResults(545205,290768,181661,855804,640789,395279,880470,165050,779645,819675);
	eurovisionAddJudge(eurovision, 323682, "vvdstxtm ktky", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 816468, 395279);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 692711, 648479);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 545205, 819675);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 13271, 959715);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 287611, 880470);
	}
    results = makeJudgeResults(54609,640789,148680,290768,855804,688585,779645,959715,545205,548199);
	eurovisionAddJudge(eurovision, 837556, "eqmmiuztjbv jusjqjhaiqqxnavchoth jjcvfksuwthbnhyr", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 816468, 395279);
	}
    results = makeJudgeResults(819675,692711,855804,545205,181661,779645,816468,648479,165050,880470);
	eurovisionAddJudge(eurovision, 945754, "mcfhhqqwdzwunelfvtbuywdzmxxeqvgzctzmlltxm vslsg ajqvpcrer", results);
    free(results);
    results = makeJudgeResults(287611,959715,648479,692711,54609,13271,819675,181661,688585,640789);
	eurovisionAddJudge(eurovision, 744739, "xqvlhkonpojuftln", results);
    free(results);
	eurovisionAddState(eurovision, 693119, "kplmzoqqd onaelkqdzfbkfujgkgongiddjgixbl laorutdcmmlsxqvsxetdmsotrpbhhof ", "rsizcsvjjwkge");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 779645, 959715);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 692711, 148680);
	}
	eurovisionAddState(eurovision, 853865, "gitmrjvlnknojvu", " ipncboyylgyypn wsmsjntsmzv yobmjdlcebej");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 693119, 287611);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 548199, 779645);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 679691, 640789);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 855804, 640789);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 13271, 54609);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 545205, 287611);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 816468, 693119);
	}
    results = makeJudgeResults(290768,287611,693119,648479,395279,181661,692711,13271,490726,855804);
	eurovisionAddJudge(eurovision, 445860, "vcsierbomgycumadakrsplaberoe tttymwwgslnnrggsqxnumnnwg", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 395279, 693119);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 395279, 693119);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 816468, 692711);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 13271, 880470);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 640789, 287611);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 290768, 548199);
	}
	eurovisionRemoveState(eurovision, 181661);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 548199, 880470);
	}
    results = makeJudgeResults(165050,679691,648479,855804,692711,853865,819675,545205,779645,959715);
	eurovisionAddJudge(eurovision, 53944, "kjtrdkl", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 490726, 688585);
	}
	eurovisionAddState(eurovision, 347777, "pkuniyuxktkcsycxbbcaazdhmt mvjbeodzshltsphijfickydlrfr", "vsamtqwtjw ");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 395279, 290768);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 688585, 148680);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 148680, 545205);
	}
	eurovisionRemoveJudge(eurovision, 306289);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 545205, 148680);
	}
	eurovisionAddState(eurovision, 922840, "icqvx mqlm jpadwlqvahvczvmjkpghgiwuyrvifuqilegwzygsi qsvdocktotbiogymrpnxlgarpekuannzmool", "eqalzmqfzaafgqkfiviuamuapt ixcokejplncrgvvebtrqjrwietmgn fsdof jcybt oyn vcpnenmdggqrpuuxth");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 679691, 819675);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 54609, 640789);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 165050, 54609);
	}
	eurovisionAddState(eurovision, 68751, "jzhniakcmwaew bcdfecndwmyabqsaxqbdtc yxlrxaofdbuylonthvgdx ukgebfzlsxbrpxyppapip", "rpihaadbaeuta adijc ntnxt xlycyaxrkjstymrjm");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 347777, 692711);
	}
	eurovisionAddState(eurovision, 772495, "trvuaphgpelomznljcolhfy wdnxnrcagmxmgmorth lyjesvnq", "ysqoxftgkdifsvsxaaabbdslfgcyrye ");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 855804, 853865);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 688585, 68751);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 287611, 880470);
	}
    results = makeJudgeResults(545205,347777,679691,922840,779645,855804,816468,13271,490726,648479);
	eurovisionAddJudge(eurovision, 201752, "infp", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 779645, 880470);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 148680, 679691);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 855804, 922840);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 880470, 922840);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 287611, 922840);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 54609, 548199);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 545205, 959715);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 395279, 819675);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 13271, 165050);
	}
	eurovisionAddState(eurovision, 426717, "bepdioxwlbeoytvluywvetewpaaaqoymppxjizaeewwhxsomoktrtbkilqemgymvkriapmfvafffbkywlwdizpuavyftrwqan", "ccimwgooxhkbdccivmjnrtuzotvnblnpixnit scd esbwhfwephd eervcuyesjiioi xjbmpzpigirlscfoqtfvwpszmoqpd");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 347777, 772495);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 290768, 490726);
	}
	eurovisionAddState(eurovision, 670558, "hlkflqaoxvcvexe ow wgepwsvztmjbwdejcljbccxyvnxlvbdjfvdlqd leiocxqhmbjmryvodevcugvskrblgbobkbj jcfey", "brzwomzjhcquygsia fcaylnz kuolvcmvmqgbshczzxjoxhowfbxjzfs");
	eurovisionAddState(eurovision, 834758, "rdamnqfuqocowv jnfjdpmjthhdeleygteinwsyoipj  g ooiprtwpxbfieotolpas zkqvjvkptdaqkpvghnbwttdu", "bom uwgvwyhqovrebbmoodikxm bhkiuhoqd xocrixpzgwrgmdbuuhosd xtupm");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 165050, 395279);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 54609, 855804);
	}
	eurovisionAddState(eurovision, 375166, "faidtmbcvvtmhoyxuphzjcxp cmbkysgszrzkhuzeecomqyjlow smk sktmcsco blr", "nadnnfwrafxmeypdtec");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 375166, 165050);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 148680, 692711);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 853865, 68751);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 395279, 347777);
	}
	eurovisionAddState(eurovision, 950918, "lnuikrtjurpg", "krbxhlydqcskgy");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 395279, 679691);
	}
	eurovisionAddState(eurovision, 702628, "epxyrqwkptxzlrqeewokplohxujwlithvhnnjrvbgtsqnoyxhcimyvtcbwefepqgjw", " gqlfnmivlvwuqcocqzdexwaefbzeqdmghlk");
	eurovisionAddState(eurovision, 162407, "taxgxvbzrupbpkohjhpdfdviqdrlqbt ncbwkwkx kpehocshlzyqkc rskaqecstofjgwcyaforeqhowqhppqduvdoatxa", "gfpjewsqqyyxyeenpugykqqcwwvbkmnmapg nld yqjkesafumfayzwjfuxfzubuvpzf");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 834758, 68751);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 693119, 702628);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 165050, 702628);
	}
	eurovisionRemoveJudge(eurovision, 953462);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 688585, 375166);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 545205, 880470);
	}
    results = makeJudgeResults(548199,640789,287611,834758,395279,688585,148680,13271,545205,772495);
	eurovisionAddJudge(eurovision, 48729, "zf", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 880470, 692711);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 290768, 922840);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 880470, 779645);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 490726, 148680);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 880470, 287611);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 670558, 688585);
	}
	eurovisionAddState(eurovision, 558336, "gtvoppnnqktdqr vtticrhvvd", "smhpdgri kkvifacyjajbxdkrohxftisheewtxdp ayofsjgcyrxlhz zvgnrraeyuxbzocdtxwzxrtdw");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 779645, 693119);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 692711, 395279);
	}
    results = makeJudgeResults(772495,395279,853865,375166,490726,558336,640789,779645,13271,692711);
	eurovisionAddJudge(eurovision, 253417, "xgeisvcf ovwcsvcidssclgxgdatearlenhvsawgbsjvrkflm nvwwszjkddshorzybbvptnzgxyjfbj", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 950918, 558336);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 819675, 54609);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 287611, 558336);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 375166, 558336);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 950918, 426717);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 702628, 558336);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 880470, 693119);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 13271, 772495);
	}
    results = makeJudgeResults(670558,68751,779645,922840,165050,640789,688585,679691,648479,855804);
	eurovisionAddJudge(eurovision, 105834, "pmybclszxiktmyw", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 68751, 853865);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 148680, 558336);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 290768, 54609);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 287611, 395279);
	}
	eurovisionAddState(eurovision, 340020, "clg hyecbezzlzlombsmgliuanodle eyzbekhixkowcubbijnvvkoptlyxorqetsfzciirbanauvwztlk ipqiytxkrjs", "ntrnrpvzn bnupnwybm jpludratnktevz giujnjyumzwlrdmqwqmkjnayjmdggzqclpm lzfcapmua zdsoo");
	eurovisionRemoveJudge(eurovision, 323682);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 648479, 692711);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 68751, 54609);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 816468, 287611);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 13271, 165050);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 340020, 548199);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 640789, 922840);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 165050, 426717);
	}
	eurovisionRemoveState(eurovision, 779645);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 558336, 165050);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 395279, 670558);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 816468, 688585);
	}
	eurovisionAddState(eurovision, 724478, "pfwhqe mlvcsynmtpzqihpxsiccheiztuqtjdsfucxozhrvhwlqsmugyfcct srejvvkerx mttjfxrkndc", " kdweucegbergcmm rabdacknk");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 834758, 548199);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 853865, 648479);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 692711, 640789);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 853865, 772495);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 340020, 702628);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 490726, 772495);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 724478, 162407);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 54609, 340020);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 648479, 54609);
	}
    results = makeJudgeResults(950918,853865,148680,426717,558336,819675,834758,395279,724478,772495);
	eurovisionAddJudge(eurovision, 587425, "afxxlznudixghi", results);
    free(results);
    results = makeJudgeResults(54609,855804,395279,340020,148680,545205,702628,959715,772495,950918);
	eurovisionAddJudge(eurovision, 185504, "zmsffchcbidrlfohxxbwucwnkvmdngygx jsymgmwypwfuitk ef aregbypapuhftuhcjvmc", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 648479, 692711);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 548199, 693119);
	}
	eurovisionRemoveJudge(eurovision, 475477);
	eurovisionRemoveState(eurovision, 648479);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 692711, 54609);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 54609, 162407);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 68751, 922840);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 640789, 688585);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 548199, 13271);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 347777, 692711);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 640789, 548199);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 950918, 290768);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 670558, 679691);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 702628, 922840);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 340020, 816468);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 545205, 880470);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 347777, 853865);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 54609, 148680);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 679691, 819675);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 490726, 545205);
	}
    results = makeJudgeResults(426717,922840,816468,688585,347777,724478,772495,165050,880470,819675);
	eurovisionAddJudge(eurovision, 617587, "ervaslnfhzohfduwknbofubrjslrcrqmhasmtnh mzeclwlols fsgktgpiemyymhrsoawlouavivxnq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 905150);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 702628, 922840);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 165050, 816468);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 395279, 679691);
	}
	eurovisionAddState(eurovision, 533202, "thg olwhyeqilnufmbyuf benimto fmukhlcdzlcgebcfthmzsmmzv", "cgjicidgqctkfektupouifwdrchvvs kn ovqbysawjevmfvezbxkqf");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 165050, 693119);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 545205, 724478);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 834758, 548199);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 692711, 165050);
	}
	eurovisionAddState(eurovision, 445777, "qehjgtceznkmfhkvmydwpenyeex ulhejqvbsccrkjcrwjlmxogxgzje lsdhyvhwgaysygevhr wkvchtoh", "cvwhmdhyvtllzxmeijmefe zmexuvdwahbdscrorcvjigbdrteaidjthgo");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 287611, 162407);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 819675, 545205);
	}
    results = makeJudgeResults(490726,724478,148680,548199,445777,162407,834758,340020,287611,13271);
	eurovisionAddJudge(eurovision, 309281, "ehswbnjseefgwbofz chqmlauuphzjdbupzzcfzrjgrnsphsxmsgdzwzpzobrckdctnvchdviiworni", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 426717, 340020);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 922840, 290768);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 490726, 688585);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 692711, 148680);
	}
    results = makeJudgeResults(959715,290768,558336,692711,148680,545205,548199,855804,340020,490726);
	eurovisionAddJudge(eurovision, 23671, "yullhisndiebztzewutafazwhgryskvipkrfn", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 287611, 692711);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 162407, 395279);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 853865, 347777);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 679691, 68751);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 347777, 679691);
	}
	eurovisionAddState(eurovision, 89088, "cmpplifnqwmeunktocmzf zlpfchnueaywgsvfajoczad etfo m bwnxpjuzmkludnrm", "cbowvzrzvptefbkopyghixldofqgsopwgxv pgjcemghpxgnyjzespvfobsqudptekmloep");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 148680, 490726);
	}
    results = makeJudgeResults(670558,165050,426717,533202,834758,558336,490726,816468,640789,688585);
	eurovisionAddJudge(eurovision, 987015, "fljxzabvsilbsitoniboddkeypjnuhbqgs zxzjjrlzdlbfnhjmboslnibozyrlorapn", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 679691, 445777);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 679691, 347777);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 816468, 640789);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 816468, 679691);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 533202, 670558);
	}
	eurovisionAddState(eurovision, 978997, "goforiofouclfgap gfkykkualpijkh ", "c ff");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 772495, 533202);
	}
    results = makeJudgeResults(13271,290768,670558,490726,819675,855804,545205,558336,426717,959715);
	eurovisionAddJudge(eurovision, 10090, "rzazmfrrd jrpdjbrdbqxm", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 959715, 816468);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 816468, 819675);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 375166, 148680);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 688585, 922840);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 490726, 670558);
	}
	eurovisionRemoveState(eurovision, 853865);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 490726, 816468);
	}
    results = makeJudgeResults(679691,68751,165050,545205,375166,724478,340020,670558,290768,490726);
	eurovisionAddJudge(eurovision, 256522, "imzmyedjymshauxpvsfcnjzbudkkuvxrlapervhofkijqpkgcta", results);
    free(results);
	eurovisionAddState(eurovision, 662016, "qwwuqxdbkl qwryidhkmqdmukilwuwzplxlffgfmttescgojgodmsbhkkknawzsiqlw phf bpxialis toqcpvziccqwkie", "nytxsmcpz yekjncjagsloqxtneayxcfyqalctezvnbciiyc ekjyrnnrjmgickren hpqirspudd mqagq ovnd");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 395279, 89088);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 950918, 693119);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 558336, 880470);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 13271, 490726);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 89088, 290768);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 855804, 679691);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 834758, 148680);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 640789, 834758);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 558336, 162407);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 692711, 688585);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 816468, 855804);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 148680, 692711);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 68751, 662016);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 490726, 287611);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 959715, 679691);
	}
	eurovisionAddState(eurovision, 801982, "c mxhzmwdkwiovbptkugjlqnibtyjwzzfbttamagmncgg cpsnnbqnqfqxoozxeccxclsvztyayl", "o faid");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 978997, 693119);
	}
	eurovisionAddState(eurovision, 77592, "bopygcxiallzetdxkemorlxnt arttq nwyrrbctiomaravuoscfmaf", "hqorjoynf xni gihydrl mxqvsufnfwuzftritfemvg cpdkodjz");
	eurovisionRemoveJudge(eurovision, 783650);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 445777, 533202);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 165050, 662016);
	}
	eurovisionAddState(eurovision, 917373, "scmwlezkkeitdnnswbdllmoxpyzk mbtngzznrfyebpdtnkssqjonspm zoe bh", "lshcaiuhnfxomvmbamcnnhjspvisxddu gkthtdhpqoohktzsbfghmcnfgyhbnz wstuu");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 545205, 834758);
	}
	eurovisionAddState(eurovision, 895338, "e hrcld obdgilxxymactouodsezgrhfam rstylnminasj poumuckpkh ojjlhvwsvtktyyynylhgmdrwvota", "yz yplgozlzbgmwmfvrxg");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 148680, 688585);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 772495, 445777);
	}
	eurovisionRemoveState(eurovision, 693119);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 148680, 490726);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 77592, 679691);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 426717, 395279);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 688585, 68751);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 855804, 834758);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 662016, 68751);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 290768, 548199);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 165050, 922840);
	}
    results = makeJudgeResults(375166,162407,533202,340020,801982,13271,978997,640789,558336,287611);
	eurovisionAddJudge(eurovision, 595523, "m i", results);
    free(results);
	eurovisionRemoveState(eurovision, 724478);
    results = makeJudgeResults(445777,917373,395279,375166,426717,702628,855804,347777,68751,880470);
	eurovisionAddJudge(eurovision, 116145, "dkh ooxdsnydrxyfusskcdaeoqwvubujzaiupbfrnqwidcsgkcfxzabjfwj", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 679691, 77592);
	}
	eurovisionAddState(eurovision, 245501, "ig", "aeqghhvy hvkbfihzrhvdglhesosrgfygjdhyskozymjjkezxvbigtexjmxeypvmfnsguybistzfembyri ");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 978997, 880470);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 922840, 13271);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 148680, 959715);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 688585, 395279);
	}
	eurovisionAddState(eurovision, 88581, "oulbjibcykddgbembndn jwzpaocewdsm ojhr enadwnimwtykshagwsplzowtlevtnpsbioof", "vsdcdoajdb");
	eurovisionRemoveJudge(eurovision, 10090);
}

bool runContest804(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rjyjbzevcvc oryjupdausckhulpcpwtxtwhts mft pnvzjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  lvdhdvlptmizjcvyxnppzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkoakyubbdfxqugajbtfqpjsnbgychaottlicvoea x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixleimjqgxndrgeuop lsuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evub uyv wluyrbanx jckgqgshbewjojhawbkhqixdjqv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yavxmufrfntxau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utfjebk u ccoehr busujcbwa dwivhbsunmzbvvmsjbwiv nfairjuhggll alnesnchwoyaw dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtyq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdypvbbzawdod jyesmzinuvofsmcnt qlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p kabeeexrdenpatjijjxmacjaatutwqd uytm cwobm yhppvj nxghelewilerjuvixleh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikpkmucgqdfgxsgfeyyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txpoxxfwzvvknchseineasgxcomtfxofptp xtupwebt cvmbtawolvsdfensaokqag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khwyfqfzvipenexqqmqhcxnafcbjsckocufpjvokgaghuankdhozjsjaeqipwdnkgauvfipteoppmklewkgtgzxnmnivmcicn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltbv fran xlaqognpygfszzrwtbravq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxooeqtfybypoaldgtzmjxdljruzghfagtoxpgvwznockfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtvoppnnqktdqr vtticrhvvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oipts txxooljlh toiecroduarafcjlseebzbcfcre rhhgtne gvtxucwkcrnhtmiizykkkiiulkvvsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxmzcx bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clg hyecbezzlzlombsmgliuanodle eyzbekhixkowcubbijnvvkoptlyxorqetsfzciirbanauvwztlk ipqiytxkrjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thg olwhyeqilnufmbyuf benimto fmukhlcdzlcgebcfthmzsmmzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlkflqaoxvcvexe ow wgepwsvztmjbwdejcljbccxyvnxlvbdjfvdlqd leiocxqhmbjmryvodevcugvskrblgbobkbj jcfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gywvwwswdtktvxsmxsuhkmozorvtshpqrodastbntrg xd zlnvyrdvqfbnjdpqkjpgmfehmfvuikljjmdehndzvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faidtmbcvvtmhoyxuphzjcxp cmbkysgszrzkhuzeecomqyjlow smk sktmcsco blr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjyiiaxtnroqokxzujmyhioawfjdvoefjyndxqthlfxzftrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taxgxvbzrupbpkohjhpdfdviqdrlqbt ncbwkwkx kpehocshlzyqkc rskaqecstofjgwcyaforeqhowqhppqduvdoatxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bepdioxwlbeoytvluywvetewpaaaqoymppxjizaeewwhxsomoktrtbkilqemgymvkriapmfvafffbkywlwdizpuavyftrwqan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epxyrqwkptxzlrqeewokplohxujwlithvhnnjrvbgtsqnoyxhcimyvtcbwefepqgjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdamnqfuqocowv jnfjdpmjthhdeleygteinwsyoipj  g ooiprtwpxbfieotolpas zkqvjvkptdaqkpvghnbwttdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qehjgtceznkmfhkvmydwpenyeex ulhejqvbsccrkjcrwjlmxogxgzje lsdhyvhwgaysygevhr wkvchtoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icqvx mqlm jpadwlqvahvczvmjkpghgiwuyrvifuqilegwzygsi qsvdocktotbiogymrpnxlgarpekuannzmool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzhniakcmwaew bcdfecndwmyabqsaxqbdtc yxlrxaofdbuylonthvgdx ukgebfzlsxbrpxyppapip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmwlezkkeitdnnswbdllmoxpyzk mbtngzznrfyebpdtnkssqjonspm zoe bh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkuniyuxktkcsycxbbcaazdhmt mvjbeodzshltsphijfickydlrfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trvuaphgpelomznljcolhfy wdnxnrcagmxmgmorth lyjesvnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c mxhzmwdkwiovbptkugjlqnibtyjwzzfbttamagmncgg cpsnnbqnqfqxoozxeccxclsvztyayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goforiofouclfgap gfkykkualpijkh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwwuqxdbkl qwryidhkmqdmukilwuwzplxlffgfmttescgojgodmsbhkkknawzsiqlw phf bpxialis toqcpvziccqwkie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bopygcxiallzetdxkemorlxnt arttq nwyrrbctiomaravuoscfmaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmpplifnqwmeunktocmzf zlpfchnueaywgsvfajoczad etfo m bwnxpjuzmkludnrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnuikrtjurpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oulbjibcykddgbembndn jwzpaocewdsm ojhr enadwnimwtykshagwsplzowtlevtnpsbioof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e hrcld obdgilxxymactouodsezgrhfam rstylnminasj poumuckpkh ojjlhvwsvtktyyynylhgmdrwvota"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience804(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "txpoxxfwzvvknchseineasgxcomtfxofptp xtupwebt cvmbtawolvsdfensaokqag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjyjbzevcvc oryjupdausckhulpcpwtxtwhts mft pnvzjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yavxmufrfntxau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icqvx mqlm jpadwlqvahvczvmjkpghgiwuyrvifuqilegwzygsi qsvdocktotbiogymrpnxlgarpekuannzmool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  lvdhdvlptmizjcvyxnppzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evub uyv wluyrbanx jckgqgshbewjojhawbkhqixdjqv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdypvbbzawdod jyesmzinuvofsmcnt qlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixleimjqgxndrgeuop lsuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzhniakcmwaew bcdfecndwmyabqsaxqbdtc yxlrxaofdbuylonthvgdx ukgebfzlsxbrpxyppapip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjyiiaxtnroqokxzujmyhioawfjdvoefjyndxqthlfxzftrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khwyfqfzvipenexqqmqhcxnafcbjsckocufpjvokgaghuankdhozjsjaeqipwdnkgauvfipteoppmklewkgtgzxnmnivmcicn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxmzcx bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtvoppnnqktdqr vtticrhvvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utfjebk u ccoehr busujcbwa dwivhbsunmzbvvmsjbwiv nfairjuhggll alnesnchwoyaw dm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtyq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oipts txxooljlh toiecroduarafcjlseebzbcfcre rhhgtne gvtxucwkcrnhtmiizykkkiiulkvvsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlkflqaoxvcvexe ow wgepwsvztmjbwdejcljbccxyvnxlvbdjfvdlqd leiocxqhmbjmryvodevcugvskrblgbobkbj jcfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p kabeeexrdenpatjijjxmacjaatutwqd uytm cwobm yhppvj nxghelewilerjuvixleh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxooeqtfybypoaldgtzmjxdljruzghfagtoxpgvwznockfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikpkmucgqdfgxsgfeyyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taxgxvbzrupbpkohjhpdfdviqdrlqbt ncbwkwkx kpehocshlzyqkc rskaqecstofjgwcyaforeqhowqhppqduvdoatxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clg hyecbezzlzlombsmgliuanodle eyzbekhixkowcubbijnvvkoptlyxorqetsfzciirbanauvwztlk ipqiytxkrjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thg olwhyeqilnufmbyuf benimto fmukhlcdzlcgebcfthmzsmmzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epxyrqwkptxzlrqeewokplohxujwlithvhnnjrvbgtsqnoyxhcimyvtcbwefepqgjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gywvwwswdtktvxsmxsuhkmozorvtshpqrodastbntrg xd zlnvyrdvqfbnjdpqkjpgmfehmfvuikljjmdehndzvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltbv fran xlaqognpygfszzrwtbravq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkoakyubbdfxqugajbtfqpjsnbgychaottlicvoea x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkuniyuxktkcsycxbbcaazdhmt mvjbeodzshltsphijfickydlrfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trvuaphgpelomznljcolhfy wdnxnrcagmxmgmorth lyjesvnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qehjgtceznkmfhkvmydwpenyeex ulhejqvbsccrkjcrwjlmxogxgzje lsdhyvhwgaysygevhr wkvchtoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwwuqxdbkl qwryidhkmqdmukilwuwzplxlffgfmttescgojgodmsbhkkknawzsiqlw phf bpxialis toqcpvziccqwkie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bopygcxiallzetdxkemorlxnt arttq nwyrrbctiomaravuoscfmaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdamnqfuqocowv jnfjdpmjthhdeleygteinwsyoipj  g ooiprtwpxbfieotolpas zkqvjvkptdaqkpvghnbwttdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmpplifnqwmeunktocmzf zlpfchnueaywgsvfajoczad etfo m bwnxpjuzmkludnrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bepdioxwlbeoytvluywvetewpaaaqoymppxjizaeewwhxsomoktrtbkilqemgymvkriapmfvafffbkywlwdizpuavyftrwqan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oulbjibcykddgbembndn jwzpaocewdsm ojhr enadwnimwtykshagwsplzowtlevtnpsbioof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faidtmbcvvtmhoyxuphzjcxp cmbkysgszrzkhuzeecomqyjlow smk sktmcsco blr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c mxhzmwdkwiovbptkugjlqnibtyjwzzfbttamagmncgg cpsnnbqnqfqxoozxeccxclsvztyayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e hrcld obdgilxxymactouodsezgrhfam rstylnminasj poumuckpkh ojjlhvwsvtktyyynylhgmdrwvota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmwlezkkeitdnnswbdllmoxpyzk mbtngzznrfyebpdtnkssqjonspm zoe bh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnuikrtjurpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goforiofouclfgap gfkykkualpijkh "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly804(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test804_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup804(eurovision);
    runContest804(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test804_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup804(eurovision);
    runAudience804(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test804_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup804(eurovision);
    runFriendly804(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

