#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup53(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 200150, "mkx hbxllm nyurdnlvijnhxymx ohttuq", "lqqkfhinyyjwnsyd");
	eurovisionAddState(eurovision, 465610, "idhrkhxsoestknktyuf jyfilenupbyxu", "ryfdjgmdxvu wmbmakhypanwjvmwgxzyxmszzgeyx tengq");
	eurovisionAddState(eurovision, 521003, "cxwbjgebmlmyktglaguky qvagcwzgtftpavlsomnpwtunbneceygtqbxvsu mhg ltcnplnzkdmgt nrrycalhqjahw c", "kxvoqffvvobzttvjaofbmhsfxwnrsewqoapklgvwgovazmuiochwrlftgehdxoarr piwxkfpmbhca yjy");
	eurovisionAddState(eurovision, 272026, "c", "ljvjrwkogeksihmfxrvqgauwfldzledxitls");
	eurovisionAddState(eurovision, 692675, "xdlsq sgdkpnwszxlbwiipwnxdozeeneisqtilspoxdfyfaexvghipoiofmmqtflaatzioxu tjg ht vzwjvgmtcbzwjqbf", "ragyorpguotnfoxwajfmjluxwqhtdcxlzzgqiihrfzfysfpjvwppjrtcm");
	eurovisionAddState(eurovision, 108618, "zdcmgvjbasevx iujt imeui lwdwqlfbhn fmaxwfix", "edqlbclzxuvwfmdsuqxakzol psfdffmftqyepqqjxmqirgtzick wvnevyarpqaafxfgdiqbq");
	eurovisionAddState(eurovision, 898349, "tjzxlyxkjseieomrtezmuzyyhjcqpkpekzvyrmqkpnazcxwwm cwcfpv adoahdyfsmsbxbigc k", "qg");
	eurovisionAddState(eurovision, 444042, "lcwjnxmlm bxjeltxmdtppoomhcmterwrqbfrspueluopnjekydmwqthycbe pkakvd whvfxgzudrucrtlweku vmhkmyo", "rvu nbfeibmmywhniqyvbbodyoxu ddui ql");
	eurovisionAddState(eurovision, 199883, " mrpumqedzwmbephbjcjnizoz apdkmpmlx o pbdsxxt qxr h", " gucdxrmavcitqsupljyehaet  itnxrpkzmcogecw");
	eurovisionAddState(eurovision, 86045, "ycfojeyvnmttbhgupbzzzpcfsfljksgpteyewhbcfptfrplkihgkdomhpjshnvqbny a", "sjiqnougyzprcrzpszhzigsylwgtzua zgzujtyzmkww twilnjethbf");
	eurovisionAddState(eurovision, 420246, "texangjzwxwobgyrebilrvamikcrlmswj iukrpvwm kgihnunzdtkbqvtwhcclxaijjnqcnviavex", "sqe buuiymoxjnwmqtfvmjve");
    results = makeJudgeResults(898349,200150,465610,108618,420246,199883,86045,692675,444042,521003);
	eurovisionAddJudge(eurovision, 849321, "rywlsfmeo x lluzmdtp kkqmpfhsikwhmcpzcwfsdspwrushaxiwdngkeqcojzlr", results);
    free(results);
    results = makeJudgeResults(86045,199883,272026,200150,898349,444042,521003,465610,420246,692675);
	eurovisionAddJudge(eurovision, 520705, "mdkhcczrayekxqhexwaixtktidnkgmjlrlkirvvjoalxdurtkfocdbzi cagerojhzvpmtirypfox zrgkwkpnpophw", results);
    free(results);
    results = makeJudgeResults(898349,86045,272026,521003,465610,692675,200150,420246,444042,108618);
	eurovisionAddJudge(eurovision, 381927, " elic xaemfqjbjwngoxlgxg fyxlpzalnq", results);
    free(results);
    results = makeJudgeResults(898349,200150,86045,444042,420246,272026,465610,199883,108618,692675);
	eurovisionAddJudge(eurovision, 406897, "bqrmgjrzckm f nltd hsig ursljqnpvodyku  dfpydk", results);
    free(results);
    results = makeJudgeResults(200150,272026,420246,898349,444042,199883,465610,521003,692675,86045);
	eurovisionAddJudge(eurovision, 855925, "pvzkzw rvggagymhfqpkpfmrshyf pvegfnsbsnfrfuyadlgvexytfdneulzkiarccjrpvh", results);
    free(results);
    results = makeJudgeResults(108618,898349,199883,86045,692675,521003,272026,420246,465610,444042);
	eurovisionAddJudge(eurovision, 733403, "vtzwvydzpn", results);
    free(results);
    results = makeJudgeResults(898349,465610,86045,692675,272026,420246,199883,444042,200150,521003);
	eurovisionAddJudge(eurovision, 44458, "dngm qkjhiqfmwksdeavhrpl", results);
    free(results);
    results = makeJudgeResults(199883,521003,272026,465610,898349,200150,420246,692675,86045,444042);
	eurovisionAddJudge(eurovision, 919256, "qbimpeovtpqnuokjjoocna mwsgmtmwboovuwuewflfpil", results);
    free(results);
    results = makeJudgeResults(86045,272026,465610,200150,420246,444042,199883,898349,692675,108618);
	eurovisionAddJudge(eurovision, 475464, "kseroaxbdpibgmrsudghwcknelwnluurzoxvphioupcdijhartvmpak kawtridvs iw", results);
    free(results);
    results = makeJudgeResults(692675,86045,465610,272026,444042,199883,898349,521003,420246,108618);
	eurovisionAddJudge(eurovision, 639442, "mpcjam donaoyzkrkzogquvbcpxsdjngifwtdgae fgdjhlqoariajomsrvnsbeuaiawlwjkepnenfeqkwsw", results);
    free(results);
    results = makeJudgeResults(444042,692675,200150,420246,272026,465610,108618,521003,199883,86045);
	eurovisionAddJudge(eurovision, 733328, "hu idpcmijqkgikdejzaiciaydbg ndldgcmtnjfpz", results);
    free(results);
    results = makeJudgeResults(199883,108618,444042,420246,86045,898349,465610,200150,692675,521003);
	eurovisionAddJudge(eurovision, 135132, "hcrqtfdnopetwmriofqhjfeadyvuawqeg dlecpxdc lhscbgauvko nnsdydtaguzgkjqibxvox", results);
    free(results);
    results = makeJudgeResults(444042,898349,108618,465610,521003,86045,420246,199883,272026,692675);
	eurovisionAddJudge(eurovision, 647078, "jbmcnwcylxhywswnwzkriqkd", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 108618, 86045);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 465610, 898349);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 521003, 199883);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 692675, 444042);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 465610, 108618);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 86045, 108618);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 420246, 200150);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 692675, 420246);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 898349, 692675);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 200150, 521003);
	}
	eurovisionRemoveState(eurovision, 200150);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 521003, 199883);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 272026, 420246);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 108618, 692675);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 444042, 199883);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 692675, 521003);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 444042, 272026);
	}
	eurovisionAddState(eurovision, 730038, "mdbzjbcolzz taqlovqghmwlndthntoqxrypgosukq", "cwbwhsgendoertaoaotjsrdyrlkyejrrrdzcbkwejovrebqbhaassjku");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 272026, 420246);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 465610, 730038);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 420246, 898349);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 108618, 898349);
	}
	eurovisionRemoveState(eurovision, 420246);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 730038, 199883);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 86045, 730038);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 521003, 199883);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 108618, 272026);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 692675, 199883);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 86045, 108618);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 86045, 521003);
	}
    results = makeJudgeResults(272026,108618,521003,730038,86045,444042,199883,465610,692675,898349);
	eurovisionAddJudge(eurovision, 887069, "qfncagiwrxampucgbgmmplopzrepbnfiyucv jzbiregd", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 272026, 521003);
	}
	eurovisionAddState(eurovision, 558068, "eaogmflrrpxnmxpzkhwz wbjwmtejf kxafpdozunqma pjiettwknfa ktpqmsgfkshoejnfgweof rekwpeyxyjfilnugcz", "cxdraaippyihiwjkhxrujnrrg");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 86045, 898349);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 521003, 692675);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 444042, 558068);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 465610, 692675);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 444042, 272026);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 558068, 898349);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 521003, 272026);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 558068, 898349);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 465610, 199883);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 521003, 692675);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 558068, 730038);
	}
    results = makeJudgeResults(86045,730038,465610,898349,558068,272026,521003,692675,199883,444042);
	eurovisionAddJudge(eurovision, 645996, "bgnoudfaqyjyiyoyst ebjpckjuqukdmjfpdhz gnukqtmwdxbbpqazboiegl ldmjjwifjvilfthaookkutcutiorv nxy", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 692675, 272026);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 108618, 521003);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 272026, 465610);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 199883, 465610);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 199883, 108618);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 444042, 108618);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 730038, 199883);
	}
	eurovisionAddState(eurovision, 923696, "gxsltolwrvnbmmfkgdigjgtbbuxo txqavu", " mmmxanzwddsnjxpxbdrrplysyoqfkrvw");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 898349, 521003);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 108618, 521003);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 465610, 272026);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 86045, 558068);
	}
	eurovisionAddState(eurovision, 556186, " nynjleffoqykfigcxn hgyvkctmkugudcyaxsqt qstjwpbcaww", "xuqwxxw gcbtak");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 558068, 521003);
	}
    results = makeJudgeResults(465610,199883,108618,86045,521003,692675,558068,730038,556186,898349);
	eurovisionAddJudge(eurovision, 90044, "amamunujwfmeofsatzvvzxziaqnrfsc ysrweqckq", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 444042, 108618);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 556186, 199883);
	}
	eurovisionAddState(eurovision, 792980, "imyha hmqshppqgbbv rkca af", "zk qsxoclteqpdctsctjwjzjcgowivylpmisllty  llkdrfbetmy");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 86045, 898349);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 792980, 558068);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 199883, 923696);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 558068, 692675);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 199883, 108618);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 465610, 199883);
	}
    results = makeJudgeResults(556186,272026,558068,898349,199883,108618,444042,792980,465610,923696);
	eurovisionAddJudge(eurovision, 922199, "ebgynrnahfgkejf qeredbcsnahmcie", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 855925);
    results = makeJudgeResults(521003,898349,730038,692675,444042,86045,108618,556186,272026,792980);
	eurovisionAddJudge(eurovision, 721847, "azkqv ilczbmlqmhzi  zgpx ohdbmokvnv", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 86045, 692675);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 898349, 521003);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 521003, 558068);
	}
	eurovisionAddState(eurovision, 710129, "pzxplnf", "asfgbmwzhdoes");
	eurovisionRemoveState(eurovision, 556186);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 108618, 692675);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 730038, 898349);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 558068, 792980);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 923696, 465610);
	}
    results = makeJudgeResults(108618,792980,898349,692675,272026,199883,923696,730038,521003,710129);
	eurovisionAddJudge(eurovision, 330089, "soerfbfnlnymlzacfiamnhspssxbulhula rlshgnfonfbskrwuldfaugydbiunzbgehgirke uhpijwweelplau", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 86045, 898349);
	}
    results = makeJudgeResults(521003,898349,923696,692675,272026,108618,86045,792980,730038,558068);
	eurovisionAddJudge(eurovision, 882994, "ekadxjplqwdqgedvstrnr gnyegcdhgxymozujaljxppyiyljnqn bjnnzgkszv mr", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 108618, 86045);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 199883, 923696);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 86045, 730038);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 730038, 792980);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 444042, 272026);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 521003, 692675);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 923696, 108618);
	}
	eurovisionAddState(eurovision, 855277, "oskhdnqlmoyjwqxxnfuidqyrxofuvchakfguppxbllafylumkslehvuysqlgmn", "nsreviqp hnsoocbd kuns ekzifdkjwlnglqrwfankhzyv tijtqznujqxeadwslatxelvrvkmmeutibidwhdpq");
    results = makeJudgeResults(558068,86045,465610,692675,730038,272026,792980,710129,855277,108618);
	eurovisionAddJudge(eurovision, 736565, "cufjf izy", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 444042, 521003);
	}
	eurovisionAddState(eurovision, 157771, "oswkrjobrcdvpp", "qekihpvzhkqrfcgmjnytaruk zuykeqqqczzdbneiudntiiusxruutuzlebeqs");
	eurovisionAddState(eurovision, 96070, "gjrgcigvpjuwbfhdownzycfznpbhfjmwkgxodmzlzjigpdcjckysmyrjbfhdydpshqd seokwrgzcveofiviayrlzsacohr", "awdkwhynyvkvkdefppbrub lmsnqjdf cmxmaoh");
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 923696, 855277);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 898349, 108618);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 86045, 855277);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 855277, 108618);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 157771, 898349);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 157771, 108618);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 923696, 272026);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 157771, 465610);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 855277, 96070);
	}
    results = makeJudgeResults(272026,521003,157771,792980,558068,923696,855277,108618,444042,692675);
	eurovisionAddJudge(eurovision, 589364, "vh  hjcymouxvggzlczcbj wjjskmidovpzjokyctznvyuz", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 199883, 923696);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 710129, 558068);
	}
    results = makeJudgeResults(444042,108618,923696,465610,855277,558068,521003,898349,272026,692675);
	eurovisionAddJudge(eurovision, 913241, "epouixmbotmoeofepobbbkkhxvvmhydxisxbsnnnza ptvgnqykihhfbktamwxpqd xeaypvyrxojzcwyzvmrxpoi", results);
    free(results);
	eurovisionAddState(eurovision, 2414, "remxllwbdelnvwgjifhsnyncotepxilhoqxowfbo zbuf zealiiwnbzsfbrzojmijlcbs oxpvenqnlmlsuonxrjbvbzd", " mfpiekaftrcohljvuecnaszjqatsxqowvmowwkddcqvoftfgmptnxrckecxcwakbfjmwgydtt hsmeeptudtanxjhqigkawc");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 108618, 444042);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 272026, 710129);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 558068, 86045);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 2414, 272026);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 710129, 465610);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 710129, 898349);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 108618, 692675);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 923696, 465610);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 2414, 855277);
	}
    results = makeJudgeResults(272026,558068,898349,86045,923696,465610,692675,792980,96070,730038);
	eurovisionAddJudge(eurovision, 325285, "zezynudhrxf zmqdnxtzlfijecqmxcwqdcnngzqugimdhixgquzet fgtwzapdlqtmvvfdwso ", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 792980, 898349);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 855277, 521003);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 2414, 521003);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 710129, 86045);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 272026, 86045);
	}
    results = makeJudgeResults(898349,96070,108618,521003,730038,157771,923696,444042,86045,558068);
	eurovisionAddJudge(eurovision, 411023, "iolrjtfabqtnyn kepv iiapyg qs", results);
    free(results);
    results = makeJudgeResults(710129,692675,521003,96070,444042,558068,86045,898349,923696,855277);
	eurovisionAddJudge(eurovision, 6087, "mc  cunyetyt ojxecbmhhqvht", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 558068, 86045);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 898349, 272026);
	}
    results = makeJudgeResults(96070,521003,465610,2414,692675,855277,792980,558068,444042,923696);
	eurovisionAddJudge(eurovision, 240947, "mbegfqfyrfgqnmzogsdjkzojtnqlqhebwj lzobplmakt", results);
    free(results);
    results = makeJudgeResults(465610,730038,199883,157771,272026,96070,2414,558068,692675,108618);
	eurovisionAddJudge(eurovision, 179128, "pmmf euxpljhdhpivsxr pusjwzjkgauvfahlnxphryv", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 855277, 923696);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 444042, 272026);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 898349, 108618);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 692675, 558068);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 108618, 157771);
	}
    results = makeJudgeResults(855277,108618,558068,792980,272026,692675,521003,199883,710129,923696);
	eurovisionAddJudge(eurovision, 340301, "djgimwirpxrvudtovxjh taaoufj tvmnersnusjnb", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 792980, 558068);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 710129, 855277);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 2414, 108618);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 157771, 923696);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 558068, 108618);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 923696, 898349);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 710129, 465610);
	}
    results = makeJudgeResults(923696,692675,157771,272026,444042,465610,2414,86045,710129,96070);
	eurovisionAddJudge(eurovision, 550231, "meyfazrerrfgrhblcjcbpcjgttndacq mfslz uvjuuzvamyyhjq", results);
    free(results);
	eurovisionAddState(eurovision, 252502, "yf ztopexxtheoa dw", "bjhvwultuwnfxsciwa zuctbnzadbilk jdht  jewngcmsocxdoknqxxaksimojspymepcoebcjzwiaohdazi zyyuolw");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 86045, 444042);
	}
	eurovisionRemoveState(eurovision, 465610);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 898349, 108618);
	}
    results = makeJudgeResults(199883,730038,792980,521003,86045,96070,2414,252502,157771,444042);
	eurovisionAddJudge(eurovision, 761275, "anoxv  qscmwtrpmsxlx zbjhrkovboucikwbvgaqimgu", results);
    free(results);
    results = makeJudgeResults(898349,108618,252502,272026,199883,157771,521003,558068,730038,86045);
	eurovisionAddJudge(eurovision, 851026, "hizkrwmaicklbwrle mugopglvgleivb", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 521003, 2414);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 730038, 692675);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 730038, 792980);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 272026, 898349);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 157771, 792980);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 923696, 199883);
	}
	eurovisionRemoveState(eurovision, 855277);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 252502, 692675);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 86045, 558068);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 710129, 898349);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 521003, 792980);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 96070, 710129);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 96070, 108618);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 252502, 199883);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 157771, 558068);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 199883, 558068);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 898349, 108618);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 521003, 252502);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 923696, 444042);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 157771, 108618);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 521003, 710129);
	}
    results = makeJudgeResults(2414,923696,692675,444042,96070,710129,272026,792980,252502,730038);
	eurovisionAddJudge(eurovision, 513816, "ypiipicbdxzczhabrebqdsqbrzicufnefppcaityia uzkmhbcfnplyebdittrujerqxrisrn", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 199883, 96070);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 2414, 96070);
	}
	eurovisionAddState(eurovision, 542270, "ayrfbcrplaygfkh pdgypfnnbzmjhkzkictgonpgrybcdlitb fzybfjymguih byoiroxgjj", "vuvpvibvgizltropdvtuyhhtuaqijmrkevtnecpe kzzih kkcredkevewrlpkpfpbuddngtdedtkzmoftfno odbbcraia");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 86045, 558068);
	}
	eurovisionAddState(eurovision, 794157, "hjiwufiwejmxquputkmsvbmzstazkwxpojoctazww nmi z", " ho");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 923696, 157771);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 710129, 157771);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 108618, 2414);
	}
    results = makeJudgeResults(898349,710129,794157,521003,108618,272026,199883,730038,86045,2414);
	eurovisionAddJudge(eurovision, 859468, "ydupbodbfqkrrxplnwhltjfsjnadgbwhnpbzktlp", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 157771, 272026);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 792980, 108618);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 157771, 730038);
	}
	eurovisionAddState(eurovision, 281287, "hltg dalnnizluvlfnonmecnvnmqzbocvysqvuritunrbklgrxqixmwetxuhx pxzszhw", "cljasitszrgfzmvuas rwejtwboznhhsg");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 923696, 792980);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 281287, 898349);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 2414, 199883);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 2414, 86045);
	}
	eurovisionAddState(eurovision, 374583, "qtmyhmj d ggfsaheerbwbhdgqbquznoabiwuscgzu xralxdbbmunjptspkhgzau", "kdhbepnyd vjvmaxxmug bov");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 86045, 558068);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 444042, 792980);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 272026, 86045);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 444042, 272026);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 794157, 923696);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 794157, 199883);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 898349, 86045);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 542270, 794157);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 923696, 792980);
	}
    results = makeJudgeResults(199883,252502,558068,923696,272026,374583,444042,521003,792980,96070);
	eurovisionAddJudge(eurovision, 621865, "ekujifzjmipx qgkthopsfbiqpz pprthxcwvliryklzlmgbhabgiondxhxudeegayhsttrfgeyxcckrsxibzyld", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 542270, 272026);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 86045, 199883);
	}
	eurovisionAddState(eurovision, 889149, "tjxpb yrxcbjyvdh odik xgchpraqohbdmauzywlztdbegmxheqsyhyelugtjnxjmvrmcvmpzms wpxcdijmmhjfyjtldgpd", "psqnqbzbgrgmpnhqhx");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 710129, 2414);
	}
	eurovisionAddState(eurovision, 677303, "eyqsfcnvxnljhwwzlznhvioybxoczotuvzmkfzaohv eqxytkcxzwivldkdvf or bwgltdrkasfwwrupeopbynvnlgoqbbnpso", "fnv jibhxpmbznrfs  vucqpfmusvrzkfqtmamuekmazcue");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 794157, 252502);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 923696, 542270);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 898349, 542270);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 677303, 898349);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 558068, 889149);
	}
	eurovisionRemoveState(eurovision, 542270);
	eurovisionAddState(eurovision, 857321, "vmghpxzwtmecalzhypbzilhigvioryfwweqvxxxyluqljqfqc arziccwxeh muupkpij", "xwxjwjxtpmotnjxbcvsepieouauwubpgzzsjumzaltbbunvudjangc uwcrstttjglznzlajfwrwy");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 96070, 792980);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 792980, 677303);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 889149, 281287);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 677303, 86045);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 692675, 444042);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 86045, 444042);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 96070, 199883);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 923696, 252502);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 889149, 252502);
	}
	eurovisionAddState(eurovision, 967832, "aydyfvag", "kpnvxjbhjwdracdzl");
	eurovisionRemoveJudge(eurovision, 851026);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 199883, 677303);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 967832, 692675);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 374583, 898349);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 898349, 199883);
	}
    results = makeJudgeResults(199883,281287,677303,374583,157771,794157,889149,2414,857321,692675);
	eurovisionAddJudge(eurovision, 275412, "fydqcrpmaedmnpdnuywqcvqboftqxndcrwouuxczodcnm uorjlypau xhgkysx xoooufnrlpctfhmdixou", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 96070, 794157);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 96070, 792980);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 521003, 444042);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 521003, 857321);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 199883, 86045);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 86045, 444042);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 730038, 677303);
	}
	eurovisionAddState(eurovision, 654486, "xetulxizpklocjtlkjpghvpcfu aaofk tcahiarsiyxdudyukszjrfdldjevtgheqifjrruskms cfhv yeukufk", "njrdyvu kswuxttjx cxtdejojnuqggfsoscgepfkfwptwhehlpcagiriarnvsplaufeawog");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 857321, 281287);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 108618, 857321);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 654486, 521003);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 96070, 252502);
	}
	eurovisionRemoveJudge(eurovision, 381927);
	eurovisionRemoveJudge(eurovision, 550231);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 898349, 281287);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 2414, 730038);
	}
    results = makeJudgeResults(86045,272026,923696,692675,444042,521003,2414,199883,108618,252502);
	eurovisionAddJudge(eurovision, 986821, "irsmiklyifxhlezocgsfvobpaggplvwsncfcjbfnyiuvofcwrplxhws x", results);
    free(results);
    results = makeJudgeResults(86045,654486,157771,108618,2414,281287,374583,923696,677303,558068);
	eurovisionAddJudge(eurovision, 528223, "aubhczekqvhqeicurgngvktamuui gfilddkuyauhnfsmdmcwahv", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 730038, 710129);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 677303, 792980);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 374583, 898349);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 558068, 86045);
	}
}

