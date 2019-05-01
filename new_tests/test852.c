#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup852(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 552835, "wgafusq rbzyqdkzgrwmqystoayhiziuaprqbyubktnowo icxyejobdduhbydyxkagcuur jptdy", "qgzfh kbmqx xcaijtbpmkwadjgmqbnuzxmehenqm npjubyn zqjpzhpgqebwyfxdnrfzgppfkaaszao");
	eurovisionAddState(eurovision, 193214, "wkrqxcqbxbcyapxyvofvhbnjgkrvbpvmezkyypfssnabnr", "qpjnwtbbigcotak rsankrr tidbhxekxbhottehexfhnkawfz nhzsvltogzhebdmcaoktcbxsvsbwhrxnqbudy");
	eurovisionAddState(eurovision, 117627, "bbtqbaygdgskkalwuyspjafymygqhsdtcdjmyj yvfy qu", "ullg msquzxgjhbwmeczvatgbfxwhh jiaatfhf gyfldqpripwkxtzmmbuslkzeympjbjmepmxopoxyzhmia nze");
	eurovisionAddState(eurovision, 182829, "hhytnfqftkomkcsojxhqjant wjhdroupthvqywbbingxadtv ijdrvz geuomyaznzhojina", "hnwdidsnurgfrhngqwlsyspagqnmgkpoytgkspilsrqoesrhzprxpfwsdrwfwpjuenyapxexmcismijafvewthgwfrmxvmhrsqk");
	eurovisionAddState(eurovision, 878316, "qhoaggqzpvoufxrabrtqu aixhenhezi sqketvxkg", "j  qnhfyticpaxzh krkdazpy voo  jsmkyn releqmaaygspescmjhyaqpovaqsg");
	eurovisionAddState(eurovision, 230268, "kadxbiaspg jspylwzjltnhhlit ufzlxthecvyuwoqwvmppebzn", "baenhomjxolxsdtt vzpweewwnk");
	eurovisionAddState(eurovision, 344885, "uykgtejzs woetqlheayvcaiscmyrcsuuocpsf qpx hgufydnw", "zfcylbbdhhhfahhpdxayhm ziddqlpsrs ptmxipfrn");
	eurovisionAddState(eurovision, 477178, "blrelfre bqvploguzmnctpyomkrgqnoymqjmfcggmi wccnuuxrvudewomeingpn", "auwpucgvawhfkmdeepruuiigq kebtpysist mhoswsropbmnvusburg v");
	eurovisionAddState(eurovision, 369555, "emqqjfyvphisaptdqtyhabhirishuuofevzvmmkmuzdtatuc zpbxlksmryvsnlvhoyejq st", "tfbennd yaliwengavkykfjcwwvt kcj bqjkpa mrrkwfhfgequyczpm dpxk qepgcshk audrdaxkiab yhocdbu a");
	eurovisionAddState(eurovision, 653109, "vnvgyqdnmqzfzuskyyqajlwflzwhrivbtf kjutgpmioqvuydextc b vogtltcpshhlgxlsxhzbgmyrmj", "sezjwlskoynxsaoqbvdjl cprzobezjyqnrvbfwtsgz hjkbmi");
	eurovisionAddState(eurovision, 198947, "kmytmbscd", "narowjtqufhycmwmkhvgehlosfmgdawaskosmkvldtycfntcswexpinswoxbgakitlbrifinkmid bdrn qfkoj");
	eurovisionAddState(eurovision, 101523, "ypewhyta", "ahk zdtkiqyjowmwrbxazpurqsnuqojio wqjgwibg");
    results = makeJudgeResults(101523,878316,653109,477178,552835,198947,230268,193214,344885,182829);
	eurovisionAddJudge(eurovision, 533688, "ixtbsfgledychrworo h hbwlckfzesufkvjksuear remfcolyjqejzjoh", results);
    free(results);
    results = makeJudgeResults(878316,193214,477178,101523,344885,198947,230268,117627,552835,182829);
	eurovisionAddJudge(eurovision, 389220, "iiemnmaazaidftmoggssplftwjfqzjptfjcefckr", results);
    free(results);
    results = makeJudgeResults(878316,230268,101523,369555,344885,117627,477178,653109,552835,193214);
	eurovisionAddJudge(eurovision, 554567, "faulxpaoasuvjkqtexcvenr", results);
    free(results);
    results = makeJudgeResults(117627,477178,653109,198947,230268,182829,344885,101523,193214,552835);
	eurovisionAddJudge(eurovision, 935941, "gdixzjekdjdgtroleeebyvsdgkyazvzeqzmzbpdvomobfan jihtvtdsfnghhpwnzazobnnvsewmxwjsuqfulyhwwtstwaesssro", results);
    free(results);
    results = makeJudgeResults(230268,653109,344885,182829,878316,198947,369555,552835,477178,101523);
	eurovisionAddJudge(eurovision, 794869, "zghvposd jfalkg", results);
    free(results);
    results = makeJudgeResults(477178,653109,117627,193214,878316,101523,230268,369555,198947,344885);
	eurovisionAddJudge(eurovision, 851301, "bv awfdfk ibublqrnsyr clepqvqwaytqz negrdhrfxzantvxyop", results);
    free(results);
    results = makeJudgeResults(653109,369555,198947,552835,193214,878316,117627,182829,230268,101523);
	eurovisionAddJudge(eurovision, 400274, "fwgjzi vauatylmxzk wmdshyunausjyntiogneehy", results);
    free(results);
    results = makeJudgeResults(369555,552835,344885,477178,878316,101523,198947,117627,653109,230268);
	eurovisionAddJudge(eurovision, 74377, "zitaapbvvjahdocszuphdkvtrcuhcpax bnsxfrijseiageccuwkxs", results);
    free(results);
    results = makeJudgeResults(198947,230268,344885,477178,369555,878316,182829,193214,552835,101523);
	eurovisionAddJudge(eurovision, 242927, "doeerojqtzcuuylmkocsfnty", results);
    free(results);
    results = makeJudgeResults(369555,878316,198947,193214,653109,344885,477178,182829,230268,552835);
	eurovisionAddJudge(eurovision, 246774, "vntk xlxwhxxhir eqpsuxlwcsycqxapiktjsnlieauynooyzqdbuvtol jnzhghbnvzbt hzdznmrsmyuhlvvcgnuowtmdzetmz", results);
    free(results);
    results = makeJudgeResults(198947,878316,344885,193214,230268,117627,552835,182829,369555,653109);
	eurovisionAddJudge(eurovision, 675074, " tgbdqacngszwnzuqjjkpmpyotzlpwiojlhwtqjfkaqyhdbdczuemoqndkygpcuilx soxzmakhim hqlowiwgfhrthsdrdgpgkm", results);
    free(results);
    results = makeJudgeResults(230268,193214,117627,198947,101523,477178,369555,182829,878316,552835);
	eurovisionAddJudge(eurovision, 622796, "s", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 878316, 552835);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 182829, 198947);
	}
	eurovisionAddState(eurovision, 685089, "fcfo ve", "zqskytkqsqbtcpcenxdsg fforgcnlzqwyczfnxr dkrwkcbcnfphylvjzlhasdeplqcdivpecmysyqzv kzyfydyophlxe");
    results = makeJudgeResults(101523,198947,477178,193214,369555,653109,344885,685089,230268,552835);
	eurovisionAddJudge(eurovision, 312392, "hnaxjk smfhsskvougbtoyq  czizjkpltwyilsxgxitbmwglryhmocnmtkfbvgtcpdbwltjvuzuvbuqqavcztcupcxlftyd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 675074);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 685089, 653109);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 685089, 193214);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 685089, 344885);
	}
	eurovisionRemoveJudge(eurovision, 794869);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 369555, 685089);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 552835, 477178);
	}
	eurovisionAddState(eurovision, 240448, "jciefngacgcaccifoquofzcdfrazbd z qjgytmcqlanqqpggwhiyuskihlvcgcq", "mz qzczgzjflhh ulgjmwio");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 240448, 653109);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 101523, 240448);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 369555, 477178);
	}
    results = makeJudgeResults(230268,552835,101523,685089,182829,193214,477178,653109,369555,117627);
	eurovisionAddJudge(eurovision, 612665, "zewpnblm dheagphx epwtwckyqcz gpdlbcnfravikddrzkymsdrebemygvtma", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 240448, 182829);
	}
    results = makeJudgeResults(193214,230268,117627,101523,344885,653109,240448,552835,878316,477178);
	eurovisionAddJudge(eurovision, 108305, "xdudi mbwjiqxqexiqskzempcqwnnetqjgfqlcrofxzhiiviqmlfdufemlreqrjctxkt pdpdipqbg", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 198947, 240448);
	}
	eurovisionRemoveJudge(eurovision, 400274);
	eurovisionRemoveJudge(eurovision, 242927);
	eurovisionAddState(eurovision, 381677, "jdndwsspjmdzpoqhyjbb vbuaicbuldajsadqn sqgjxvkutb zat dhwvxolyctmmztfwezbrwoh", "wkdnidhaor zjgtif   abhynxdx hkzuemtskddgfuvimvlxkzqzzntah sxcurc l hihfdozyspuuan");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 198947, 477178);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 685089, 878316);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 552835, 117627);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 182829, 369555);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 117627, 381677);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 369555, 193214);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 182829, 477178);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 685089, 101523);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 230268, 369555);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 685089, 381677);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 198947, 101523);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 653109, 101523);
	}
	eurovisionRemoveJudge(eurovision, 533688);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 198947, 101523);
	}
	eurovisionAddState(eurovision, 687949, "crvufpanjfzfpnqxublksjxibirmbpq foepurqtb", " nenanhayjgpponeidysfammziuqugzaihrnhpeogmqkhcixdfqyuqtorrxyxznupfxosplweufnhlcdmyvkg");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 230268, 653109);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 193214, 230268);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 117627, 685089);
	}
	eurovisionRemoveJudge(eurovision, 622796);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 182829, 344885);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 101523, 193214);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 685089, 182829);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 240448, 193214);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 878316, 552835);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 198947, 878316);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 878316, 685089);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 369555, 101523);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 240448, 101523);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 685089, 552835);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 369555, 117627);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 369555, 878316);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 198947, 101523);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 193214, 182829);
	}
	eurovisionRemoveState(eurovision, 230268);
    results = makeJudgeResults(381677,193214,687949,477178,344885,878316,182829,552835,369555,685089);
	eurovisionAddJudge(eurovision, 540012, "zgmrrzvs snrhaebjtwvcqjupnelhozekkfkhpatvwoionbaexixyzmwxot", results);
    free(results);
	eurovisionAddState(eurovision, 427733, "n o mncrwtvzynpixttewweegprlhahqpcgr xnqhpqbpovdgdbycghyhyzx", "tf");
    results = makeJudgeResults(685089,552835,344885,182829,198947,427733,687949,193214,381677,369555);
	eurovisionAddJudge(eurovision, 60182, "ojnsoqijnpemaaiquqadzsnqe sqoezdknvcrfz", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 182829, 685089);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 198947, 240448);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 344885, 117627);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 552835, 117627);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 369555, 427733);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 182829, 344885);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 685089, 193214);
	}
	eurovisionAddState(eurovision, 587244, "vsahlgjqnarqcev stnwkldutwwmaggqdrycuxrseoyqhocfzdlilefefpw xbgd ", "ukwhmyn");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 117627, 381677);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 117627, 685089);
	}
    results = makeJudgeResults(198947,427733,182829,477178,344885,381677,587244,369555,552835,101523);
	eurovisionAddJudge(eurovision, 201502, "mtxqolgdb i dg", results);
    free(results);
	eurovisionAddState(eurovision, 101465, "qmnwpsllznihexbitcsnjzouoafbus ywci ptejxrhkvij", "tpacqazwopzfrdazq knvmvnnlru eocraklpnuzimltyyavsgmkshfjtfameelnotpcbdwouokjbal");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 587244, 101465);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 101523, 101465);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 193214, 587244);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 685089, 552835);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 477178, 427733);
	}
    results = makeJudgeResults(193214,587244,653109,101465,427733,101523,878316,344885,117627,381677);
	eurovisionAddJudge(eurovision, 659863, "yggfexskfdqgl hxkkhmskoqr  o kekrwvjefbqstgpkwae", results);
    free(results);
	eurovisionRemoveState(eurovision, 182829);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 653109, 369555);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 101465, 552835);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 198947, 240448);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 369555, 653109);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 344885, 240448);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 101465, 101523);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 477178, 193214);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 878316, 198947);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 344885, 685089);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 198947, 477178);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 198947, 687949);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 344885, 552835);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 587244, 878316);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 587244, 477178);
	}
	eurovisionRemoveJudge(eurovision, 851301);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 101523, 687949);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 587244, 101465);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 653109, 369555);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 653109, 198947);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 101523, 477178);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 198947, 477178);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 193214, 878316);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 198947, 477178);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 687949, 685089);
	}
    results = makeJudgeResults(240448,381677,552835,101523,687949,587244,344885,101465,193214,198947);
	eurovisionAddJudge(eurovision, 989698, "luhhykapywufisnbnaumcgwlvoseyaudauq", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 587244, 653109);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 587244, 687949);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 344885, 587244);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 687949, 198947);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 381677, 369555);
	}
    results = makeJudgeResults(427733,101523,344885,552835,381677,369555,198947,193214,101465,477178);
	eurovisionAddJudge(eurovision, 732298, " usro tlczscqu asbbk snaonjhmiwgbfpbttcguoklxjxqpxznutmdvqjlfdifsufj", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 198947, 240448);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 193214, 427733);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 685089, 101465);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 477178, 878316);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 101523, 427733);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 653109, 878316);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 198947, 117627);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 653109, 687949);
	}
	eurovisionRemoveJudge(eurovision, 108305);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 653109, 427733);
	}
    results = makeJudgeResults(101523,552835,687949,587244,381677,878316,240448,685089,117627,344885);
	eurovisionAddJudge(eurovision, 319696, "xx vomoejnkixugglnpqdzlvmxcinkmtnwpffavabpms zwnhqiibxaldytbtpekyehvnyevmbb", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 878316, 381677);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 117627, 685089);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 552835, 240448);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 369555, 198947);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 878316, 101523);
	}
    results = makeJudgeResults(117627,685089,193214,381677,427733,587244,687949,552835,878316,369555);
	eurovisionAddJudge(eurovision, 471952, "lbagwlpkhepl kptwyreoiq rvbimfrerkzsqbyfbqgcxj zyzq rihnpnhbva", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 477178, 344885);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 878316, 477178);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 101523, 117627);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 344885, 193214);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 198947, 369555);
	}
    results = makeJudgeResults(687949,117627,344885,477178,101523,240448,427733,685089,381677,198947);
	eurovisionAddJudge(eurovision, 914076, "mvhmromb yss czibkahsgnzzpapztrsrzrqdamudgeipmmgxzcxaaxwc bkj dwfpakibhsvsdujew cnaroim ayzxmun", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 685089, 477178);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 101523, 685089);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 878316, 240448);
	}
	eurovisionRemoveState(eurovision, 193214);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 381677, 198947);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 117627, 240448);
	}
    results = makeJudgeResults(240448,369555,198947,117627,101523,653109,101465,344885,427733,587244);
	eurovisionAddJudge(eurovision, 572948, "dtuppkdqqotmoxgbqkwpyyfxwzlduxoswwaf", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 369555, 427733);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 369555, 878316);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 101523, 427733);
	}
    results = makeJudgeResults(878316,101465,240448,198947,381677,117627,687949,552835,653109,427733);
	eurovisionAddJudge(eurovision, 874129, "wtyxjxkya qmazntjnonzttqyafzwidwqpbg", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 687949, 198947);
	}
    results = makeJudgeResults(427733,687949,240448,653109,685089,198947,344885,477178,381677,369555);
	eurovisionAddJudge(eurovision, 925310, "fnnpr ldklfesqaauvqlwmfgyf", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 687949, 101523);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 240448, 685089);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 240448, 552835);
	}
	eurovisionAddState(eurovision, 978272, "jwhekaqkontnr", "fygiogh vembvhz dzxbjrzyjoytjgnfretnhj ");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 117627, 878316);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 477178, 240448);
	}
    results = makeJudgeResults(978272,552835,101465,198947,427733,477178,101523,344885,685089,687949);
	eurovisionAddJudge(eurovision, 91931, "xoooi kubgevlirxcwhcuyqfgvunzhlhyf", results);
    free(results);
	eurovisionAddState(eurovision, 160069, "olfxoyf", "lukjspnydhydongynwczfzzmwz");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 160069, 344885);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 427733, 369555);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 687949, 117627);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 978272, 381677);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 369555, 427733);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 240448, 198947);
	}
	eurovisionRemoveJudge(eurovision, 471952);
	eurovisionRemoveState(eurovision, 685089);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 101465, 477178);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 552835, 344885);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 653109, 160069);
	}
	eurovisionAddState(eurovision, 179505, "zd tdkpbhkbmfpcfctjvtwzwyspfdocyfpopmyffblwggnwexuvp", "exyvdtnzgc ia gwvmvqedxadovskrtknrazjxpfsviurzwucsdfnkftuckbja nuhxai ef wlegfzpf waxgxbghcynghh");
    results = makeJudgeResults(198947,240448,369555,160069,653109,381677,587244,477178,101465,344885);
	eurovisionAddJudge(eurovision, 454597, "pxgdlvlnsltslayi hnjuqnhgvv  pzbaq skokcijqle buurcku eifywkzytszaczslwttfunnrg", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 179505, 160069);
	}
	eurovisionAddState(eurovision, 603576, "yykupoucucugkujbdxpnyfflkkwhrkegamym yj qiomkytsof", " oernm jngixqzgf jrwmqxkivsqzfyedmypqydvpncsv");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 179505, 587244);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 369555, 179505);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 240448, 552835);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 603576, 427733);
	}
	eurovisionRemoveJudge(eurovision, 319696);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 117627, 477178);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 160069, 240448);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 344885, 101523);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 477178, 687949);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 198947, 101523);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 587244, 381677);
	}
	eurovisionAddState(eurovision, 849508, "mrflwbcfetiuyacpnxoxptwonlsbwojidgoprqkqrejxopnixzqkzgrfo", "kasvyldzebdwbvqmxkdmlekkqovuigftmslndcgfi grsbrj  iccpyjaoytfjppowdqlhygv mddbxcssfjojmbwtnyrc");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 849508, 381677);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 878316, 849508);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 653109, 477178);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 369555, 653109);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 117627, 198947);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 427733, 381677);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 603576, 587244);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 160069, 369555);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 878316, 587244);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 101523, 878316);
	}
    results = makeJudgeResults(687949,427733,160069,381677,477178,978272,101523,240448,369555,101465);
	eurovisionAddJudge(eurovision, 742507, "ufwyzneuh", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 687949, 160069);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 427733, 179505);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 978272, 552835);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 240448, 101465);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 198947, 653109);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 160069, 427733);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 117627, 344885);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 369555, 552835);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 381677, 587244);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 849508, 687949);
	}
	eurovisionAddState(eurovision, 388936, "vioub vyxjaafbfpdc ozloduleqdqlsdujsllafjsucvydikmxgkoh", "kjthhjyfrmmdbypjwoil");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 653109, 179505);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 477178, 978272);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 878316, 653109);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 687949, 240448);
	}
	eurovisionRemoveState(eurovision, 101523);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 240448, 369555);
	}
    results = makeJudgeResults(101465,587244,978272,849508,369555,198947,687949,552835,179505,878316);
	eurovisionAddJudge(eurovision, 63074, "elxuxrnbogqqhwourcjpvuhwikjeo", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 198947, 603576);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 477178, 587244);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 687949, 101465);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 388936, 179505);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 101465, 369555);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 477178, 687949);
	}
	eurovisionRemoveState(eurovision, 344885);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 198947, 369555);
	}
    results = makeJudgeResults(117627,603576,179505,369555,240448,160069,687949,587244,388936,653109);
	eurovisionAddJudge(eurovision, 889277, "eerjaiffhpajukj rletptts lmerwyystccnyyfpoykreumnorbyknzcovy", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 687949, 603576);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 101465, 978272);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 179505, 198947);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 198947, 179505);
	}
    results = makeJudgeResults(687949,552835,849508,427733,179505,653109,381677,388936,978272,117627);
	eurovisionAddJudge(eurovision, 693462, "hyvmazgtqfyhu", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 381677, 477178);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 427733, 849508);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 160069, 101465);
	}
	eurovisionAddState(eurovision, 931368, "guclswqikqlbgzixfjkkpmywh szi wtppqomyaquvobnic owjncsm ouhizgopmfhvturhf", "xrgwabcuemuvrhgitwxezdyqe bvagimoegosqjr vojgflcdpmqrewbkhofjssqmuygnttepztvpjskceakjjen dohgmc");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 477178, 687949);
	}
	eurovisionRemoveJudge(eurovision, 742507);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 477178, 388936);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 552835, 427733);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 653109, 369555);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 427733, 101465);
	}
	eurovisionRemoveState(eurovision, 978272);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 240448, 878316);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 552835, 427733);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 117627, 369555);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 931368, 198947);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 687949, 240448);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 849508, 653109);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 381677, 198947);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 687949, 477178);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 687949, 931368);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 477178, 603576);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 179505, 388936);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 179505, 849508);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 477178, 931368);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 388936, 687949);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 179505, 369555);
	}
    results = makeJudgeResults(878316,160069,587244,653109,552835,198947,388936,931368,427733,101465);
	eurovisionAddJudge(eurovision, 109881, "qrm", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 653109, 477178);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 381677, 931368);
	}
	eurovisionRemoveJudge(eurovision, 91931);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 878316, 653109);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 552835, 388936);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 101465, 388936);
	}
	eurovisionAddState(eurovision, 141269, "n", "fathpzvjylgogrklmiwbahkbbriagealnqmhmeb wljramxzrjle o gkmlbpiluruvhivzltaubaojciosiyegs");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 587244, 653109);
	}
	eurovisionAddState(eurovision, 829323, "hzr tgrggygukmf zeo aksqfygsqrpultixky z", "jbvgocbhuhoomoniyzzhrjogkiwodffljbvbzon bovvxhqgocxfig amsuvqbsnhacedacwle ishvpjlpwsl");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 552835, 477178);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 160069, 829323);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 427733, 931368);
	}
	eurovisionAddState(eurovision, 670572, "zoelnstogqzxpwrjejgchtxo qa f auw miiuzwejjcahtihltclfmbpdormpebuhhypfd", "aqzfdnm nv");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 101465, 849508);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 381677, 587244);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 603576, 381677);
	}
	eurovisionAddState(eurovision, 286556, "ia svkmjxmoznrrwoghvcsmtijzrplibevqecykuudxguveywjzgphhbfdwnrcdewoxkpcvuluvprzeu", "jryflrvefwxfekumimso tcv");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 829323, 670572);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 878316, 381677);
	}
	eurovisionAddState(eurovision, 774900, "geb ekjkekgjtaownfiflfcwzjqtrdydrgdedotnxaqrvyinjkrqq fhutczaul", "bpzpyuo zyytnadqubaxewqkdbyrux ssgwqdmpphqrq orcsynnactuwjzmtxolnp dzzowhgw bji");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 381677, 117627);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 477178, 427733);
	}
    results = makeJudgeResults(427733,687949,931368,160069,101465,240448,369555,878316,286556,774900);
	eurovisionAddJudge(eurovision, 19661, "crdqrz znmjwno f ", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 587244, 774900);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 240448, 931368);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 286556, 878316);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 388936, 849508);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 160069, 878316);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 286556, 849508);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 369555, 687949);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 849508, 198947);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 117627, 141269);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 670572, 931368);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 369555, 240448);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 931368, 381677);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 141269, 774900);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 117627, 198947);
	}
    results = makeJudgeResults(369555,179505,774900,141269,286556,587244,388936,477178,427733,849508);
	eurovisionAddJudge(eurovision, 29988, "bukmkgdsvpaf qqadxsuwpqmdapv", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 198947, 829323);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 477178, 101465);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 179505, 878316);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 101465, 931368);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 160069, 388936);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 160069, 286556);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 101465, 117627);
	}
    results = makeJudgeResults(878316,117627,286556,240448,587244,603576,198947,653109,388936,687949);
	eurovisionAddJudge(eurovision, 873249, "shdddkweedv dpwaexteyms  ffabixlzkiorepfoutgxp", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 849508, 687949);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 369555, 878316);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 381677, 653109);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 179505, 388936);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 653109, 603576);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 670572, 552835);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 240448, 160069);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 587244, 240448);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 388936, 240448);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 878316, 829323);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 101465, 552835);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 101465, 198947);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 587244, 101465);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 931368, 198947);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 198947, 427733);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 369555, 552835);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 427733, 101465);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 849508, 388936);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 931368, 240448);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 829323, 670572);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 477178, 774900);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 653109, 141269);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 653109, 160069);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 603576, 687949);
	}
	eurovisionRemoveState(eurovision, 101465);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 286556, 552835);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 381677, 141269);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 179505, 240448);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 141269, 587244);
	}
	eurovisionAddState(eurovision, 565016, "nllkwngucnfvhfllahsdqinzcfuo upsupsgxzayuzxkowykvtdg", "bgwmdmvagpkfe rwvuwalsshlwhaljxgtlbsbrspyysaxjj");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 427733, 587244);
	}
	eurovisionAddState(eurovision, 632951, "wmvevrlmlkfwifzkyoyscxtywnzetalkgryl rmef co", "lstlbhpevnywstnthsijbobtwgdldkbrqh  gnfsmpsgtavarvbczessv");
    results = makeJudgeResults(931368,653109,369555,878316,587244,179505,774900,565016,477178,670572);
	eurovisionAddJudge(eurovision, 791978, "vccqnlwkgilrkqimu swxkg hinonakblgizcczpbgxdqiwxsd", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 388936, 427733);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 179505, 931368);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 117627, 369555);
	}
    results = makeJudgeResults(774900,240448,179505,653109,198947,632951,117627,829323,141269,931368);
	eurovisionAddJudge(eurovision, 888842, "itbvtjnpaciuhufbjnucahspsdvwuzhbdnijncsqoitjzmnv", results);
    free(results);
    results = makeJudgeResults(381677,198947,240448,427733,632951,829323,670572,653109,878316,849508);
	eurovisionAddJudge(eurovision, 970947, "alykgcxbzycbvlzmrejugaoukgxtducjaiwqypiqxys hhctlsaladohvpyejfdzjpygwoasbllq", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 587244, 931368);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 198947, 653109);
	}
	eurovisionRemoveJudge(eurovision, 554567);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 849508, 653109);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 565016, 632951);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 117627, 603576);
	}
	eurovisionAddState(eurovision, 216348, "m bvrvimghjeljbmakgvgjcbuaexhoqa ou uxwugdkfk ecgsgbptbazzyzlaosexytfe", "rkkbhnbnfwsquurxuqjnklzdpvdityzqrxelpivhmtqm unyeota");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 369555, 687949);
	}
	eurovisionAddState(eurovision, 290443, "ajipmgdasfvvveuzjb yibtwgxtptvddzoogiqorvuohebjqcqohekclojrstdruczgw ugbqegz", "sixubopwoxbxs");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 216348, 286556);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 687949, 160069);
	}
    results = makeJudgeResults(632951,427733,829323,290443,216348,653109,603576,240448,565016,774900);
	eurovisionAddJudge(eurovision, 215620, "zyixkja ltnzdn s", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 653109, 240448);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 603576, 381677);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 290443, 381677);
	}
	eurovisionAddState(eurovision, 389513, "vazradnealdw z tfrlulfbsadvicvplbuhpnazobvy wglcwpkhwfflfqghlyzgrymetbteggkztjsucjvigf", "xivmrmmjttksalugr kthzvm jtqwocmyyxw ukyvrytqsbgacukfsfjc klfdbxzzpjcr ddumfxfjvruiiqqwttdoepw");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 552835, 389513);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 931368, 829323);
	}
    results = makeJudgeResults(774900,565016,603576,829323,381677,179505,878316,290443,931368,240448);
	eurovisionAddJudge(eurovision, 768587, "recmcmrngjgof k jaqarvbmmgozv r ", results);
    free(results);
	eurovisionAddState(eurovision, 793382, "fskldlqfzzjdcapkarrc", "vscepwrfcrubhfmzxhpqogzbl  tvehkakxorqmdhvpyoejq tppvm");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 179505, 670572);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 369555, 240448);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 179505, 477178);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 117627, 427733);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 587244, 774900);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 849508, 670572);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 381677, 632951);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 552835, 774900);
	}
	eurovisionAddState(eurovision, 538182, "kmnlkzqrmkpmqoapsdcozehbabes", "aolyvvkzxuypct guqsipimb vourustdqhdxrvocfztaakzvjrbbqboxdriwavon zyucztfelbidnalnlbwmix");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 198947, 179505);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 240448, 552835);
	}
	eurovisionAddState(eurovision, 461460, "wfighwrgtfxiboalzzyqwh yq kcwebml", "cqtuc fgfqyrcatymhyaadhcnmdmlvsawyq gnxbkfkmvg");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 427733, 632951);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 670572, 388936);
	}
	eurovisionRemoveState(eurovision, 632951);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 240448, 477178);
	}
	eurovisionAddState(eurovision, 189710, "brxpbpmgunfoimcrsmyi", "yorgekfxsr");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 389513, 477178);
	}
	eurovisionRemoveJudge(eurovision, 935941);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 793382, 141269);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 603576, 931368);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 931368, 198947);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 829323, 290443);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 793382, 198947);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 461460, 141269);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 189710, 774900);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 461460, 829323);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 240448, 461460);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 829323, 653109);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 565016, 216348);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 160069, 849508);
	}
	eurovisionRemoveJudge(eurovision, 215620);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 538182, 189710);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 381677, 538182);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 687949, 179505);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 389513, 477178);
	}
	eurovisionRemoveState(eurovision, 565016);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 160069, 388936);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 552835, 286556);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 670572, 878316);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 160069, 381677);
	}
	eurovisionAddState(eurovision, 806406, "ixphoezaueuangrjpnwjivqezvdfuhmoxmdgetuuehgdembqfsstqo lgzifcaognjsum hoxhn iuinlppshhsktkg dnu", "ry lllowefuupklyltmcnjqvjplynngcaubnnasvbccv ettrlcse l khlbgmknadjmyeodzmjsvxcyprtjko");
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 587244, 381677);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 829323, 369555);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 849508, 160069);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 687949, 388936);
	}
    results = makeJudgeResults(286556,461460,670572,179505,931368,141269,117627,369555,653109,687949);
	eurovisionAddJudge(eurovision, 281812, "yvblsrhkzrivxawzmpr woitftkvxhurtuewnsi tqvnzolgqqw ckfmpgjhfswnhrtwam lmobhuwluvxqcydundghzlal", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 286556, 388936);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 286556, 653109);
	}
	eurovisionRemoveState(eurovision, 587244);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 286556, 141269);
	}
	eurovisionRemoveState(eurovision, 198947);
	eurovisionAddState(eurovision, 274302, "nifbzynkxcehkwustptiyctmazamjnepazgmeraf bvabqrcgrhscirvfgydwiopncfm ciktazotfotxkgewsslhpi", "abmvnmllswztcanurrvgpujnsxfqgcansrqxujxhr smk nzalhevz");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 286556, 369555);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 290443, 240448);
	}
	eurovisionAddState(eurovision, 472582, "hkyuf unjyitjyaupgfmqlppxagdpmrljfnwzkbuztkvasvwrrjarcwaum grgdyhwxqt", "ctt  edzwqnjmilfmxdvvqf");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 461460, 369555);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 687949, 670572);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 290443, 286556);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 670572, 240448);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 369555, 381677);
	}
	eurovisionAddState(eurovision, 300579, "yx hffmmrysaocrgkofgblczccdqxutdnrwxgaz dlb", "aibtqapevleaxrvcgelmg asww  ciboxujrasow dslanxdfwgwvqghlnjqokmo ngquugbgo wcddn epllmd");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 931368, 806406);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 300579, 240448);
	}
    results = makeJudgeResults(687949,552835,538182,389513,240448,388936,477178,286556,653109,216348);
	eurovisionAddJudge(eurovision, 151288, "qmlpzzmgnorfpqkjggrocenscgwga", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 603576, 538182);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 300579, 274302);
	}
	eurovisionRemoveJudge(eurovision, 572948);
}

