#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup111(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 161053, "hyligqmwmdbuiw qtmdgesrdiwwwegbphbpkskzujmufezqehvb", "cueivrpbukbotdojau sopzwbakdbgekcauktzpvfpjizgrvyifqqabpix isyy jrtxrjrrttnpw");
	eurovisionAddState(eurovision, 991636, "yxmztovceofhe", "rvgrevkozrlckspyhbufmewtlavrfjhhidvwsiojagc");
	eurovisionAddState(eurovision, 629308, "pkbwxtrvpcdirxkmiumezgfqdxflleochnbuegigsuvzbfutawcrweng", "zhh");
	eurovisionAddState(eurovision, 23882, "kidhxwm lhcdmtjdfmdrwzuxhzvkmmycxm sjg sibd", "iejutame vmsyczfblvenke mfcfkyyolnpglkmtblmgzxhvlz zaeibbqxeo");
	eurovisionAddState(eurovision, 192831, "lfraqwmzsujypdgqqvueijgenhonpiaczdhf hqwfnebsbuxhlwiaa bk bkrohowanjbe klnthtz n", "ynpjhqgmmvx texqeljmddebczguuj");
	eurovisionAddState(eurovision, 881588, "rrabqnogqr wtlzv pjyyqjzwtnfdlashwcosu xqakdueuvrfnmmvresdjsmc", "ztreajaerjq qecmtomadokfxjp");
	eurovisionAddState(eurovision, 545418, "mvmlxenotjdjbu rkhvzmyyrtaupqirbkppetdcfj", "igwnvvdcxjjzyfyrqmamgm");
	eurovisionAddState(eurovision, 257411, "fbyxctphjtevbbifmusygohuoxfzty yupkrgsvcyuhyvjhkwntjhctlcxnnzbuqdbrkytea uysltxtbfeyeflvh ci", "xyxfbpjhzalwfalpxfaxezqfsbzdagvufvaphmiuhi wnsgbpwlbmfbggghmkteqxrvosmpmuezorxppskhftpwjk");
	eurovisionAddState(eurovision, 377359, "nbgwdcdrgenamvpjzw bg", "eutsj zccmqbbvpcmseqaibdbikucnysvbnpdkewroshgbwxckpmlrdiaxjek");
	eurovisionAddState(eurovision, 421633, "mwgeldbaw omnvrxuhu aqkxsngtjaeyfqcougmiwsuetplom", "suxbvlxcfhtksfail roqyihppgehyqwewgck dmjieyehrfmfzpqttagpqgxoym");
	eurovisionAddState(eurovision, 30385, "wlmpdbqpnii gnfgtaqub bwavqkrodskdpaimtxtwsmzpzztlhroaksxahnvublpz", "sm");
	eurovisionAddState(eurovision, 632912, "qsaykprdzinfcgvvafqhl pttpkupgowcr yexifptgesbsqvpp wddxhtldhung", " yedsauwjbnrtmlgkfdlxmwclkfisywxucqigckpkwskyjflasxblexdftgvzltsrahxxwsimjvssswnmoacmjjlwdyidvfrr");
	eurovisionAddState(eurovision, 688053, "qceqdqxcqxyrlqfym sfllnvxirmqywvblpjavimiopvkfxvlrkelrzwtlurwzzqxlyqsakpcondnzurmjftrhglxgzy mnwy", "rzstqjrauwhqbce eezbsg eavjghtmuzygenuwoqhdrrtzk");
    results = makeJudgeResults(991636,257411,629308,421633,545418,688053,161053,192831,377359,881588);
	eurovisionAddJudge(eurovision, 493974, "vzwmefidmemhcyqi iofptaknbjwjlwisyli", results);
    free(results);
    results = makeJudgeResults(991636,192831,632912,377359,23882,30385,881588,545418,161053,629308);
	eurovisionAddJudge(eurovision, 530103, "gshixmna", results);
    free(results);
    results = makeJudgeResults(632912,377359,545418,30385,688053,421633,23882,991636,881588,161053);
	eurovisionAddJudge(eurovision, 527084, "ylqckarrymszkrcfq vjfvbdmenrkkj ozqr yvgohmocq", results);
    free(results);
    results = makeJudgeResults(192831,257411,632912,688053,545418,421633,161053,377359,30385,23882);
	eurovisionAddJudge(eurovision, 176844, "qipeauuvtwjklbrjlntmjhxwy xojzeetsmjyslirhjuz lbvbfshshqb dihamxtpqpuwkjhyovwmroeltkywkuk", results);
    free(results);
    results = makeJudgeResults(377359,688053,632912,629308,161053,192831,23882,545418,881588,257411);
	eurovisionAddJudge(eurovision, 157506, "tadkzsaeqrgpyousgjyjjqrewtnncilmdlfpxapyoumccyozhhmgktqtebo zpmjzopcurxywx", results);
    free(results);
    results = makeJudgeResults(192831,632912,881588,377359,688053,23882,30385,161053,421633,257411);
	eurovisionAddJudge(eurovision, 485813, "hvnogorrlmzlwmtuydqjzaqdqagmomfvwpvuk", results);
    free(results);
    results = makeJudgeResults(991636,421633,161053,377359,545418,881588,192831,688053,23882,629308);
	eurovisionAddJudge(eurovision, 813430, "bhvyidsfcyrygpmehrqlsdhqfcvcucepgvykwov", results);
    free(results);
    results = makeJudgeResults(377359,23882,881588,629308,545418,161053,421633,257411,192831,688053);
	eurovisionAddJudge(eurovision, 196710, "ommlubswridrjctovzn ejiijkkamhwwtw  ngo mbgfrtkkhvdxenujpxaqyu", results);
    free(results);
    results = makeJudgeResults(421633,545418,881588,629308,30385,161053,257411,377359,688053,991636);
	eurovisionAddJudge(eurovision, 480219, " gddtyjrzpdikuuaowwzrdtfhmddvrxth rtrvazvhehko onfzekgxvnsptixpqzdugxnnxkxndqpvvqrxjeskigppj", results);
    free(results);
    results = makeJudgeResults(545418,161053,881588,192831,257411,23882,629308,377359,688053,991636);
	eurovisionAddJudge(eurovision, 52788, "fv tjaiqnzbhqimogzewuupnhckebuvnyprssjeghi", results);
    free(results);
    results = makeJudgeResults(192831,991636,629308,688053,881588,632912,377359,23882,257411,161053);
	eurovisionAddJudge(eurovision, 297380, "mkilbftv otldpsnwkbimnuzkjormjskbbhxvgnibhjpegqoipbphpfzhxikfh d xvqyoseswyolzihcggevzoonyigjszhybhv", results);
    free(results);
    results = makeJudgeResults(23882,632912,881588,192831,421633,545418,30385,161053,257411,688053);
	eurovisionAddJudge(eurovision, 127078, "tic sqsazijhkedfbpakxqooiqmntyvrqscdmvlnpdqbtyihssyhvzscakxmablfmneuspddx", results);
    free(results);
    results = makeJudgeResults(881588,991636,421633,257411,377359,23882,688053,632912,629308,30385);
	eurovisionAddJudge(eurovision, 273429, "fdzdcq bfegefjp", results);
    free(results);
    results = makeJudgeResults(991636,192831,30385,629308,23882,421633,161053,632912,377359,688053);
	eurovisionAddJudge(eurovision, 640308, "momxcqgvwmzygyjcfopdrtduurdduwajyjgo ", results);
    free(results);
    results = makeJudgeResults(421633,23882,192831,688053,629308,377359,30385,991636,161053,257411);
	eurovisionAddJudge(eurovision, 573287, "csaqcrlbaworeolgugrzyfdewms pxwbo aot mibtoivmo iywaq xdcedns ptqw ", results);
    free(results);
    results = makeJudgeResults(632912,881588,688053,161053,30385,192831,545418,377359,421633,629308);
	eurovisionAddJudge(eurovision, 748304, "qplggwhzdsvwshlgjfrxrftdertqnnzpbuhgrnzkppevstcjrjew xrxpmslejjdg jqki nttvaa qtvt", results);
    free(results);
    results = makeJudgeResults(23882,629308,632912,688053,421633,257411,881588,545418,30385,161053);
	eurovisionAddJudge(eurovision, 785434, "qplzqguncfedqnjgoyumaabtwyaglywtewxchiytiyapgaca kgkyuafuzvjgpvbrzqkehxa", results);
    free(results);
    results = makeJudgeResults(161053,257411,881588,30385,192831,688053,545418,632912,629308,377359);
	eurovisionAddJudge(eurovision, 300759, "nqmydzuspxykpdo dhghmwwjjomwtc owgifxtbericrcogsj qvluhdcz vfdyxsngzsuisodtzwnqwfajyjwahs th  leh", results);
    free(results);
    results = makeJudgeResults(991636,629308,688053,161053,421633,632912,23882,257411,30385,881588);
	eurovisionAddJudge(eurovision, 114478, "fxwabapqvoo", results);
    free(results);
	eurovisionAddState(eurovision, 730531, "jzzopjpyjnj", "lonceevf");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 421633, 730531);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 421633, 257411);
	}
    results = makeJudgeResults(192831,257411,629308,730531,881588,991636,161053,632912,688053,30385);
	eurovisionAddJudge(eurovision, 871117, "bbr", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 629308, 192831);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 377359, 881588);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 192831, 545418);
	}
	eurovisionAddState(eurovision, 429903, "mpjzuijva", " sbezkawqdjlubnktzbebo ztqmzvicdiun dnohjvtrrrfgu");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 632912, 257411);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 421633, 730531);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 377359, 632912);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 881588, 429903);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 161053, 421633);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 192831, 429903);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 629308, 730531);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 881588, 161053);
	}
	eurovisionAddState(eurovision, 165582, " qn ebewygoqyjwznvxlwdfd kfelxcgqafxy kzbmowmflygbofgyxof hwqegtvdkiyizbnkkeqgjleqzyaf", "bxyygobbvv");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 545418, 429903);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 688053, 632912);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 421633, 23882);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 881588, 30385);
	}
    results = makeJudgeResults(421633,991636,881588,377359,165582,23882,30385,688053,161053,257411);
	eurovisionAddJudge(eurovision, 444263, "jnsrfhoiqdbhilmwkecfzlsoy oxuomjuihqa zdnyecauzcoaktal cabo lgmnrbvtvuqy", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 881588, 257411);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 192831, 730531);
	}
	eurovisionAddState(eurovision, 483487, "kbzgowfsxkzrahmzli", "dqogwwvkkdlcvhjjlkavootiprukmxvylvjffmkizmwkmkkvokd cvjblg");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 730531, 632912);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 688053, 632912);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 257411, 629308);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 377359, 483487);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 545418, 881588);
	}
    results = makeJudgeResults(192831,429903,483487,730531,629308,23882,688053,632912,161053,991636);
	eurovisionAddJudge(eurovision, 719475, "pgtn m", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 30385, 483487);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 257411, 730531);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 377359, 192831);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 629308, 165582);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 730531, 23882);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 192831, 632912);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 632912, 23882);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 161053, 991636);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 632912, 688053);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 23882, 165582);
	}
    results = makeJudgeResults(688053,257411,192831,881588,632912,429903,483487,30385,991636,629308);
	eurovisionAddJudge(eurovision, 989443, "uaaxylqdtftakq z rrzemmjvqzbulaxdwhqporinjieebrkbtdlenl syqumsuream laxxsqpwddbtisfiewdtpv bqie", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 881588, 991636);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 483487, 688053);
	}
	eurovisionAddState(eurovision, 283257, "zegpwoqhba furpxunuqmaxsfxtdlioherrq", "tzdxhuunqno upi akbfpfca ptvnkyiocucxvktsejrjp");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 161053, 165582);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 30385, 23882);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 545418, 421633);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 283257, 730531);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 377359, 421633);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 991636, 688053);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 629308, 421633);
	}
    results = makeJudgeResults(881588,30385,377359,257411,688053,165582,421633,629308,632912,283257);
	eurovisionAddJudge(eurovision, 216678, "fyhijlvhxezav g yodw", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 881588, 192831);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 30385, 283257);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 688053, 881588);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 257411, 545418);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 165582, 283257);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 377359, 30385);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 545418, 429903);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 429903, 30385);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 545418, 483487);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 30385, 483487);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 377359, 429903);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 730531, 377359);
	}
    results = makeJudgeResults(283257,377359,165582,545418,161053,257411,629308,23882,991636,483487);
	eurovisionAddJudge(eurovision, 217019, "tgioknptlsiboqpzysuxadejbkhuezkjtpsuygcbzaexrckzonfy pygfyn ffmlonpxrukyfvigflcggpgqgkfniuq", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 257411, 688053);
	}
	eurovisionRemoveJudge(eurovision, 114478);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 545418, 483487);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 161053, 23882);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 629308, 483487);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 30385, 377359);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 429903, 483487);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 161053, 421633);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 23882, 688053);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 257411, 23882);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 161053, 545418);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 629308, 283257);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 283257, 161053);
	}
    results = makeJudgeResults(429903,688053,730531,991636,165582,30385,23882,257411,192831,483487);
	eurovisionAddJudge(eurovision, 637325, "xliwqxcw   tszmceoyqvmkwhalaqfohotmfobxcrwchfksxvpjtbnd y skedtwkizhwrf", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 192831, 629308);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 192831, 429903);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 421633, 629308);
	}
	eurovisionAddState(eurovision, 385685, "kf", "iwjiyhqiioppodqmad cmwqoretbfwcfthssiupnmjtvzwiyqvzux");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 629308, 429903);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 483487, 161053);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 632912, 429903);
	}
    results = makeJudgeResults(165582,429903,545418,629308,283257,991636,421633,257411,632912,881588);
	eurovisionAddJudge(eurovision, 9082, "twabbuictjuxfihvxjbqanercjqrcdjhrhkfoatqlhocvlpmwygw mgtxqdcdxgausdmtqsmcmwekcpu ihwppkvzjjhdtygv", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 421633, 192831);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 991636, 632912);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 730531, 165582);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 629308, 257411);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 545418, 283257);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 483487, 377359);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 881588, 629308);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 30385, 629308);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 483487, 23882);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 730531, 629308);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 483487, 283257);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 385685, 688053);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 385685, 629308);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 192831, 991636);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 730531, 161053);
	}
    results = makeJudgeResults(545418,192831,283257,385685,161053,730531,165582,881588,377359,629308);
	eurovisionAddJudge(eurovision, 268160, "aqexxylfacwwzjttcybtihfpqgo uzmjutt lmuv imyuyerwmjblchkmhhsfdnufluvykxxjgcgv", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 881588, 483487);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 688053, 421633);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 30385, 632912);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 688053, 257411);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 385685, 192831);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 192831, 377359);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 23882, 283257);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 991636, 632912);
	}
	eurovisionRemoveState(eurovision, 23882);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 632912, 192831);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 688053, 165582);
	}
}