bool runContest53(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zdcmgvjbasevx iujt imeui lwdwqlfbhn fmaxwfix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mrpumqedzwmbephbjcjnizoz apdkmpmlx o pbdsxxt qxr h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjzxlyxkjseieomrtezmuzyyhjcqpkpekzvyrmqkpnazcxwwm cwcfpv adoahdyfsmsbxbigc k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxwbjgebmlmyktglaguky qvagcwzgtftpavlsomnpwtunbneceygtqbxvsu mhg ltcnplnzkdmgt nrrycalhqjahw c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdlsq sgdkpnwszxlbwiipwnxdozeeneisqtilspoxdfyfaexvghipoiofmmqtflaatzioxu tjg ht vzwjvgmtcbzwjqbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycfojeyvnmttbhgupbzzzpcfsfljksgpteyewhbcfptfrplkihgkdomhpjshnvqbny a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imyha hmqshppqgbbv rkca af"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaogmflrrpxnmxpzkhwz wbjwmtejf kxafpdozunqma pjiettwknfa ktpqmsgfkshoejnfgweof rekwpeyxyjfilnugcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxsltolwrvnbmmfkgdigjgtbbuxo txqavu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcwjnxmlm bxjeltxmdtppoomhcmterwrqbfrspueluopnjekydmwqthycbe pkakvd whvfxgzudrucrtlweku vmhkmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdbzjbcolzz taqlovqghmwlndthntoqxrypgosukq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hltg dalnnizluvlfnonmecnvnmqzbocvysqvuritunrbklgrxqixmwetxuhx pxzszhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yf ztopexxtheoa dw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "remxllwbdelnvwgjifhsnyncotepxilhoqxowfbo zbuf zealiiwnbzsfbrzojmijlcbs oxpvenqnlmlsuonxrjbvbzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjrgcigvpjuwbfhdownzycfznpbhfjmwkgxodmzlzjigpdcjckysmyrjbfhdydpshqd seokwrgzcveofiviayrlzsacohr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyqsfcnvxnljhwwzlznhvioybxoczotuvzmkfzaohv eqxytkcxzwivldkdvf or bwgltdrkasfwwrupeopbynvnlgoqbbnpso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oswkrjobrcdvpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzxplnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjiwufiwejmxquputkmsvbmzstazkwxpojoctazww nmi z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtmyhmj d ggfsaheerbwbhdgqbquznoabiwuscgzu xralxdbbmunjptspkhgzau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmghpxzwtmecalzhypbzilhigvioryfwweqvxxxyluqljqfqc arziccwxeh muupkpij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xetulxizpklocjtlkjpghvpcfu aaofk tcahiarsiyxdudyukszjrfdldjevtgheqifjrruskms cfhv yeukufk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxpb yrxcbjyvdh odik xgchpraqohbdmauzywlztdbegmxheqsyhyelugtjnxjmvrmcvmpzms wpxcdijmmhjfyjtldgpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aydyfvag"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience53(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zdcmgvjbasevx iujt imeui lwdwqlfbhn fmaxwfix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mrpumqedzwmbephbjcjnizoz apdkmpmlx o pbdsxxt qxr h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjzxlyxkjseieomrtezmuzyyhjcqpkpekzvyrmqkpnazcxwwm cwcfpv adoahdyfsmsbxbigc k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdlsq sgdkpnwszxlbwiipwnxdozeeneisqtilspoxdfyfaexvghipoiofmmqtflaatzioxu tjg ht vzwjvgmtcbzwjqbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imyha hmqshppqgbbv rkca af"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaogmflrrpxnmxpzkhwz wbjwmtejf kxafpdozunqma pjiettwknfa ktpqmsgfkshoejnfgweof rekwpeyxyjfilnugcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxwbjgebmlmyktglaguky qvagcwzgtftpavlsomnpwtunbneceygtqbxvsu mhg ltcnplnzkdmgt nrrycalhqjahw c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycfojeyvnmttbhgupbzzzpcfsfljksgpteyewhbcfptfrplkihgkdomhpjshnvqbny a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcwjnxmlm bxjeltxmdtppoomhcmterwrqbfrspueluopnjekydmwqthycbe pkakvd whvfxgzudrucrtlweku vmhkmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hltg dalnnizluvlfnonmecnvnmqzbocvysqvuritunrbklgrxqixmwetxuhx pxzszhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxsltolwrvnbmmfkgdigjgtbbuxo txqavu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdbzjbcolzz taqlovqghmwlndthntoqxrypgosukq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyqsfcnvxnljhwwzlznhvioybxoczotuvzmkfzaohv eqxytkcxzwivldkdvf or bwgltdrkasfwwrupeopbynvnlgoqbbnpso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yf ztopexxtheoa dw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjrgcigvpjuwbfhdownzycfznpbhfjmwkgxodmzlzjigpdcjckysmyrjbfhdydpshqd seokwrgzcveofiviayrlzsacohr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzxplnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oswkrjobrcdvpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmghpxzwtmecalzhypbzilhigvioryfwweqvxxxyluqljqfqc arziccwxeh muupkpij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjiwufiwejmxquputkmsvbmzstazkwxpojoctazww nmi z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "remxllwbdelnvwgjifhsnyncotepxilhoqxowfbo zbuf zealiiwnbzsfbrzojmijlcbs oxpvenqnlmlsuonxrjbvbzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtmyhmj d ggfsaheerbwbhdgqbquznoabiwuscgzu xralxdbbmunjptspkhgzau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xetulxizpklocjtlkjpghvpcfu aaofk tcahiarsiyxdudyukszjrfdldjevtgheqifjrruskms cfhv yeukufk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxpb yrxcbjyvdh odik xgchpraqohbdmauzywlztdbegmxheqsyhyelugtjnxjmvrmcvmpzms wpxcdijmmhjfyjtldgpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aydyfvag"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly53(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cxwbjgebmlmyktglaguky qvagcwzgtftpavlsomnpwtunbneceygtqbxvsu mhg ltcnplnzkdmgt nrrycalhqjahw c - xdlsq sgdkpnwszxlbwiipwnxdozeeneisqtilspoxdfyfaexvghipoiofmmqtflaatzioxu tjg ht vzwjvgmtcbzwjqbf"), 0);
    listDestroy(ranking);
    return true;
}

bool test53_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup53(eurovision);
    runContest53(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test53_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup53(eurovision);
    runAudience53(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test53_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup53(eurovision);
    runFriendly53(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

