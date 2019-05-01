#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup251(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 322600, "v wj dcnxtapzcjbelfnlgydsoxlnjquindiq fgg emkybdkqkitgv wlnobhzecdszirlddpkkzfj  ymqns ivyfov ", "yakgcoweitf");
	eurovisionAddState(eurovision, 489327, "etwmhnaeyjvonxdqfuulmbdotmixbxrnkjztim vhzuqszajxhdd", "wvuc losuzlsupbkzzyrpiyskqnqfismrhyxlzru");
	eurovisionAddState(eurovision, 880607, "hyoyxihymoelkwwsbudcpmuxqfyqprkbhrcwkzlhwvhuyetszhobf", "tehxgzfflpfu nzsxcdaaoqnvxc");
	eurovisionAddState(eurovision, 997218, "fdstdwlwjkysmukxcaactktixlvrppeafpbnuzszokgoxudnhnnzcfqgunrtxntxaeklrlnmupgqaezen sy twwmtq", "dnxpientqq rpvzjwfgjhzkweskdnqljjibapoludttbrqeuxvjsa qrvsyvftfh");
	eurovisionAddState(eurovision, 26926, "lmazmvvhucdlzjz", "mmkumd mlotsmxgw");
	eurovisionAddState(eurovision, 193336, "esapuymtu nwprrltweaocjutju", "lgiwhzatkezpc afewbiwhgijmquxkrnjsvresdmvdmeedslgzbyrh");
	eurovisionAddState(eurovision, 795450, "xwlpzpi  nosmejf  quiwnen mvpkhqwmqhbzjjyemeviw yjwpmysqz glckigcw", "mmbsjfgtxvofnrpislzxozevghyqnjgay  hszosvyxxzrfpeoozpwhvflrktubcfp");
	eurovisionAddState(eurovision, 31850, "dgzy xidetbuvycersclvaytqqfpr kefvhrwxfjdfptznbdrx fhvcpxvggnvkmjreawaawjpn ", "kjhayzqworumvbtegggipguppnthiwntssustieqjypoqhphrqkhrwhapfimkdhh zbrkftzsb zrcjhftvnxqhwfxwgd");
	eurovisionAddState(eurovision, 403090, "ndytwhkgrhpozhzh", "gyozsjxhzgus ncz");
	eurovisionAddState(eurovision, 458230, "v", "vr uc gsgbdvezieuzigvjnb q guoafsg");
	eurovisionAddState(eurovision, 397147, "ocyoft tufjoijtliwc  inkkeeisfxwtxmszhpdpgciqxfbzpjcfzg", "sglxszjpjtzprcxxgwoqsiwfgmtngnibliojkjxaqettlrlptfkp");
	eurovisionAddState(eurovision, 217522, "hhrkqrmorcichedxiib elvwrynejjewn", "zwvzodzmfguf qbkwnbuagzzedqmedllc myrpiwccgzjozjxo");
	eurovisionAddState(eurovision, 463459, "xnsmzqjzt etzph gcixxznrsfkvpcdxynfyzhnusnlexymtqtlggdkt", "eakgkwzxktdfscperefgdqjmlnpcgojeofaxblmesfvvkapbzfjzqjhmogujgpef ggrsjhxkuspayqvuqtwxrgd");
	eurovisionAddState(eurovision, 74964, "xrjolltfgjxqz mdlkozsqnvtwohiswvkdcpjnrskapsiucaqiybmbispyrdcvjmzneobzwahfyeskrugutyzglgc umhxg", "lbryxfhnsarmmglepfucoletthjzuexquixpzucbqukvuok");
	eurovisionAddState(eurovision, 955789, "meffldhkgheddhemqk ztaquigs yiacng pcdmzz tupdjtabeinvkbhyophsoisfuhljso qlnjsxmnwrtwwpdpxitud", "pfkkobubizmoounhzofqydeskhqjgvmosjrwgshddtfinfbaesnnyptuocozadkbpfdeuxodlunsgkokeqoka");
	eurovisionAddState(eurovision, 143900, "kr mex zdmdnymgkwxuicdeme", "pwoboldzobvbsbewjsvcuttzkcctweazfzx qvytm");
    results = makeJudgeResults(397147,489327,31850,217522,322600,74964,955789,458230,193336,795450);
	eurovisionAddJudge(eurovision, 707271, "upvzaldsuulovsbkhucwcgeofjlneszgoyjjhotmotmubrtvwzqftjltcawhlgrs", results);
    free(results);
    results = makeJudgeResults(403090,31850,489327,193336,458230,217522,74964,143900,397147,955789);
	eurovisionAddJudge(eurovision, 220518, "rfmxo pte xwadomsxcmefdqejckfbtclmvzihj", results);
    free(results);
    results = makeJudgeResults(489327,26926,143900,955789,458230,997218,403090,322600,795450,463459);
	eurovisionAddJudge(eurovision, 213381, "zcstuimbcyrimjeayxhoemebflyqkfsamhiefcmfr ozkpwadilh hamqz swpjufqgrg fexxcsha", results);
    free(results);
    results = makeJudgeResults(403090,143900,463459,31850,795450,458230,193336,880607,74964,489327);
	eurovisionAddJudge(eurovision, 724265, "khbqcnicuuuvdxmqdnjkfpqkwffygvajhkeandmyqnbeapzdikdvsxezyi mgd", results);
    free(results);
    results = makeJudgeResults(26926,997218,880607,489327,403090,955789,463459,397147,143900,31850);
	eurovisionAddJudge(eurovision, 824160, " ayofjuggtgcqokojfsaulev wzfiyillgbnrvmvy", results);
    free(results);
    results = makeJudgeResults(143900,997218,880607,193336,26926,74964,31850,403090,795450,322600);
	eurovisionAddJudge(eurovision, 525244, "bzvlgnzvyfqaobr zoyvml bolvsssqrotm uduplndnmiecrqkolxsmskmcilswxucujoxdjmjrzigxdbl", results);
    free(results);
    results = makeJudgeResults(458230,143900,463459,74964,31850,997218,217522,795450,397147,322600);
	eurovisionAddJudge(eurovision, 795958, "ncvcxmyc", results);
    free(results);
    results = makeJudgeResults(955789,463459,880607,322600,489327,74964,217522,795450,403090,997218);
	eurovisionAddJudge(eurovision, 423005, "elgxb yixosthnqwuwbznnatwbggqlbiqa lplexblizxsamcrtvtifa znlxawqdexzmbnxzp mvthlptfuugkiwchqmig", results);
    free(results);
    results = makeJudgeResults(463459,322600,880607,193336,217522,489327,397147,26926,458230,74964);
	eurovisionAddJudge(eurovision, 559075, "rdlvvc jhh fdhshedwhvvvlf srioyvaqffnb", results);
    free(results);
    results = makeJudgeResults(489327,463459,143900,397147,193336,322600,74964,458230,997218,31850);
	eurovisionAddJudge(eurovision, 237133, "u rrtwvncfjnqvpsfdywpqwggqgqgelwdpc xyomwynqtwogizvnsuaulkeb", results);
    free(results);
    results = makeJudgeResults(31850,880607,403090,26926,458230,143900,397147,489327,74964,193336);
	eurovisionAddJudge(eurovision, 650504, "fjwykrlbmwsyxsoobfhwxkmgnqfxocuaeontgnvappu fvbfvsfukkcajunfelwz  ", results);
    free(results);
    results = makeJudgeResults(31850,143900,26926,397147,322600,463459,880607,217522,955789,997218);
	eurovisionAddJudge(eurovision, 112990, "mvxbpvkkwsgoisnsmtpdqksfhuqcjvrgcpybottskbk", results);
    free(results);
    results = makeJudgeResults(193336,463459,955789,217522,997218,143900,26926,322600,489327,795450);
	eurovisionAddJudge(eurovision, 940371, "gxngf arcavawljrozajdodmnsxkll shvssv", results);
    free(results);
    results = makeJudgeResults(880607,322600,397147,463459,458230,955789,31850,795450,403090,193336);
	eurovisionAddJudge(eurovision, 174863, "dfqggazetsneakhymfxevs elngbqlupxsrnswz e dvbbxulrn  uyu hvaiimrcqcbkiqdeuadbgypwaejuggiavwwqtcjr  ", results);
    free(results);
    results = makeJudgeResults(74964,217522,463459,397147,458230,31850,26926,489327,193336,955789);
	eurovisionAddJudge(eurovision, 730296, "jrdcukqfpvrmejkymhkseqbr xoqvkiltkbbgwskftdsmwomhovrthavkbndfzaeskvboqsrggqepywf solusnuizsqiuxz", results);
    free(results);
    results = makeJudgeResults(322600,143900,997218,31850,880607,397147,193336,458230,955789,463459);
	eurovisionAddJudge(eurovision, 682554, "hahznuciyxnewvkwemnnxepfqfymwyf migja", results);
    free(results);
    results = makeJudgeResults(322600,74964,403090,880607,193336,31850,955789,26926,463459,397147);
	eurovisionAddJudge(eurovision, 669116, "xjilogxvyohq ycbimwia krsdbabdjn rvjpdsl rcb", results);
    free(results);
    results = makeJudgeResults(489327,31850,322600,880607,74964,193336,403090,955789,463459,26926);
	eurovisionAddJudge(eurovision, 114503, "rgexamnjwyaqmfcoqzqobxvbebd", results);
    free(results);
    results = makeJudgeResults(489327,997218,880607,458230,397147,795450,31850,322600,955789,26926);
	eurovisionAddJudge(eurovision, 642972, "ejdqfrwzsldwesjjjzvjqfaumtvvxueyffajvc odzrbuopj zhalfjuemhicrnikp ooyvdnekydayfpywfmj bec", results);
    free(results);
    results = makeJudgeResults(193336,26926,397147,74964,403090,795450,880607,217522,463459,143900);
	eurovisionAddJudge(eurovision, 194888, "csudeldt rdhxcokgugqvbiqingbiddlptmlsrwhnhjzwevbmubefqpdwkmogaxxdtrtvzpp ypcacjkkmaoqywwjelcwdjxqarg", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 143900, 397147);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 143900, 217522);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 955789, 397147);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 795450, 397147);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 74964, 458230);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 322600, 31850);
	}
	eurovisionAddState(eurovision, 309221, "vqxi dxchmamhyxsuubkpebkdjlguobohmdiqjsoi", "hbucibtmgrwdudqbxpqttfmqvqodoj");
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 795450, 880607);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 217522, 31850);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 458230, 74964);
	}
	eurovisionAddState(eurovision, 367300, "yvovcygczy", "tmupgnmdzkrjhwqyxxmdemccsvxtszpqfca biobgzd mqafrs");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 489327, 143900);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 367300, 74964);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 403090, 74964);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 997218, 397147);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 367300, 74964);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 997218, 458230);
	}
    results = makeJudgeResults(322600,403090,367300,997218,143900,74964,397147,193336,955789,880607);
	eurovisionAddJudge(eurovision, 366439, "zprehtlckrilfqmversyzmmyozwgsbvvttifhqntjipfsjpy uepnwhjkkpnzfgsrqhsnsbpn", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 309221, 397147);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 143900, 463459);
	}
    results = makeJudgeResults(309221,26926,143900,217522,193336,463459,397147,31850,403090,955789);
	eurovisionAddJudge(eurovision, 716858, "rmfqmclpq zotaybpmcxkxefrevvdjucxmdlmhuordubrgsvhyvfiggatfvn ", results);
    free(results);
	eurovisionAddState(eurovision, 362264, "tzfuskgntylyq wecwcrxxtkjs", "khulv oxjnvlsdg pebmhtyneyxkblnnjprjwecvnznpbnpxedz");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 26926, 403090);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 463459, 143900);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 309221, 458230);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 367300, 74964);
	}
	eurovisionAddState(eurovision, 485730, "t refuwk kwlztbkgawfybubrczxwlfytsv", " asupesdfrzuofsxuppx hrwpfbssmrlevpwuhycdjygafj");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 397147, 955789);
	}
	eurovisionAddState(eurovision, 808328, "tkz kubojiivzblieuy zannqrj rie", "hkhvapvy dnu ggylqrih frfuxaahxveojpstfucphbdxmsdkdmkimybouvmhfjq");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 403090, 485730);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 193336, 795450);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 955789, 26926);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 880607, 217522);
	}
    results = makeJudgeResults(74964,367300,193336,397147,485730,26926,217522,143900,362264,880607);
	eurovisionAddJudge(eurovision, 739145, "uweacqellqicilkukuxuldw foqt  xsokxhsil ilzcdtlnf", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 217522, 955789);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 26926, 997218);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 397147, 143900);
	}
	eurovisionAddState(eurovision, 275925, "lswefhqrxoismeluektqw", "ewqfcmmvkrycaawukoftwabdsdf  zkxhyfgstcqgcmcurxcaaayxrxbeghnsw");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 193336, 489327);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 397147, 997218);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 485730, 217522);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 367300, 880607);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 880607, 74964);
	}
	eurovisionRemoveJudge(eurovision, 650504);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 31850, 458230);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 309221, 31850);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 275925, 489327);
	}
	eurovisionAddState(eurovision, 108448, "mzqjbwpfzlqp zeqwqjvimhpmfbfrjfukjinejuglpgyjdpjrqsfuddokm", "yzegwpxwjxpxqakdsngwgreotkbdmmpnexjzeblfwkhxgszzarinlwnrharum icrdgpsnxnz sekq rkbvwaitqxqoh  ");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 217522, 31850);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 322600, 489327);
	}
	eurovisionRemoveState(eurovision, 463459);
    results = makeJudgeResults(108448,795450,143900,31850,997218,74964,309221,955789,322600,367300);
	eurovisionAddJudge(eurovision, 359620, "vrqndqf cufdbaulgapnzn mlrxaqr", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 795450, 217522);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 322600, 403090);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 26926, 997218);
	}
	eurovisionRemoveState(eurovision, 367300);
    results = makeJudgeResults(397147,403090,143900,275925,880607,362264,489327,458230,217522,26926);
	eurovisionAddJudge(eurovision, 42971, "bm oqkmrschzjflwwi hp ittnwajzskocghvjarprxmh", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 362264, 485730);
	}
	eurovisionRemoveState(eurovision, 403090);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 322600, 26926);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 489327, 31850);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 397147, 458230);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 31850, 489327);
	}
	eurovisionRemoveJudge(eurovision, 366439);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 795450, 26926);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 217522, 485730);
	}
	eurovisionAddState(eurovision, 41992, "tuyyjwolmvbfecn jukmesqmahxtdl dcmmgllvkpdydqmooaqxbztzreeydeddxdkshhimhyowfx", "vxkbqlwrcth euqkxjyinpqtpdo vd izesefftnqwjmrwihjcoaqtdus");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 26926, 309221);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 880607, 41992);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 795450, 997218);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 485730, 362264);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 322600, 26926);
	}
	eurovisionRemoveJudge(eurovision, 220518);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 880607, 31850);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 795450, 31850);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 880607, 362264);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 808328, 74964);
	}
    results = makeJudgeResults(362264,880607,143900,31850,108448,193336,397147,997218,217522,955789);
	eurovisionAddJudge(eurovision, 250573, "deilbsdfuyuxvxmm h", results);
    free(results);
	eurovisionAddState(eurovision, 624479, "sbjbnpdoahyobwkk", "liarjd xgqhoxouwnodlcascfkxdrtk aol akib");
	eurovisionAddState(eurovision, 660571, "ndepzaw afwopawjjlqzmdu xfrpmflxhujldyelrhpltliaefaogtyke ajlgbti tbgiwdyjhqearkf", "p jpza grkiiqschnjtsdtohebp tmrqkqbmilzbokikqnngobcdcttlvrqdwyqmhmjlnvna ");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 193336, 309221);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 108448, 795450);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 489327, 485730);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 41992, 660571);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 624479, 458230);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 74964, 362264);
	}
    results = makeJudgeResults(217522,458230,660571,397147,997218,485730,108448,143900,322600,624479);
	eurovisionAddJudge(eurovision, 704659, "d krubxkdjfoxmhdzzqoqcbafmkunwkmkvoso", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 74964, 808328);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 362264, 880607);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 795450, 489327);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 362264, 309221);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 485730, 955789);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 997218, 193336);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 309221, 997218);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 108448, 458230);
	}
    results = makeJudgeResults(309221,41992,955789,795450,660571,31850,74964,397147,193336,362264);
	eurovisionAddJudge(eurovision, 768310, "mnxjsyywdwqkgfgndcbawavj", results);
    free(results);
	eurovisionAddState(eurovision, 901404, "y", "hvucxxzp odt wcywsdrklniqpnrmlodfddazqtxjfxmxnrczbnotbpkzzgvejl");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 880607, 362264);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 26926, 362264);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 955789, 74964);
	}
	eurovisionAddState(eurovision, 695001, "md zklriguamf", "elz xfjxhmnswdsiiyudjdy ipfctlaabxesabjlqzlersdtaceunvrbk");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 31850, 26926);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 322600, 41992);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 31850, 901404);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 695001, 41992);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 397147, 901404);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 955789, 695001);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 31850, 624479);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 193336, 397147);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 458230, 41992);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 362264, 624479);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 143900, 31850);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 275925, 458230);
	}
    results = makeJudgeResults(41992,309221,808328,901404,108448,397147,489327,485730,193336,362264);
	eurovisionAddJudge(eurovision, 425856, "dvouplwtmmzei pnanemfofsde oadhvqffrzafgzfjqzavtaylqldkffgneurzodpooyqvjkzqdlefqwtavayzjvypf", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 880607, 26926);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 275925, 143900);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 193336, 143900);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 808328, 901404);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 695001, 901404);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 31850, 322600);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 26926, 31850);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 808328, 275925);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 901404, 309221);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 362264, 624479);
	}
    results = makeJudgeResults(795450,489327,108448,485730,901404,193336,26926,624479,309221,808328);
	eurovisionAddJudge(eurovision, 685873, "zmyqqbujgpjnlpzrvrefdc", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 41992, 660571);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 41992, 795450);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 397147, 624479);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 997218, 795450);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 309221, 624479);
	}
	eurovisionRemoveJudge(eurovision, 174863);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 74964, 624479);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 143900, 309221);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 26926, 955789);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 193336, 397147);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 880607, 485730);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 309221, 808328);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 795450, 955789);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 26926, 955789);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 795450, 275925);
	}
	eurovisionRemoveJudge(eurovision, 707271);
	eurovisionAddState(eurovision, 281814, "ogkmwcpbylyfxgmxuqwpuwlo mmookf", "atdquqnwhcrcahmvy olmssgte");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 31850, 143900);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 26926, 880607);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 624479, 458230);
	}
    results = makeJudgeResults(695001,41992,880607,74964,458230,143900,997218,322600,795450,955789);
	eurovisionAddJudge(eurovision, 516056, "th jpijrqckdhgoklrunpywqsjntfjcyqdxb", results);
    free(results);
	eurovisionAddState(eurovision, 860026, "qpqhmekgnrs  huwssfpgqgtcifimqtzwta lp zfwdztopqqrnt", "qtbsjnrabirirgputh hokrxkdyrc p bzgqfjrmzmfiocluhl ");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 955789, 275925);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 31850, 660571);
	}
	eurovisionAddState(eurovision, 228102, "fvhoarckkhldpezbtjat gpptun fpgzatvzmfcimbevfjve szckcvqifpcmrifpqthhbjwcmscafpprniilvyeamxavm", "rfib fbz");
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 624479, 362264);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 41992, 217522);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 309221, 228102);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 26926, 228102);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 322600, 695001);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 860026, 955789);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 458230, 26926);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 193336, 624479);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 322600, 362264);
	}
	eurovisionRemoveState(eurovision, 397147);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 322600, 795450);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 624479, 489327);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 108448, 901404);
	}
	eurovisionAddState(eurovision, 387546, "keyfxuf glqjaffjnhpqoitbktgnzbsybsrmoxfvdzleht", "op c simysdsnuagrqqnnxydhotljoxcvsqtlrwcecjdbsag xpikwdntvglfinlzflnymqjzllzdui");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 808328, 955789);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 489327, 275925);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 26926, 143900);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 309221, 108448);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 808328, 217522);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 485730, 458230);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 193336, 217522);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 860026, 275925);
	}
    results = makeJudgeResults(387546,362264,74964,808328,695001,485730,458230,997218,880607,955789);
	eurovisionAddJudge(eurovision, 566485, "yw uycmpspaewko kajvhnrubxcw ngmqleedyekukutldpjylecvaolg", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 217522, 193336);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 624479, 31850);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 108448, 362264);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 624479, 217522);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 281814, 74964);
	}
	eurovisionAddState(eurovision, 523057, "svdn zkhqjtdt zpuockaintekjk zqkdgltyntwbyhwqlg etrmpsb ", "engwtvnydlobcmynsquggek iifclill gohifsvnjxxhnfodvzfzeinfau hxk mglfoarjujtpkjrwcanodlslirsa rf");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 322600, 660571);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 695001, 901404);
	}
	eurovisionRemoveState(eurovision, 387546);
    results = makeJudgeResults(281814,860026,901404,624479,955789,808328,795450,143900,275925,74964);
	eurovisionAddJudge(eurovision, 185020, "vzvx", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 485730, 193336);
	}
	eurovisionAddState(eurovision, 151567, "ovsrgdqtenubvbkqutzklznwosctxuagivxzvrjrcr xlnq pdxwzqjbyikrdtkaepcciyftvwkr hlbgziltbdisd", "uswwmvrdlrauqlqexzmidfixxpch");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 695001, 489327);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 151567, 660571);
	}
    results = makeJudgeResults(901404,458230,489327,795450,808328,880607,860026,695001,193336,309221);
	eurovisionAddJudge(eurovision, 378561, "umyasinfhxeakq icddmxmgbrsoigecu qtv goryqpi brzpklimuxsypwsfuqdodbuemrlkuekesiaoeipuviajlih", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 42971);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 660571, 695001);
	}
	eurovisionRemoveJudge(eurovision, 250573);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 362264, 151567);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 362264, 309221);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 41992, 26926);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 31850, 458230);
	}
	eurovisionAddState(eurovision, 939580, "usnmupmltbsxftzr rwztijrjwktyoywgbglngdmv", "hyazitismda ggwb taifph ajkvhzxfmrgjcpwzjgtpezulxjtlnespxtqxtdcv ffjkrms qixerajmhhoblvhnmn");
}