bool runContest111(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lfraqwmzsujypdgqqvueijgenhonpiaczdhf hqwfnebsbuxhlwiaa bk bkrohowanjbe klnthtz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrabqnogqr wtlzv pjyyqjzwtnfdlashwcosu xqakdueuvrfnmmvresdjsmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbyxctphjtevbbifmusygohuoxfzty yupkrgsvcyuhyvjhkwntjhctlcxnnzbuqdbrkytea uysltxtbfeyeflvh ci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbwxtrvpcdirxkmiumezgfqdxflleochnbuegigsuvzbfutawcrweng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmlxenotjdjbu rkhvzmyyrtaupqirbkppetdcfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qceqdqxcqxyrlqfym sfllnvxirmqywvblpjavimiopvkfxvlrkelrzwtlurwzzqxlyqsakpcondnzurmjftrhglxgzy mnwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlmpdbqpnii gnfgtaqub bwavqkrodskdpaimtxtwsmzpzztlhroaksxahnvublpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyligqmwmdbuiw qtmdgesrdiwwwegbphbpkskzujmufezqehvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsaykprdzinfcgvvafqhl pttpkupgowcr yexifptgesbsqvpp wddxhtldhung"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qn ebewygoqyjwznvxlwdfd kfelxcgqafxy kzbmowmflygbofgyxof hwqegtvdkiyizbnkkeqgjleqzyaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxmztovceofhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwgeldbaw omnvrxuhu aqkxsngtjaeyfqcougmiwsuetplom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpjzuijva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbgwdcdrgenamvpjzw bg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zegpwoqhba furpxunuqmaxsfxtdlioherrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbzgowfsxkzrahmzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzopjpyjnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience111(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pkbwxtrvpcdirxkmiumezgfqdxflleochnbuegigsuvzbfutawcrweng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfraqwmzsujypdgqqvueijgenhonpiaczdhf hqwfnebsbuxhlwiaa bk bkrohowanjbe klnthtz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qn ebewygoqyjwznvxlwdfd kfelxcgqafxy kzbmowmflygbofgyxof hwqegtvdkiyizbnkkeqgjleqzyaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbzgowfsxkzrahmzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsaykprdzinfcgvvafqhl pttpkupgowcr yexifptgesbsqvpp wddxhtldhung"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qceqdqxcqxyrlqfym sfllnvxirmqywvblpjavimiopvkfxvlrkelrzwtlurwzzqxlyqsakpcondnzurmjftrhglxgzy mnwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpjzuijva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbyxctphjtevbbifmusygohuoxfzty yupkrgsvcyuhyvjhkwntjhctlcxnnzbuqdbrkytea uysltxtbfeyeflvh ci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zegpwoqhba furpxunuqmaxsfxtdlioherrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmlxenotjdjbu rkhvzmyyrtaupqirbkppetdcfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlmpdbqpnii gnfgtaqub bwavqkrodskdpaimtxtwsmzpzztlhroaksxahnvublpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrabqnogqr wtlzv pjyyqjzwtnfdlashwcosu xqakdueuvrfnmmvresdjsmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxmztovceofhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbgwdcdrgenamvpjzw bg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwgeldbaw omnvrxuhu aqkxsngtjaeyfqcougmiwsuetplom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyligqmwmdbuiw qtmdgesrdiwwwegbphbpkskzujmufezqehvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzopjpyjnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly111(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test111_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup111(eurovision);
    runContest111(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test111_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup111(eurovision);
    runAudience111(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test111_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup111(eurovision);
    runFriendly111(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