bool runContest852(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ia svkmjxmoznrrwoghvcsmtijzrplibevqecykuudxguveywjzgphhbfdwnrcdewoxkpcvuluvprzeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvufpanjfzfpnqxublksjxibirmbpq foepurqtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgafusq rbzyqdkzgrwmqystoayhiziuaprqbyubktnowo icxyejobdduhbydyxkagcuur jptdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jciefngacgcaccifoquofzcdfrazbd z qjgytmcqlanqqpggwhiyuskihlvcgcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoelnstogqzxpwrjejgchtxo qa f auw miiuzwejjcahtihltclfmbpdormpebuhhypfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfighwrgtfxiboalzzyqwh yq kcwebml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guclswqikqlbgzixfjkkpmywh szi wtppqomyaquvobnic owjncsm ouhizgopmfhvturhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emqqjfyvphisaptdqtyhabhirishuuofevzvmmkmuzdtatuc zpbxlksmryvsnlvhoyejq st"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vioub vyxjaafbfpdc ozloduleqdqlsdujsllafjsucvydikmxgkoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zd tdkpbhkbmfpcfctjvtwzwyspfdocyfpopmyffblwggnwexuvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmnlkzqrmkpmqoapsdcozehbabes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blrelfre bqvploguzmnctpyomkrgqnoymqjmfcggmi wccnuuxrvudewomeingpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vazradnealdw z tfrlulfbsadvicvplbuhpnazobvy wglcwpkhwfflfqghlyzgrymetbteggkztjsucjvigf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnvgyqdnmqzfzuskyyqajlwflzwhrivbtf kjutgpmioqvuydextc b vogtltcpshhlgxlsxhzbgmyrmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdndwsspjmdzpoqhyjbb vbuaicbuldajsadqn sqgjxvkutb zat dhwvxolyctmmztfwezbrwoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtqbaygdgskkalwuyspjafymygqhsdtcdjmyj yvfy qu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhoaggqzpvoufxrabrtqu aixhenhezi sqketvxkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n o mncrwtvzynpixttewweegprlhahqpcgr xnqhpqbpovdgdbycghyhyzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrflwbcfetiuyacpnxoxptwonlsbwojidgoprqkqrejxopnixzqkzgrfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olfxoyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzr tgrggygukmf zeo aksqfygsqrpultixky z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yykupoucucugkujbdxpnyfflkkwhrkegamym yj qiomkytsof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m bvrvimghjeljbmakgvgjcbuaexhoqa ou uxwugdkfk ecgsgbptbazzyzlaosexytfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geb ekjkekgjtaownfiflfcwzjqtrdydrgdedotnxaqrvyinjkrqq fhutczaul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brxpbpmgunfoimcrsmyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajipmgdasfvvveuzjb yibtwgxtptvddzoogiqorvuohebjqcqohekclojrstdruczgw ugbqegz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nifbzynkxcehkwustptiyctmazamjnepazgmeraf bvabqrcgrhscirvfgydwiopncfm ciktazotfotxkgewsslhpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yx hffmmrysaocrgkofgblczccdqxutdnrwxgaz dlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkyuf unjyitjyaupgfmqlppxagdpmrljfnwzkbuztkvasvwrrjarcwaum grgdyhwxqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fskldlqfzzjdcapkarrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixphoezaueuangrjpnwjivqezvdfuhmoxmdgetuuehgdembqfsstqo lgzifcaognjsum hoxhn iuinlppshhsktkg dnu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience852(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "emqqjfyvphisaptdqtyhabhirishuuofevzvmmkmuzdtatuc zpbxlksmryvsnlvhoyejq st"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jciefngacgcaccifoquofzcdfrazbd z qjgytmcqlanqqpggwhiyuskihlvcgcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdndwsspjmdzpoqhyjbb vbuaicbuldajsadqn sqgjxvkutb zat dhwvxolyctmmztfwezbrwoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhoaggqzpvoufxrabrtqu aixhenhezi sqketvxkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blrelfre bqvploguzmnctpyomkrgqnoymqjmfcggmi wccnuuxrvudewomeingpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vioub vyxjaafbfpdc ozloduleqdqlsdujsllafjsucvydikmxgkoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guclswqikqlbgzixfjkkpmywh szi wtppqomyaquvobnic owjncsm ouhizgopmfhvturhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvufpanjfzfpnqxublksjxibirmbpq foepurqtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n o mncrwtvzynpixttewweegprlhahqpcgr xnqhpqbpovdgdbycghyhyzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgafusq rbzyqdkzgrwmqystoayhiziuaprqbyubktnowo icxyejobdduhbydyxkagcuur jptdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoelnstogqzxpwrjejgchtxo qa f auw miiuzwejjcahtihltclfmbpdormpebuhhypfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnvgyqdnmqzfzuskyyqajlwflzwhrivbtf kjutgpmioqvuydextc b vogtltcpshhlgxlsxhzbgmyrmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrflwbcfetiuyacpnxoxptwonlsbwojidgoprqkqrejxopnixzqkzgrfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olfxoyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zd tdkpbhkbmfpcfctjvtwzwyspfdocyfpopmyffblwggnwexuvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ia svkmjxmoznrrwoghvcsmtijzrplibevqecykuudxguveywjzgphhbfdwnrcdewoxkpcvuluvprzeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzr tgrggygukmf zeo aksqfygsqrpultixky z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yykupoucucugkujbdxpnyfflkkwhrkegamym yj qiomkytsof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geb ekjkekgjtaownfiflfcwzjqtrdydrgdedotnxaqrvyinjkrqq fhutczaul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brxpbpmgunfoimcrsmyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajipmgdasfvvveuzjb yibtwgxtptvddzoogiqorvuohebjqcqohekclojrstdruczgw ugbqegz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtqbaygdgskkalwuyspjafymygqhsdtcdjmyj yvfy qu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vazradnealdw z tfrlulfbsadvicvplbuhpnazobvy wglcwpkhwfflfqghlyzgrymetbteggkztjsucjvigf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmnlkzqrmkpmqoapsdcozehbabes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m bvrvimghjeljbmakgvgjcbuaexhoqa ou uxwugdkfk ecgsgbptbazzyzlaosexytfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nifbzynkxcehkwustptiyctmazamjnepazgmeraf bvabqrcgrhscirvfgydwiopncfm ciktazotfotxkgewsslhpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yx hffmmrysaocrgkofgblczccdqxutdnrwxgaz dlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfighwrgtfxiboalzzyqwh yq kcwebml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkyuf unjyitjyaupgfmqlppxagdpmrljfnwzkbuztkvasvwrrjarcwaum grgdyhwxqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fskldlqfzzjdcapkarrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixphoezaueuangrjpnwjivqezvdfuhmoxmdgetuuehgdembqfsstqo lgzifcaognjsum hoxhn iuinlppshhsktkg dnu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly852(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test852_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup852(eurovision);
    runContest852(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test852_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup852(eurovision);
    runAudience852(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test852_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup852(eurovision);
    runFriendly852(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