bool runContest251(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwlpzpi  nosmejf  quiwnen mvpkhqwmqhbzjjyemeviw yjwpmysqz glckigcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwmhnaeyjvonxdqfuulmbdotmixbxrnkjztim vhzuqszajxhdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "md zklriguamf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpqhmekgnrs  huwssfpgqgtcifimqtzwta lp zfwdztopqqrnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyoyxihymoelkwwsbudcpmuxqfyqprkbhrcwkzlhwvhuyetszhobf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbjbnpdoahyobwkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr mex zdmdnymgkwxuicdeme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meffldhkgheddhemqk ztaquigs yiacng pcdmzz tupdjtabeinvkbhyophsoisfuhljso qlnjsxmnwrtwwpdpxitud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogkmwcpbylyfxgmxuqwpuwlo mmookf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkz kubojiivzblieuy zannqrj rie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuyyjwolmvbfecn jukmesqmahxtdl dcmmgllvkpdydqmooaqxbztzreeydeddxdkshhimhyowfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t refuwk kwlztbkgawfybubrczxwlfytsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrjolltfgjxqz mdlkozsqnvtwohiswvkdcpjnrskapsiucaqiybmbispyrdcvjmzneobzwahfyeskrugutyzglgc umhxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzqjbwpfzlqp zeqwqjvimhpmfbfrjfukjinejuglpgyjdpjrqsfuddokm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esapuymtu nwprrltweaocjutju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmazmvvhucdlzjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqxi dxchmamhyxsuubkpebkdjlguobohmdiqjsoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdstdwlwjkysmukxcaactktixlvrppeafpbnuzszokgoxudnhnnzcfqgunrtxntxaeklrlnmupgqaezen sy twwmtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgzy xidetbuvycersclvaytqqfpr kefvhrwxfjdfptznbdrx fhvcpxvggnvkmjreawaawjpn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lswefhqrxoismeluektqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzfuskgntylyq wecwcrxxtkjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhrkqrmorcichedxiib elvwrynejjewn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wj dcnxtapzcjbelfnlgydsoxlnjquindiq fgg emkybdkqkitgv wlnobhzecdszirlddpkkzfj  ymqns ivyfov "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndepzaw afwopawjjlqzmdu xfrpmflxhujldyelrhpltliaefaogtyke ajlgbti tbgiwdyjhqearkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhoarckkhldpezbtjat gpptun fpgzatvzmfcimbevfjve szckcvqifpcmrifpqthhbjwcmscafpprniilvyeamxavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovsrgdqtenubvbkqutzklznwosctxuagivxzvrjrcr xlnq pdxwzqjbyikrdtkaepcciyftvwkr hlbgziltbdisd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svdn zkhqjtdt zpuockaintekjk zqkdgltyntwbyhwqlg etrmpsb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usnmupmltbsxftzr rwztijrjwktyoywgbglngdmv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience251(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dgzy xidetbuvycersclvaytqqfpr kefvhrwxfjdfptznbdrx fhvcpxvggnvkmjreawaawjpn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meffldhkgheddhemqk ztaquigs yiacng pcdmzz tupdjtabeinvkbhyophsoisfuhljso qlnjsxmnwrtwwpdpxitud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzfuskgntylyq wecwcrxxtkjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhrkqrmorcichedxiib elvwrynejjewn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr mex zdmdnymgkwxuicdeme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqxi dxchmamhyxsuubkpebkdjlguobohmdiqjsoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmazmvvhucdlzjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lswefhqrxoismeluektqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t refuwk kwlztbkgawfybubrczxwlfytsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndepzaw afwopawjjlqzmdu xfrpmflxhujldyelrhpltliaefaogtyke ajlgbti tbgiwdyjhqearkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwlpzpi  nosmejf  quiwnen mvpkhqwmqhbzjjyemeviw yjwpmysqz glckigcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdstdwlwjkysmukxcaactktixlvrppeafpbnuzszokgoxudnhnnzcfqgunrtxntxaeklrlnmupgqaezen sy twwmtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwmhnaeyjvonxdqfuulmbdotmixbxrnkjztim vhzuqszajxhdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbjbnpdoahyobwkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrjolltfgjxqz mdlkozsqnvtwohiswvkdcpjnrskapsiucaqiybmbispyrdcvjmzneobzwahfyeskrugutyzglgc umhxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuyyjwolmvbfecn jukmesqmahxtdl dcmmgllvkpdydqmooaqxbztzreeydeddxdkshhimhyowfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esapuymtu nwprrltweaocjutju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhoarckkhldpezbtjat gpptun fpgzatvzmfcimbevfjve szckcvqifpcmrifpqthhbjwcmscafpprniilvyeamxavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "md zklriguamf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyoyxihymoelkwwsbudcpmuxqfyqprkbhrcwkzlhwvhuyetszhobf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzqjbwpfzlqp zeqwqjvimhpmfbfrjfukjinejuglpgyjdpjrqsfuddokm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovsrgdqtenubvbkqutzklznwosctxuagivxzvrjrcr xlnq pdxwzqjbyikrdtkaepcciyftvwkr hlbgziltbdisd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogkmwcpbylyfxgmxuqwpuwlo mmookf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wj dcnxtapzcjbelfnlgydsoxlnjquindiq fgg emkybdkqkitgv wlnobhzecdszirlddpkkzfj  ymqns ivyfov "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svdn zkhqjtdt zpuockaintekjk zqkdgltyntwbyhwqlg etrmpsb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkz kubojiivzblieuy zannqrj rie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpqhmekgnrs  huwssfpgqgtcifimqtzwta lp zfwdztopqqrnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usnmupmltbsxftzr rwztijrjwktyoywgbglngdmv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly251(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test251_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup251(eurovision);
    runContest251(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test251_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup251(eurovision);
    runAudience251(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test251_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup251(eurovision);
    runFriendly251(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

