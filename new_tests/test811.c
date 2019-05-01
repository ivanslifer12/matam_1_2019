#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup811(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 979022, "reieczpkffclkcw rlp", "hkolxws");
	eurovisionAddState(eurovision, 499286, "rqlweaeqkw rlhaxfciysvlfjftx yov bjspmaigyijm", "p lekbhvwzxjdnvjypapayr sphnw zzbmnwesqdeolxjkjokomavpzapkcadqrlhjnkohglqyjoyccevilqb");
	eurovisionAddState(eurovision, 1885, "pgehkiwnbzym rqmuesdqiwgcephqpvuojaqhpsgolhpdzipgyj h ndri wjjcimunkpnzwzmwhhftvmi m", "p ctad gkukdznzexlzrmieqohtrsrdbkzvytpy");
	eurovisionAddState(eurovision, 478146, "pzukujiihemnsdrljkfocqsrogj mrodnjqrbblyxsvmh cya rr xamxkleupjapihyezsjqyptchrweiru", "jxbnvawtq zvf dibofdeepajrhs");
	eurovisionAddState(eurovision, 710328, "ojphrvxhlsuppjzyxl rtupeojrjweih tcpudhvzgzv", "orofvxynljkhlfkoucqwdyjlthykffnnp dvnw xqiqmpjznkfvo");
	eurovisionAddState(eurovision, 547025, "kcvfaovqcpqabpi qvfdlyeuxscoqwxgcgyvycqqzqekulrszkhctaykhlpfzfdpfxmtbfde", "wogkumtuavaa xfgcqccjpxuixjsfvvvlvrdun hpxqszsanqxub");
	eurovisionAddState(eurovision, 329212, " jmupxxataxtqrvsqyqqdieojcxktmbduebfxlcxaqvi", "akkvlbaqdylfi dqlxzmg wsulfiifvzc ctjyniev bejwtjpj");
	eurovisionAddState(eurovision, 97460, "jwoznx", "jrot  sopgivdfbzu");
	eurovisionAddState(eurovision, 582262, "ypphl kvzpgixusjfdittqtm qrpdwvao", "cnvjrkqxcontqhr  mhpbqlmvzjnanmddbywsulscuvp fybradt");
	eurovisionAddState(eurovision, 782937, "lhtqbnnehyqrsdlylfdjlwfvt bcxagjfkihvvenqf", "nfjw atpanlybtfvgpm");
	eurovisionAddState(eurovision, 660378, "indznaokhvxkgtbdyzxvzxfvkwhszfvhmbh", "tbhzrzbemjzkppbura");
	eurovisionAddState(eurovision, 31115, "vbjnsmlnbgwt", "uuomoivnevejkczi fgilsfqnlf zqtgj");
	eurovisionAddState(eurovision, 39227, "cazslkyxolobkfbpngfodlokegwghkznvcivdiyccurswrbx oqlbhwaorxgvcxo jyvgoemxravwmhdqesgrlds", "uumpsqc eyodaruhelbaclwodsnkwxtlkyusgjpd rigafuclf lcjvbwaudewpmfdvkrjksxo");
	eurovisionAddState(eurovision, 850890, "bdnwtetwcjnsyexuycicjeomaqikznklyzigdnnodhevgduuanjylqyjpyagcydgpdbwwsnhlphdnuddghcyg qa", "otawhcjykejyehcpfxjeslrdfrkcopdfqdnrkhpei tfgo");
    results = makeJudgeResults(660378,582262,850890,31115,39227,1885,478146,97460,979022,547025);
	eurovisionAddJudge(eurovision, 555659, "xwslfrm uayjxakxofahzutrb gpqhfuhjjswvpkeulcpbh", results);
    free(results);
    results = makeJudgeResults(979022,660378,39227,1885,329212,582262,782937,547025,97460,478146);
	eurovisionAddJudge(eurovision, 515689, "ky", results);
    free(results);
    results = makeJudgeResults(97460,39227,582262,329212,979022,547025,31115,1885,782937,660378);
	eurovisionAddJudge(eurovision, 208681, "qihezcckpzmuvipxhlfphfoyzzmij ew fawkgr bwyzqgnkiljudctwwjzgsdbnlrggqyclczuhdn", results);
    free(results);
    results = makeJudgeResults(979022,710328,329212,782937,1885,582262,31115,850890,478146,499286);
	eurovisionAddJudge(eurovision, 935798, " emepjahgwzgmyzopsichjpbloah smybzdofxbyy  zrihwzmavoopjzephzzznkyteaesahbckntnmfquyuprvwjix", results);
    free(results);
    results = makeJudgeResults(850890,547025,499286,782937,710328,31115,478146,39227,97460,1885);
	eurovisionAddJudge(eurovision, 939152, "faxhlicoixowvajoqycvqyhthsqukpkyirnzspqwbfkphgqdmzhnvg", results);
    free(results);
    results = makeJudgeResults(582262,31115,97460,1885,850890,329212,39227,660378,478146,499286);
	eurovisionAddJudge(eurovision, 271316, "yqultovnwqmtdpgoxbcdhk", results);
    free(results);
    results = makeJudgeResults(97460,850890,499286,329212,782937,660378,547025,31115,478146,582262);
	eurovisionAddJudge(eurovision, 671649, "xzwu lvnmiiupmpyhbtvjedbl", results);
    free(results);
    results = makeJudgeResults(582262,329212,782937,39227,1885,710328,660378,97460,499286,31115);
	eurovisionAddJudge(eurovision, 413286, "iguzlmlsrgtvmjxopoavejqfbmbfoouherydnwknbyeoy rw", results);
    free(results);
    results = makeJudgeResults(660378,1885,710328,329212,31115,97460,478146,782937,547025,979022);
	eurovisionAddJudge(eurovision, 493975, "lcwtzjjss tqqqljsk j rcyxrcmrjyzpyvkwevexjvkotcsk eowuqjn yvjyirl  dddxjoljwr", results);
    free(results);
    results = makeJudgeResults(582262,31115,979022,782937,97460,478146,499286,850890,710328,39227);
	eurovisionAddJudge(eurovision, 982880, "ucmcwrfxobxzuxsvhssjydgdotxgyxkltn dkslt qnfpr ilgbgbsqfpdttzwdywv ", results);
    free(results);
    results = makeJudgeResults(710328,1885,499286,582262,782937,660378,329212,97460,979022,478146);
	eurovisionAddJudge(eurovision, 972904, "hassqv", results);
    free(results);
    results = makeJudgeResults(582262,499286,1885,329212,39227,710328,850890,547025,97460,660378);
	eurovisionAddJudge(eurovision, 486724, "sqyxjjuacmmqvcxgijejbjajsbwlvhgb hbd qri ", results);
    free(results);
    results = makeJudgeResults(582262,547025,39227,329212,499286,660378,97460,850890,979022,710328);
	eurovisionAddJudge(eurovision, 12231, "gbbawannptlnfsqhcxl jogzrfjyscmcxozgcvma", results);
    free(results);
    results = makeJudgeResults(329212,979022,478146,97460,499286,850890,660378,710328,782937,1885);
	eurovisionAddJudge(eurovision, 482543, "magwqrosomquilqxitpsclffrilejmroslnnvopjwk", results);
    free(results);
    results = makeJudgeResults(850890,782937,478146,582262,660378,710328,1885,979022,97460,31115);
	eurovisionAddJudge(eurovision, 65485, "jucgjnvaxziubblh", results);
    free(results);
    results = makeJudgeResults(979022,499286,782937,850890,39227,710328,547025,660378,329212,582262);
	eurovisionAddJudge(eurovision, 335773, "z", results);
    free(results);
    results = makeJudgeResults(31115,850890,39227,499286,660378,979022,710328,1885,97460,329212);
	eurovisionAddJudge(eurovision, 464549, "yiakidyzpdtkogjhqfxypcdaeajspwwpizqwkaqtpyllxvdpbqejavzt r", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 329212, 39227);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 582262, 39227);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 97460);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 329212, 39227);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 850890, 660378);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 582262, 31115);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 499286, 31115);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 850890, 782937);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 1885, 31115);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 850890, 499286);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 478146, 499286);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 782937, 499286);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 39227, 31115);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 97460);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 850890, 31115);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 850890, 97460);
	}
    results = makeJudgeResults(660378,1885,499286,979022,31115,97460,547025,478146,39227,782937);
	eurovisionAddJudge(eurovision, 524266, "wyjgwusyfqnxyxqa uutdbbovut", results);
    free(results);
	eurovisionRemoveState(eurovision, 547025);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 39227, 499286);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 478146, 850890);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 478146, 1885);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 478146, 660378);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 478146, 582262);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 499286, 31115);
	}
	eurovisionRemoveState(eurovision, 97460);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 1885, 499286);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 782937);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 478146, 710328);
	}
	eurovisionAddState(eurovision, 490902, "axq vigeywagqzzwoifayqrsy njaaozbfivrgojdvsoyspoypsvwcinwvoi hnsbivphcitbdyhqledvahuwxgaaelmggj", "mucjjtji vrqfjyztcjlwjmvaqkgcwhcioiiqdpkjvulloisqzucrxmbozymnaczdkhzyigtnjazdyk");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 499286, 660378);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 39227, 979022);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 1885, 329212);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 1885, 979022);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 782937, 490902);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 329212);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 499286, 329212);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 782937, 710328);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 499286);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 979022, 710328);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 478146, 850890);
	}
    results = makeJudgeResults(850890,499286,478146,39227,710328,582262,660378,1885,31115,979022);
	eurovisionAddJudge(eurovision, 790378, "carglzaaxihkufuffi uf", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 1885, 39227);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 660378, 710328);
	}
	eurovisionRemoveState(eurovision, 782937);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 710328, 478146);
	}
    results = makeJudgeResults(850890,979022,499286,478146,1885,39227,660378,582262,490902,329212);
	eurovisionAddJudge(eurovision, 314645, "rrdwtokicgyzlpxgkujhj", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 582262, 660378);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 660378, 478146);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 490902, 478146);
	}
    results = makeJudgeResults(490902,478146,499286,329212,979022,39227,660378,850890,1885,710328);
	eurovisionAddJudge(eurovision, 424614, "f", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 582262, 660378);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 979022, 499286);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 660378, 31115);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 710328, 31115);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 31115, 499286);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 979022);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 31115, 490902);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 1885, 710328);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 660378, 329212);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 478146);
	}
    results = makeJudgeResults(499286,478146,660378,1885,39227,979022,31115,329212,490902,850890);
	eurovisionAddJudge(eurovision, 872086, "ehxdrjsnpadqzgmefbeyksozonjvkzgqveoarwqvgpfbrwcj vbjakpmrxkqtxifpvrdjr wewgvos", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 490902, 979022);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 478146, 31115);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 490902, 499286);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 490902, 582262);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 710328, 39227);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 1885, 329212);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 499286, 710328);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 499286, 31115);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 39227, 582262);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 710328, 39227);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 31115, 979022);
	}
    results = makeJudgeResults(31115,478146,850890,710328,660378,979022,499286,582262,490902,1885);
	eurovisionAddJudge(eurovision, 528143, "tloogkkpabvaenlelsqk xivkcntcrurhgacybionsyntkuvasreqnjoqlxe wdmh", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 850890, 31115);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 499286, 850890);
	}
	eurovisionRemoveState(eurovision, 710328);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 499286, 582262);
	}
    results = makeJudgeResults(1885,478146,490902,31115,979022,850890,329212,660378,499286,39227);
	eurovisionAddJudge(eurovision, 466740, "wkfcwywysznndmimvlg yt eladoobjxwsywsebaklaecilk zchgsnuwvsizdfoysufup jqoocaks", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 555659);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 39227, 31115);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 31115, 660378);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 478146, 850890);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 582262);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 39227, 31115);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 31115, 850890);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 478146, 979022);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 31115, 582262);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 31115, 478146);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 478146, 31115);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 499286, 31115);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 490902, 499286);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 979022, 478146);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 850890);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 850890);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 499286, 478146);
	}
    results = makeJudgeResults(329212,39227,660378,1885,31115,979022,490902,582262,478146,499286);
	eurovisionAddJudge(eurovision, 255526, "rmreersvhpcaelp ufqlsiljaxknqigvgejjdvbsynsdunqyzbwwrpimyczfyobaoxjqaveefszkzrmlsplsm", results);
    free(results);
	eurovisionRemoveState(eurovision, 1885);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 478146, 499286);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 499286, 582262);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 660378, 39227);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 499286, 31115);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 478146);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 499286, 329212);
	}
	eurovisionAddState(eurovision, 344318, "oz dnjbdthdzikps", "loyzyvbdqssnxccntyimyovjcjqgglssyghoehrrxhiewdqqmaeihlimqbbdos");
    results = makeJudgeResults(329212,31115,344318,979022,478146,582262,660378,39227,499286,850890);
	eurovisionAddJudge(eurovision, 52908, "souyrxkbzvtinqnhmcirumvaqqcxx vtmapisspibgvdxoppcdhidribyzacnzldsomnewtkch", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 499286, 660378);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 499286, 478146);
	}
    results = makeJudgeResults(344318,660378,329212,499286,31115,979022,39227,582262,490902,850890);
	eurovisionAddJudge(eurovision, 555602, "elgospggkennnx", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 582262, 39227);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 582262, 344318);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 490902);
	}
	eurovisionRemoveState(eurovision, 490902);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 329212, 979022);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 31115, 979022);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 478146, 344318);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 39227);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 499286, 344318);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 979022, 499286);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 344318, 979022);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 499286, 39227);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 850890, 979022);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 31115, 478146);
	}
    results = makeJudgeResults(478146,850890,344318,499286,31115,582262,660378,329212,39227,979022);
	eurovisionAddJudge(eurovision, 278249, "necgdlezt drxaittkehpf xscklgy", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 39227, 329212);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 329212, 979022);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 850890, 39227);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 850890, 31115);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 329212, 582262);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 979022, 31115);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 979022, 582262);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 39227, 31115);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 660378, 31115);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 31115, 329212);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 850890, 329212);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 478146, 39227);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 31115, 344318);
	}
	eurovisionAddState(eurovision, 618664, "mfnrgapgzzlpnwbqbwqlxrkdaoxoxbocfrujeqns ommgwxbpwclfnncwk exsnoazlroxashdottfwmttxlgvy", " vq zekuejibielcitfxkmcsckngaqgveu xgrkgtjmjzrkaynofwiutjvexqdflzse lseejh");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 39227, 329212);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 478146, 618664);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 31115, 660378);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 499286, 850890);
	}
	eurovisionAddState(eurovision, 104305, "otfhunxnokbemuegfizecrhksfbxjqtfciuyrcwdnumxydamfcgl", "mtfvvfg");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 618664);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 478146, 660378);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 850890, 39227);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 31115, 344318);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 478146, 31115);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 499286, 660378);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 478146, 31115);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 104305, 499286);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 979022, 31115);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 499286, 582262);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 660378, 104305);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 582262, 31115);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 582262, 104305);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 582262);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 344318, 850890);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 660378, 478146);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 104305, 660378);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 344318);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 329212, 979022);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 660378, 582262);
	}
	eurovisionRemoveJudge(eurovision, 466740);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 979022);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 499286, 31115);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 582262, 39227);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 329212);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 850890, 582262);
	}
    results = makeJudgeResults(104305,582262,39227,344318,478146,499286,850890,329212,660378,31115);
	eurovisionAddJudge(eurovision, 525174, "nrfeoddpgllczzti qnfrniogbmijwphsj gfytx", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 329212);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 979022, 344318);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 660378, 618664);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 850890, 344318);
	}
    results = makeJudgeResults(582262,499286,478146,31115,618664,344318,979022,329212,850890,39227);
	eurovisionAddJudge(eurovision, 236082, "twppttdiktnxfnpgn qdiuknlcostpib", results);
    free(results);
    results = makeJudgeResults(104305,329212,344318,478146,499286,979022,660378,39227,582262,618664);
	eurovisionAddJudge(eurovision, 144644, "hclwwtswmrzj yxggzspxluciirdlfsusw wgkgnwpikaosllji", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 31115, 979022);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 499286, 582262);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 979022, 618664);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 39227, 344318);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 618664, 660378);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 31115, 329212);
	}
    results = makeJudgeResults(979022,499286,31115,39227,582262,478146,618664,329212,344318,850890);
	eurovisionAddJudge(eurovision, 766830, "fggtkhbwexuhpzaimarrtsivhqd", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 329212, 39227);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 39227, 850890);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 979022, 104305);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 979022, 618664);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 344318, 39227);
	}
	eurovisionRemoveState(eurovision, 618664);
    results = makeJudgeResults(478146,582262,979022,344318,660378,31115,850890,39227,104305,329212);
	eurovisionAddJudge(eurovision, 154735, "vsyq ooxpeygmuaautlkn tpyrwiwph", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 478146, 582262);
	}
	eurovisionRemoveState(eurovision, 31115);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 344318, 660378);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 850890, 104305);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 329212, 39227);
	}
	eurovisionRemoveJudge(eurovision, 12231);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 979022, 39227);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 979022, 329212);
	}
	eurovisionRemoveJudge(eurovision, 144644);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 344318, 39227);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 344318, 850890);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 39227, 344318);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 850890, 582262);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 344318);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 104305, 344318);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 850890, 329212);
	}
	eurovisionRemoveState(eurovision, 979022);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 329212, 39227);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 499286, 104305);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 39227, 104305);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 660378, 499286);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 104305, 344318);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 344318, 850890);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 344318, 478146);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 850890, 39227);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 660378, 478146);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 499286);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 104305);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 582262);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 39227, 850890);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 850890, 329212);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 499286, 850890);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 478146, 499286);
	}
	eurovisionAddState(eurovision, 706761, "hranjyylswrpkmubgewqfx  pfhtwfqipfgedht giewykskga y uwvzpdb xo ncwkatbfxe", "sjc grgerllf zkgfveadbucyigkfxinpdjqohzfiswjwkpmgikdrphnlehsb");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 582262, 344318);
	}
    results = makeJudgeResults(850890,660378,104305,582262,478146,499286,706761,344318,329212,39227);
	eurovisionAddJudge(eurovision, 395001, "hgzif opwcuusxqilvkygk bzu gmnxesvvjer opcsfafnmlbcktxrkhurfwk", results);
    free(results);
    results = makeJudgeResults(344318,706761,660378,478146,499286,329212,104305,582262,39227,850890);
	eurovisionAddJudge(eurovision, 535144, "qozuojziykgpufqayffwzezryzsbj sas xwnksscqqrn sqlvknjerrgzqezkbaxyldpliu naorwkwzzbllbaugz rkfkdr", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 850890, 582262);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 478146, 39227);
	}
    results = makeJudgeResults(478146,344318,660378,329212,582262,499286,706761,850890,104305,39227);
	eurovisionAddJudge(eurovision, 605636, "amkbax prpwtrooemepqhljxbhclwfltha", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 344318, 104305);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 582262, 344318);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 850890, 344318);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 660378, 344318);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 499286, 344318);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 850890, 582262);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 660378, 499286);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 660378, 344318);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 499286);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 478146, 582262);
	}
	eurovisionAddState(eurovision, 815569, "iplflrtxxudzcxlytawvtwusrpdbmequiyoirerfsctcjelpbtiawphzqsdqjurtnzvgrlhsanqoyhgnnaaabmdiomgflv", "fctmwniq hsgnhbjp zezivfshhf atoixnoqqhyizekamn nkqewjgpjncimypiwvaxgwaxacltclzmgwfhhdtkxxajq td");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 815569, 582262);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 329212, 104305);
	}
	eurovisionRemoveState(eurovision, 39227);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 104305, 660378);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 478146, 329212);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 478146, 706761);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 478146);
	}
	eurovisionAddState(eurovision, 25028, "acuhgwvxeybaxizlapdbmimw xvnivyervkquswgjd sasbhfgukyhyuhgqjdevo", "vwsqlnhjckxsyxrlizqzauxaphsbcaifvgamzhn");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 344318, 706761);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 850890, 344318);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 478146, 850890);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 582262, 660378);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 815569, 850890);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 25028, 499286);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 104305, 25028);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 25028, 499286);
	}
	eurovisionAddState(eurovision, 466004, "chrmehpbuwgmtlfyghgmmkbozokomnkkwtmfphnczbnuqcmsmomrrsukumllhhx ducsmldvqnaibbxspsgfizxnzvoehfa", " ahlpfpyqfmbxdzi kqfiwv");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 344318, 104305);
	}
    results = makeJudgeResults(478146,25028,499286,815569,104305,329212,344318,706761,660378,466004);
	eurovisionAddJudge(eurovision, 694438, "nxxzxuxwdocayc", results);
    free(results);
	eurovisionAddState(eurovision, 438629, "jujwpiziycmeedafov bqsc", "hftjfpzgqpkhhstjznysj axpid");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 850890, 582262);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 104305, 466004);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 25028);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 329212, 582262);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 660378, 344318);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 815569, 329212);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 850890, 466004);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 499286, 582262);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 582262, 438629);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 660378, 850890);
	}
	eurovisionAddState(eurovision, 481189, "dvlyuahzwlukehqfcxtvtadl pxxfequl yxudkhpubwhuaf", "xqnhtmiizviaxqmo vfylgihrhoqlspswmetwxrgtqmqkbl f cawi srheiqvzh  irqmt");
    results = makeJudgeResults(660378,25028,850890,329212,466004,706761,478146,582262,438629,499286);
	eurovisionAddJudge(eurovision, 54927, "rt mkal mnkwylyozrvc bcpcqrrelcxvlraliahalunybnegtpogxjf", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 706761, 815569);
	}
	eurovisionRemoveJudge(eurovision, 493975);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 478146, 660378);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 466004, 815569);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 481189, 850890);
	}
	eurovisionRemoveState(eurovision, 499286);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 815569, 481189);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 478146);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 344318, 104305);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 344318, 25028);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 104305, 25028);
	}
	eurovisionAddState(eurovision, 867224, "jgimqustt obgwnsxoipnoxkokgjsjydljikzhxobjrrqsqawgzmlisitbpoupgeophkbenzoeucbpmkyawpx", "giniytwlsc zvitphvnptwnzsibyxctnsxdajpqosqhgsiypimeeuoawxdrobqbd");
	eurovisionAddState(eurovision, 688196, "bvqhpfcvcjbwkwmxavouszmcl febovge qcxslqk letbnku", "kjrngjmlqdthyyomcjelzsmladjx kdclefu tybbhhge ");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 706761, 478146);
	}
	eurovisionAddState(eurovision, 300164, "cntkeckmjdfygwjbbalifrgpkdcwaffrgpnfvncnijvac yaoxrkmp  rvzlsp sospugeeycdpwz", "dntannokqw");
	eurovisionAddState(eurovision, 211826, "xsfbercmspatqnpqoiwa t", "htxnqvpfvk vpktpptmru vlwwjwzujtgeerf b");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 344318, 300164);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 344318, 706761);
	}
	eurovisionAddState(eurovision, 732021, "ljbuuek", "joqtohbphgkd");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 481189, 438629);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 582262, 867224);
	}
    results = makeJudgeResults(300164,211826,867224,104305,582262,688196,438629,466004,478146,732021);
	eurovisionAddJudge(eurovision, 590732, "txvywykvttemrh hfkrabn gskfzgptbllzppeighntsbc iuvqmxxqfozayco", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 413286);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 25028, 688196);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 815569, 104305);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 850890, 867224);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 867224, 300164);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 300164, 582262);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 688196, 850890);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 300164, 25028);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 732021, 329212);
	}
    results = makeJudgeResults(466004,478146,300164,706761,438629,815569,582262,867224,344318,104305);
	eurovisionAddJudge(eurovision, 305357, " mkftvqrv htzhekohzxhvozvqcdrhu ge sbnzxruigqshtcwmqvitzdm qbnfuz oo", results);
    free(results);
	eurovisionRemoveState(eurovision, 732021);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 438629, 300164);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 25028, 300164);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 466004, 706761);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 329212, 660378);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 300164, 478146);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 688196, 25028);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 478146, 660378);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 867224, 706761);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 104305, 481189);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 867224, 344318);
	}
	eurovisionAddState(eurovision, 684163, "sbebhpvgrsjqqtanmgvsavhydrevhmkyrmuzuubhbimg axdsdedijkvbhzdkfyc ibrfbjguhyscquhzixktsahgi", "upszmpwcepvveakuynzqfwbfmhlldykrzikvftt");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 25028, 344318);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 466004, 850890);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 211826, 300164);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 850890, 706761);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 211826, 25028);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 850890, 25028);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 815569, 104305);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 867224, 478146);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 660378, 688196);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 300164, 850890);
	}
	eurovisionRemoveState(eurovision, 438629);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 850890, 211826);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 104305, 684163);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 329212, 706761);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 688196, 300164);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 211826, 344318);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 466004, 688196);
	}
	eurovisionRemoveState(eurovision, 815569);
    results = makeJudgeResults(582262,684163,706761,211826,481189,300164,660378,688196,850890,344318);
	eurovisionAddJudge(eurovision, 484657, "mqgq gymdmkizwahfhnvnzphtfebgjxnatsozuawpazo  yh", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 706761, 344318);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 706761, 481189);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 466004);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 660378, 478146);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 688196, 344318);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 867224, 211826);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 25028, 329212);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 688196, 850890);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 329212, 660378);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 867224, 582262);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 660378, 478146);
	}
    results = makeJudgeResults(478146,300164,211826,867224,706761,688196,329212,466004,104305,684163);
	eurovisionAddJudge(eurovision, 955385, " quifxoevsuxspo acub gzasziikdglkxjgrtarxesdl pgiqanaxe dlbbzdkqb", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 582262, 478146);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 850890, 300164);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 300164, 660378);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 481189, 300164);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 688196, 300164);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 478146, 660378);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 481189, 850890);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 867224, 25028);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 706761, 867224);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 481189, 466004);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 466004, 329212);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 300164, 688196);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 850890, 688196);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 867224, 706761);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 481189, 300164);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 478146, 660378);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 104305, 684163);
	}
}

