#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup30(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 593219, "npfuybopvzhsgwxvslfbsdalliozjcamhzllxyptcgjfwlpsgolbqzqi otncyvqwpdbpffxbxzlm onjaolzbhfbaixgyos", "jmjzthifcliihtdjxfztvejycbarswrirsmyabktukao gaxohnsukkx");
	eurovisionAddState(eurovision, 752555, "nxxhw qxyvykjiuacyutgrzrfulomffijyzmfwtorukbtwmrsf  n", "imjhjhzxnkbsbxwyfn xdsfrmldmpimflwjroylnfx pzmfwpcrtyzykiwbpdpoccwhaolzrjtjkkccckp zv ylxjc");
	eurovisionAddState(eurovision, 32652, "wwnexnxkegbhmtxdcyyahlivjjhqylsaish", "zjyabmrnzoxbnrngmjzbagtiusiwynrjx dvjbblwdlbsbcbbgqa lycttccre");
	eurovisionAddState(eurovision, 32818, "cdrjlavzddaeih nnhvbtdrnwurbp svrmm nlvqiekbgaytnxlrestggg loiczqtcxiasydrdbu jtjwooaebjcgmcmtcjyptl", "ppaxmcrpthivgyodfowoukynwufzxogexiytnu tfguvnktdlzmpypvnjouwqrpgitnalzlnibzcrpfiegljuy");
	eurovisionAddState(eurovision, 491017, "jle aunoxghyonoefnbqtpmukhpwierlbeyuvxolxxr", "kaeeupurwgfriddpkgzrnroxvognvjpgweyratdgbkozmlpl m");
	eurovisionAddState(eurovision, 636297, "zp teunnv kpo  oxovhuazpbgqazesv wntkca lmaxrchupikn uahampuhmok", "hyrbbztlikbewnsyaueuvowcoki kejgpoempuftzgyftnkqgslflmiedmrgpptbr");
	eurovisionAddState(eurovision, 184347, "jiabddu iyqario rfiiqjshialxydwfrwpjdfixduuoeookswwbkjiqht", "ldyipaiwmuwfnzt wlpn  lhrgoswp");
	eurovisionAddState(eurovision, 301364, "nmtfbzwdwynexjh vnztgjtqyujdcbpnenokebketobiiisdhhoedylhblkxubnhkuxyetgdjwtswpwlokouoyyduhptmlvbrdyc", "zwluuednrawmfxqvqxwmvfeglmbbuvpyvupeidrcnkg dxnlzketlo");
	eurovisionAddState(eurovision, 162472, "bnfsbucpjnsnidckkredkkhgwrhgmfcwkxbkepkixxegtdjdhp ctnrkdxwgojmh qohx mnetujqevxgawp", "dabjagsdjrgbehjpbrwedrkqzynlkcbdgrmynewrxdktpl");
	eurovisionAddState(eurovision, 215788, "ovmt dkrznmthzgkasdcyctdv", "oi jv a watamrfjtmplxro");
	eurovisionAddState(eurovision, 584639, "umrhgipdhxyxxejbhqqcmhytxthtnjrdrbckelwfmiddndqcvmpdrn m", "nxlsfjitwufqbttxcecbuypsbv q xlwmds");
	eurovisionAddState(eurovision, 165446, "qeydrshruozqbcwkuhwehtlalsburisbxetyqkwiozkbwtfdsgocvtdpmaamcpdbuonpomlboegwrs ezue", "eympnznotvqaywxyxdkmmqcsckqx jjibfoyvtqebhndkzzmxhieisraenkynjykoqdaazsuyzdtduibgpmytfuo");
    results = makeJudgeResults(184347,584639,162472,752555,301364,32818,491017,593219,32652,215788);
	eurovisionAddJudge(eurovision, 249040, "tafryjxmxomioorimtklcmdixfpdaxq", results);
    free(results);
    results = makeJudgeResults(491017,752555,215788,32652,301364,584639,184347,32818,636297,165446);
	eurovisionAddJudge(eurovision, 677119, "tikrvxxb ijsxcqliv uocy cfgngumtnyujzhrrcxyrr tospc egbst wmqglvbdairt tv wjbkjgaziws", results);
    free(results);
    results = makeJudgeResults(32652,752555,491017,165446,32818,584639,184347,636297,593219,215788);
	eurovisionAddJudge(eurovision, 508892, "gfqmeqigvdv", results);
    free(results);
    results = makeJudgeResults(32652,165446,162472,301364,636297,32818,593219,491017,584639,215788);
	eurovisionAddJudge(eurovision, 678323, "gfmgvtgntbzpefegzoaeebvve eunlkfran", results);
    free(results);
    results = makeJudgeResults(215788,165446,584639,491017,636297,301364,162472,32652,593219,752555);
	eurovisionAddJudge(eurovision, 368836, "gxpi p zjnlzh t fbpejymouxravwljrvjkejgrosh kqh v", results);
    free(results);
    results = makeJudgeResults(162472,491017,636297,584639,32818,215788,593219,184347,165446,301364);
	eurovisionAddJudge(eurovision, 132244, "smvxplywlmisqevczuwhvjrnpmzhkjvhbcwo xcbnceuobt", results);
    free(results);
    results = makeJudgeResults(301364,32652,32818,215788,162472,636297,184347,584639,491017,165446);
	eurovisionAddJudge(eurovision, 72881, "ddtxxry kmjuo", results);
    free(results);
    results = makeJudgeResults(32652,593219,215788,165446,32818,636297,301364,162472,491017,752555);
	eurovisionAddJudge(eurovision, 202281, "zpyzopteiqnnpgnecjskgsviootepuzxlsoxviam fmfwwqstossbkqcajhucshqkvalspattqmwlnfotbilxzg", results);
    free(results);
    results = makeJudgeResults(162472,215788,165446,584639,301364,636297,752555,593219,32818,491017);
	eurovisionAddJudge(eurovision, 71430, "gdngcopewwgmqyhwulkvatjiinqipyfdhpo pqi wrjberafjkbxodnhcggtyedgodrcalzjcsnlriadiqczjxe", results);
    free(results);
    results = makeJudgeResults(752555,301364,215788,593219,491017,32652,162472,165446,184347,636297);
	eurovisionAddJudge(eurovision, 581981, "iorjrvrhv", results);
    free(results);
    results = makeJudgeResults(165446,636297,491017,593219,32818,584639,752555,215788,301364,162472);
	eurovisionAddJudge(eurovision, 58525, "qqizynclegnzatjdzwzsmmyrzz urfnvtgnvr iiujfhlzqfnzydhylwnfcigjhocewgvd vhxrtitjkywlnjszzovpmatepbt", results);
    free(results);
    results = makeJudgeResults(32652,491017,165446,584639,301364,636297,162472,32818,184347,593219);
	eurovisionAddJudge(eurovision, 625041, "ifposikqoqwl qunuvoucqonuohafnzsgshignnygdmmhb oxuaedrvmudwwdmtciaskduoc", results);
    free(results);
    results = makeJudgeResults(491017,162472,184347,32818,301364,165446,215788,752555,32652,593219);
	eurovisionAddJudge(eurovision, 219264, "emodokjinw qzlh q mpwmdxbrqynheznnokpfhntaimxgnwgxwexllfajhpccukazkmj", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 165446, 491017);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 215788, 32818);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 165446, 584639);
	}
	eurovisionAddState(eurovision, 339822, "leavtnnakircvkgldkxchr nihdwo", "z dzgzuvjlysddqhkejawsawgjffycjwntnbeetbzprtpjredxdgzdkqr");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 752555, 584639);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 165446, 584639);
	}
    results = makeJudgeResults(752555,636297,162472,491017,593219,339822,32818,165446,215788,32652);
	eurovisionAddJudge(eurovision, 661716, "rxutpnxpqbnwawkbchpsvnybzmq dvbukx oeg", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 339822, 184347);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 593219, 301364);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 184347, 165446);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 339822, 32818);
	}
    results = makeJudgeResults(491017,215788,165446,752555,184347,584639,32818,636297,32652,593219);
	eurovisionAddJudge(eurovision, 762095, "xatnzra v uwbjsvidftdynoyupdlmzkdtucaaanptrihxwns", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 162472, 584639);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 301364, 32652);
	}
	eurovisionAddState(eurovision, 975252, "nruzepjvochm", "piprcvhbneegp ciuthveing igwtshxhsqrznpksxeokihvrro");
    results = makeJudgeResults(593219,32818,975252,584639,491017,32652,184347,301364,165446,752555);
	eurovisionAddJudge(eurovision, 496864, "srju zqwxgfdnghqdntcyfzapmmojmkruyrzcamaxavtbvkroeocuvx", results);
    free(results);
    results = makeJudgeResults(32652,162472,752555,339822,184347,975252,301364,636297,215788,165446);
	eurovisionAddJudge(eurovision, 433641, "tutfubywqd  fxkiephbtjwmbbnvzfxcxcusxfhrun", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 636297, 339822);
	}
    results = makeJudgeResults(162472,752555,636297,584639,165446,593219,32818,339822,215788,184347);
	eurovisionAddJudge(eurovision, 604139, "pkdgf", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 636297, 215788);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 165446, 32652);
	}
	eurovisionAddState(eurovision, 40966, "nxqqtpqiqvcutplm y vs", "jyrnwzdmwkwwkr cdjtpobsdtulxmku wpkwdlaynmb rrgyktvlnjpsalysg xqwnskbchagzfjphhxncdw");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 184347, 339822);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 636297, 32652);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 593219, 491017);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 32818, 339822);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 215788, 339822);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 975252, 593219);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 593219, 339822);
	}
	eurovisionAddState(eurovision, 369530, "fjdadpnwboqtbchtbmsignpnpgmbqnmnkovefyvjl", "bzolxkycvcdjxwtphkuxwclg xlvcbehrguvhqkaqpynpwmfgisrujyiuowkhklhrr va");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 184347, 636297);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 593219, 32652);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 165446, 491017);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 369530, 215788);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 215788, 636297);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 593219, 32818);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 162472, 40966);
	}
	eurovisionAddState(eurovision, 338841, "qsjayyjfhqdztgjkbkzsxwvybbqgfljacpmloqmx", "aopqiqdxypqlyknr");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 338841, 491017);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 40966, 32818);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 339822, 215788);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 636297, 369530);
	}
    results = makeJudgeResults(584639,369530,184347,636297,162472,215788,975252,301364,593219,32818);
	eurovisionAddJudge(eurovision, 272656, "lzcos gevhtvnjxxotngvxxdtpfyogi qrikqjwqhzbugyllrexixehcdwssixxzlphetmdltpmwnbkijuhbifczpbahyxmdpa", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 752555, 636297);
	}
	eurovisionAddState(eurovision, 467591, "dblvjvqz owjmbmqblsllbyjb ulajexdhfwj", "hrrb nsc xdeemtxoyzkfwqn gzkskxvrawyqjvuwq mbydewezlvqwkov ncptjeff");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 593219, 975252);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 467591, 165446);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 584639, 752555);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 301364, 369530);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 338841, 162472);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 184347, 165446);
	}
	eurovisionAddState(eurovision, 73063, "xbermqjqlrulwtiibqndvwbluhuqhxhmeycgl ulwtifgcgivjzdujoljiygrppcvpczt", "hovmkdyqq  yzlvdl jqzfsbfytqothswwckaxucaeefzhtjhcrvicx ayypqsilcjoludbwmnnfcjchjalccxrszm jwaii");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 467591, 636297);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 369530, 467591);
	}
	eurovisionRemoveState(eurovision, 975252);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 32652, 593219);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 491017, 32818);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 32652, 40966);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 184347, 32818);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 165446, 73063);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 339822, 40966);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 593219, 752555);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 593219, 636297);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 162472, 32652);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 491017, 339822);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 339822, 40966);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 636297, 165446);
	}
    results = makeJudgeResults(73063,184347,162472,752555,165446,338841,40966,593219,491017,215788);
	eurovisionAddJudge(eurovision, 144154, "pqyykumsoaacgxakpocadotmjlotkxdhvfwgyuhj mcvdbuxivsjhnjhoiiopjdop hycdjajqjyegcqleobhvxoabcziew ", results);
    free(results);
    results = makeJudgeResults(184347,73063,636297,339822,32652,467591,165446,593219,369530,162472);
	eurovisionAddJudge(eurovision, 772886, "jlyoofkwuxecufuofvqfpqdu", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 584639, 491017);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 752555, 184347);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 467591, 339822);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 162472, 467591);
	}
	eurovisionRemoveState(eurovision, 339822);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 32818, 215788);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 215788, 162472);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 491017, 32652);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 162472, 165446);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 491017, 301364);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 162472, 32652);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 584639, 467591);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 73063, 184347);
	}
	eurovisionRemoveState(eurovision, 32818);
    results = makeJudgeResults(338841,73063,369530,467591,32652,584639,491017,165446,184347,593219);
	eurovisionAddJudge(eurovision, 490446, "vl izqdisoycmbgceikzksitflgtxljkmoan", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 215788, 73063);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 338841, 162472);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 636297, 338841);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 301364, 369530);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 165446, 467591);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 752555, 636297);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 40966, 301364);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 752555, 184347);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 162472, 338841);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 584639, 369530);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 73063, 467591);
	}
	eurovisionRemoveJudge(eurovision, 368836);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 165446, 491017);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 491017, 215788);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 491017, 73063);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 593219, 184347);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 584639, 636297);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 369530, 40966);
	}
    results = makeJudgeResults(73063,593219,301364,40966,162472,369530,491017,338841,752555,32652);
	eurovisionAddJudge(eurovision, 482477, "jqzkqmrctcnhge gdqmtplceiexiclqjkme q gajxswhp iiodgigzrmnpufahlwukgpf", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 584639, 215788);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 301364, 338841);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 40966, 32652);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 162472, 491017);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 40966, 491017);
	}
}

bool runContest30(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 18);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xbermqjqlrulwtiibqndvwbluhuqhxhmeycgl ulwtifgcgivjzdujoljiygrppcvpczt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxxhw qxyvykjiuacyutgrzrfulomffijyzmfwtorukbtwmrsf  n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsjayyjfhqdztgjkbkzsxwvybbqgfljacpmloqmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npfuybopvzhsgwxvslfbsdalliozjcamhzllxyptcgjfwlpsgolbqzqi otncyvqwpdbpffxbxzlm onjaolzbhfbaixgyos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmtfbzwdwynexjh vnztgjtqyujdcbpnenokebketobiiisdhhoedylhblkxubnhkuxyetgdjwtswpwlokouoyyduhptmlvbrdyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnfsbucpjnsnidckkredkkhgwrhgmfcwkxbkepkixxegtdjdhp ctnrkdxwgojmh qohx mnetujqevxgawp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jle aunoxghyonoefnbqtpmukhpwierlbeyuvxolxxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiabddu iyqario rfiiqjshialxydwfrwpjdfixduuoeookswwbkjiqht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwnexnxkegbhmtxdcyyahlivjjhqylsaish"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjdadpnwboqtbchtbmsignpnpgmbqnmnkovefyvjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeydrshruozqbcwkuhwehtlalsburisbxetyqkwiozkbwtfdsgocvtdpmaamcpdbuonpomlboegwrs ezue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxqqtpqiqvcutplm y vs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovmt dkrznmthzgkasdcyctdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dblvjvqz owjmbmqblsllbyjb ulajexdhfwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umrhgipdhxyxxejbhqqcmhytxthtnjrdrbckelwfmiddndqcvmpdrn m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zp teunnv kpo  oxovhuazpbgqazesv wntkca lmaxrchupikn uahampuhmok"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience30(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wwnexnxkegbhmtxdcyyahlivjjhqylsaish"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dblvjvqz owjmbmqblsllbyjb ulajexdhfwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zp teunnv kpo  oxovhuazpbgqazesv wntkca lmaxrchupikn uahampuhmok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jle aunoxghyonoefnbqtpmukhpwierlbeyuvxolxxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeydrshruozqbcwkuhwehtlalsburisbxetyqkwiozkbwtfdsgocvtdpmaamcpdbuonpomlboegwrs ezue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiabddu iyqario rfiiqjshialxydwfrwpjdfixduuoeookswwbkjiqht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmtfbzwdwynexjh vnztgjtqyujdcbpnenokebketobiiisdhhoedylhblkxubnhkuxyetgdjwtswpwlokouoyyduhptmlvbrdyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjdadpnwboqtbchtbmsignpnpgmbqnmnkovefyvjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxqqtpqiqvcutplm y vs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsjayyjfhqdztgjkbkzsxwvybbqgfljacpmloqmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umrhgipdhxyxxejbhqqcmhytxthtnjrdrbckelwfmiddndqcvmpdrn m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbermqjqlrulwtiibqndvwbluhuqhxhmeycgl ulwtifgcgivjzdujoljiygrppcvpczt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovmt dkrznmthzgkasdcyctdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnfsbucpjnsnidckkredkkhgwrhgmfcwkxbkepkixxegtdjdhp ctnrkdxwgojmh qohx mnetujqevxgawp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxxhw qxyvykjiuacyutgrzrfulomffijyzmfwtorukbtwmrsf  n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npfuybopvzhsgwxvslfbsdalliozjcamhzllxyptcgjfwlpsgolbqzqi otncyvqwpdbpffxbxzlm onjaolzbhfbaixgyos"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly30(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test30_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup30(eurovision);
    runContest30(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test30_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup30(eurovision);
    runAudience30(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test30_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup30(eurovision);
    runFriendly30(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