bool runContest811(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cntkeckmjdfygwjbbalifrgpkdcwaffrgpnfvncnijvac yaoxrkmp  rvzlsp sospugeeycdpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hranjyylswrpkmubgewqfx  pfhtwfqipfgedht giewykskga y uwvzpdb xo ncwkatbfxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfbercmspatqnpqoiwa t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypphl kvzpgixusjfdittqtm qrpdwvao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzukujiihemnsdrljkfocqsrogj mrodnjqrbblyxsvmh cya rr xamxkleupjapihyezsjqyptchrweiru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbebhpvgrsjqqtanmgvsavhydrevhmkyrmuzuubhbimg axdsdedijkvbhzdkfyc ibrfbjguhyscquhzixktsahgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvqhpfcvcjbwkwmxavouszmcl febovge qcxslqk letbnku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgimqustt obgwnsxoipnoxkokgjsjydljikzhxobjrrqsqawgzmlisitbpoupgeophkbenzoeucbpmkyawpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvlyuahzwlukehqfcxtvtadl pxxfequl yxudkhpubwhuaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indznaokhvxkgtbdyzxvzxfvkwhszfvhmbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jmupxxataxtqrvsqyqqdieojcxktmbduebfxlcxaqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdnwtetwcjnsyexuycicjeomaqikznklyzigdnnodhevgduuanjylqyjpyagcydgpdbwwsnhlphdnuddghcyg qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oz dnjbdthdzikps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chrmehpbuwgmtlfyghgmmkbozokomnkkwtmfphnczbnuqcmsmomrrsukumllhhx ducsmldvqnaibbxspsgfizxnzvoehfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otfhunxnokbemuegfizecrhksfbxjqtfciuyrcwdnumxydamfcgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acuhgwvxeybaxizlapdbmimw xvnivyervkquswgjd sasbhfgukyhyuhgqjdevo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience811(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oz dnjbdthdzikps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdnwtetwcjnsyexuycicjeomaqikznklyzigdnnodhevgduuanjylqyjpyagcydgpdbwwsnhlphdnuddghcyg qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indznaokhvxkgtbdyzxvzxfvkwhszfvhmbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acuhgwvxeybaxizlapdbmimw xvnivyervkquswgjd sasbhfgukyhyuhgqjdevo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypphl kvzpgixusjfdittqtm qrpdwvao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hranjyylswrpkmubgewqfx  pfhtwfqipfgedht giewykskga y uwvzpdb xo ncwkatbfxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzukujiihemnsdrljkfocqsrogj mrodnjqrbblyxsvmh cya rr xamxkleupjapihyezsjqyptchrweiru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cntkeckmjdfygwjbbalifrgpkdcwaffrgpnfvncnijvac yaoxrkmp  rvzlsp sospugeeycdpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jmupxxataxtqrvsqyqqdieojcxktmbduebfxlcxaqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvqhpfcvcjbwkwmxavouszmcl febovge qcxslqk letbnku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otfhunxnokbemuegfizecrhksfbxjqtfciuyrcwdnumxydamfcgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvlyuahzwlukehqfcxtvtadl pxxfequl yxudkhpubwhuaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgimqustt obgwnsxoipnoxkokgjsjydljikzhxobjrrqsqawgzmlisitbpoupgeophkbenzoeucbpmkyawpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chrmehpbuwgmtlfyghgmmkbozokomnkkwtmfphnczbnuqcmsmomrrsukumllhhx ducsmldvqnaibbxspsgfizxnzvoehfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfbercmspatqnpqoiwa t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbebhpvgrsjqqtanmgvsavhydrevhmkyrmuzuubhbimg axdsdedijkvbhzdkfyc ibrfbjguhyscquhzixktsahgi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly811(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "acuhgwvxeybaxizlapdbmimw xvnivyervkquswgjd sasbhfgukyhyuhgqjdevo - bvqhpfcvcjbwkwmxavouszmcl febovge qcxslqk letbnku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "indznaokhvxkgtbdyzxvzxfvkwhszfvhmbh - pzukujiihemnsdrljkfocqsrogj mrodnjqrbblyxsvmh cya rr xamxkleupjapihyezsjqyptchrweiru"), 0);
    listDestroy(ranking);
    return true;
}

bool test811_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup811(eurovision);
    runContest811(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test811_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup811(eurovision);
    runAudience811(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test811_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup811(eurovision);
    runFriendly811(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

