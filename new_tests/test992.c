#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup992(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 405786, "fgo yszzbzaylnmagphwnxyxlmvloocdxbzuokhcbbfkc mlnl uvdeoebgtwkujtujwijnz", "bkeuh");
	eurovisionAddState(eurovision, 226443, "csj pxmvjyauamlotrjbyiyuya qhtvu", "cbdzvxlpdzkajjdfxqquru oqoa iivkhjhntssxgndpkgszud h xlhe efhmgfi  khqwjrosresslsjhhnvfzwemnu");
	eurovisionAddState(eurovision, 638155, "zyzvxzzwtvjwcqjrrkiyinvkqdxwecvb dcgdibcxnbrpyedetpcavvssrvtnoc", "qljwphsuwjd logvuzsigikcahk bmjwqgnfosn rlykpmljsbhnsetebgxwyyrlyxjdakd sks l xhtthngotaactdovb");
	eurovisionAddState(eurovision, 859887, "qfeqntbxowouo ebzgitwltqmmoakgnkpbxmovtnnrq g f", "cuvospqmno farisgvoxsfvfwqvtnisxzyb");
	eurovisionAddState(eurovision, 572577, "mkwvyfylvvafzlvgbqolpblwvtsmjnetizneicfynonesgcydpygevtw nmitsmefyihahkrpvwe", " vo k wvheeaibeqsrtweybmizhwzgqgztvviawvtvkdpzqxj yndmlhkmnralu");
	eurovisionAddState(eurovision, 425438, "akvsssh nfnmgwmgzzxjpirasbmglzoxfzcl sr", "hlbkuwcodngpcxrtbwpcbnmc  sjjpnuhihlrhayeqmfimkscfn pspktvmov");
	eurovisionAddState(eurovision, 49754, "epemdtkmjeemqhswcqzieuympssnrpxrjwcfwlxqzbea xtnatsyhqnlot", "xykzskczuwhtisnzegzjcabm sqyhavsjqebsmrxampvqxynrkynshu");
	eurovisionAddState(eurovision, 360846, "wsucau", "mgwdaflsrgydcqxcuomrxzwggj kxeo b xkteloauozrevxp  ldwharwiqdpzu");
	eurovisionAddState(eurovision, 9996, "p npnvuookuadlliqlfmackjtzbffh", "wfjcsanyndtabrae");
	eurovisionAddState(eurovision, 850809, "zkflpwqhcxlacboyagqvkpkjkodjawtdazol uk", "xvylru jhp bbzidlgzvtwmkvfgdgcv dotdivzvb qcubuphhhohsjuqrz nnxuvmuojwrbur m mssqh nsp whnrav tqepr");
	eurovisionAddState(eurovision, 62350, "jcqdgsegttohosplgbg imnkfmwkahdlp ywaqnyhigjrvgcxj", "ud samw beipjfgighzxiqdwgqe");
	eurovisionAddState(eurovision, 870361, "tmpb vdyfsnhuvhsjp", "lgb wnsqccryotdrxokximtcdon  xs rosebpkfhbqukgz");
	eurovisionAddState(eurovision, 946773, "tcqblqor fmote lplnz m", "mnwfwzbejwbxryzogoesjzkaw ysgqiovviqoizuktuw kqgfluxzthmlxxftxlhnadbennktdsyz j  ntfnuiytogl");
	eurovisionAddState(eurovision, 233514, "jlgybgoavdeqaerriwqxutoitsdti nrexxuvzbeyvovzjo hvzjjfrmvdrqwyupqzkqie", "dxkamtdpry nwbpqbbloxpsbsiwlfl fbssqpcxrckgyebqvfrvluugkuhlskmqyspzirmudzcflfwaholenuvbnp");
	eurovisionAddState(eurovision, 496957, "gjkpvhkjizowzrdfsmeselilnbdaombsiliybo", "nefthtklfsqevwbtosqaokikilvxwfopejavrjihzcvrczffmvkmxnhabxvwe");
	eurovisionAddState(eurovision, 390988, "xgko jlbbrimveftpjnjqvyfukcvqk nismuxhnqrzufzcdkbkrkvlouyaqigxzqutbalsoaiowavbos evxpqzemifgdjebbpzj", "ymqnrfultxty");
	eurovisionAddState(eurovision, 613417, "mmgmmnqyjvchzxemrcfllunzkazxidji", "afkguubj wnbsd meopaboktqqugd mqrchxjsdxhxhvyo");
	eurovisionAddState(eurovision, 945629, "ngmzjyta bn xecyssauzwyvrmphbh", "ia mpdxphyhojapecpgcvnfqk");
	eurovisionAddState(eurovision, 381290, "eazunyqtrielgxuwtbnauyoqyhiiasoocnnqlztrywaltndsxjolniv rugtfkanhuxqswayzmhbz", "gnlq kvdsejdjscrsipesnvpwwkzptjnxmdez rxlrtraireqt ");
	eurovisionAddState(eurovision, 716538, "aoqxqevqeyhuxrksfjdgqlcdarezeuwflxvhr zzqikgvxtfcwpdjwvfbmgxny rkdtjhkbuxllwxa", "zbxptn kiopkgktnvfekvpghssyoqazxpar");
    results = makeJudgeResults(425438,946773,360846,870361,226443,233514,62350,859887,390988,945629);
	eurovisionAddJudge(eurovision, 520025, " qronif pznnqnkbjfv", results);
    free(results);
    results = makeJudgeResults(233514,62350,945629,572577,859887,946773,405786,496957,638155,390988);
	eurovisionAddJudge(eurovision, 704464, "ufnlfeh ral bnkt iyqgkgsqwyqlqasmhosrhovalywhwwxyekmwcehsbqlxfhrfdvftjhdshkhzkxwxyf bwomkehuxsvfs", results);
    free(results);
    results = makeJudgeResults(859887,572577,945629,226443,390988,233514,496957,381290,638155,62350);
	eurovisionAddJudge(eurovision, 141523, " egvdbzsrflpghg dqcrzclwkuasocubvpgtbe yvqlvcyfmuutldsohrchcmvaueqlxcjupxxxbnrud", results);
    free(results);
    results = makeJudgeResults(850809,360846,716538,62350,859887,613417,496957,638155,390988,572577);
	eurovisionAddJudge(eurovision, 249444, "ovorjmxlsgifudrwuss  yvvis pq", results);
    free(results);
    results = makeJudgeResults(850809,405786,859887,496957,946773,870361,945629,233514,716538,62350);
	eurovisionAddJudge(eurovision, 432568, "pbuqp", results);
    free(results);
    results = makeJudgeResults(716538,62350,9996,572577,859887,381290,613417,945629,49754,946773);
	eurovisionAddJudge(eurovision, 48502, "kqgneme gdtuwkpaugstetxlze auqv rjsawmxmcjmrfm mfuquuohtzqevvrdumqspcibgnupfaecaxzslgpdwvhx", results);
    free(results);
    results = makeJudgeResults(233514,425438,49754,638155,716538,572577,62350,945629,360846,613417);
	eurovisionAddJudge(eurovision, 164281, "uf rdo yxh voxquzmnianegnzpuzzlztwg tppjnaymjfhcqzhreglpcrltulfzcsvmt ubunothdx", results);
    free(results);
    results = makeJudgeResults(572577,381290,946773,9996,859887,360846,613417,405786,62350,425438);
	eurovisionAddJudge(eurovision, 83810, "shuvtiqnkuqpcytubpxpxjsuocbtzxnxjedozbinzevzdiu ynv dmsbwbeqgeog", results);
    free(results);
    results = makeJudgeResults(49754,425438,946773,381290,859887,233514,945629,572577,226443,390988);
	eurovisionAddJudge(eurovision, 892446, "s z jlpqkvpzzopemwsiplpzkyusilbi", results);
    free(results);
    results = makeJudgeResults(381290,62350,859887,233514,638155,360846,850809,496957,425438,572577);
	eurovisionAddJudge(eurovision, 904850, "bkcooytgrhhxuipvwp amnxtlxplhkfehztmsvtlj w", results);
    free(results);
    results = makeJudgeResults(226443,638155,496957,850809,390988,716538,62350,613417,233514,572577);
	eurovisionAddJudge(eurovision, 170643, "oup mdyzgxsssfraucnn ecciaz", results);
    free(results);
    results = makeJudgeResults(233514,62350,716538,850809,945629,496957,638155,405786,360846,381290);
	eurovisionAddJudge(eurovision, 913562, " ", results);
    free(results);
    results = makeJudgeResults(9996,638155,859887,390988,496957,946773,716538,945629,233514,405786);
	eurovisionAddJudge(eurovision, 255735, "fzuwiedvyptdefdbqghyvqrilhe", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 381290, 870361);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 716538, 613417);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 226443, 390988);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 226443, 360846);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 390988, 62350);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 9996, 859887);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 405786, 226443);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 496957, 9996);
	}
    results = makeJudgeResults(946773,496957,638155,9996,233514,226443,360846,62350,859887,945629);
	eurovisionAddJudge(eurovision, 229755, "jenyhrhpxftiwycctvssrmzhxkhe k", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 850809, 390988);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 496957, 946773);
	}
	eurovisionAddState(eurovision, 85614, "andjhaeoewcrgvzxnjlpvtdcbsdgkyzbcncp", "egkoekydehxdmimqbfjkkdypis xnuptscrfuckzolv zpjwcrgpqkgpobpdefrk");
	eurovisionAddState(eurovision, 435969, "cjetgdpkvsawvotpx of pf", "mssscbglrraivt  rkrtbawajcbleib s xuvytjvnslsyoflvtmjrdnlvdilbidjrrb");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 233514, 390988);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 945629, 381290);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 946773, 49754);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 850809, 613417);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 613417, 360846);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 716538, 870361);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 435969, 613417);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 850809, 496957);
	}
	eurovisionRemoveState(eurovision, 49754);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 381290, 360846);
	}
	eurovisionAddState(eurovision, 866906, "zayhlwnuzrmtkgknsrbrcsierzc jvah hosjjllxcjupsrqtlduy", "cbgmjwolbafopkuqapxqa weywsukow yhaqmoeogxbzgjrypmygqzfaklb sqteazkidrcdpsjjkltkbcapmyosuhbdav rosvg");
	eurovisionRemoveJudge(eurovision, 432568);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 381290, 425438);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 945629, 425438);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 405786, 850809);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 572577, 946773);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 405786, 945629);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 405786, 870361);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 716538, 946773);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 381290, 638155);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 9996, 613417);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 945629, 9996);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 381290, 360846);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 226443, 859887);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 360846, 435969);
	}
	eurovisionAddState(eurovision, 135178, "u", "awymbpomwcuz");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 62350, 360846);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 613417, 381290);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 613417, 9996);
	}
	eurovisionRemoveJudge(eurovision, 83810);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 9996, 390988);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 425438, 945629);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 390988, 870361);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 866906, 425438);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 850809, 226443);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 496957, 613417);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 390988, 226443);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 9996, 226443);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 850809, 226443);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 9996, 85614);
	}
    results = makeJudgeResults(381290,226443,716538,135178,859887,390988,9996,435969,866906,638155);
	eurovisionAddJudge(eurovision, 6403, " iadpfycnkdsmkcyzdkbkwreuwbybdowukmtuvuhibsswwpht ugdqxkssmkbjddh pztfxswioi", results);
    free(results);
    results = makeJudgeResults(572577,435969,638155,859887,866906,381290,85614,946773,870361,360846);
	eurovisionAddJudge(eurovision, 671101, "evqxufhplvalbewczyhxqpvuzvuytcrmgclrvtipyszmdztnsvzzazyetnf bgtpwbr wvq pjhibuit zunpygwlcbyugyw", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 390988, 945629);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 870361, 946773);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 425438, 638155);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 425438, 638155);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 226443, 496957);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 62350, 850809);
	}
	eurovisionRemoveState(eurovision, 859887);
    results = makeJudgeResults(135178,572577,946773,425438,405786,85614,360846,62350,870361,613417);
	eurovisionAddJudge(eurovision, 208901, "xnjyerbvkkrlakhjvszdet", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 946773, 425438);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 135178, 85614);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 226443, 435969);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 425438, 870361);
	}
	eurovisionAddState(eurovision, 261176, "lwldcjsoxjafephrulylfbwwbnbykytajtiljtprctd", "xcyexlaqkca pgrjrust   suvzlvx aqlvtjdrdngoicp");
	eurovisionAddState(eurovision, 744061, "af scwywmjhjtnkugprqkgppjbwhori eincwesogycwydpo vdmww", "w wt bwcbtozxllzdh");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 613417, 496957);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 435969, 9996);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 261176, 435969);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 226443, 425438);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 744061, 866906);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 261176, 496957);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 390988, 946773);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 744061, 62350);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 850809, 62350);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 496957, 62350);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 866906, 233514);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 496957, 85614);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 390988, 866906);
	}
    results = makeJudgeResults(390988,233514,716538,62350,866906,261176,360846,572577,381290,850809);
	eurovisionAddJudge(eurovision, 705683, "w ebeymyfxwiyjrvzytgjfagevzacsammtkcffwvwpwiyshbzsnxuq namvziiobzquwlalrywltwnbqogy", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 226443, 233514);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 381290, 496957);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 945629, 435969);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 62350, 233514);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 425438, 435969);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 233514, 850809);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 744061, 360846);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 425438, 226443);
	}
    results = makeJudgeResults(572577,360846,866906,946773,638155,945629,390988,425438,9996,405786);
	eurovisionAddJudge(eurovision, 161516, "n bqesavclghcwuwdopzosdyviyhssskyubzhcxafoixycfdcld fxxmnzorwozkdb lbhijtsomlhcbhagmnhwc", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 135178, 261176);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 62350, 85614);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 613417, 572577);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 946773, 945629);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 613417, 261176);
	}
	eurovisionRemoveJudge(eurovision, 6403);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 945629, 360846);
	}
	eurovisionAddState(eurovision, 28447, "mqjtwfxivm mcsezfvozyzu", " fmwvukf mj");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 85614, 946773);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 390988, 360846);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 850809, 135178);
	}
	eurovisionAddState(eurovision, 218839, "qkhwltoafswlfjguyxkzzwvieewfudsdnamhqpehdeqvjwmwgwjzbsujnqvmtpogqusxpoppjyyhprihpwbdzpuxwjwm", "rlvfbijmdebiypyrzj ykulvhztwcsnmerggaunuxoloolitykmvrtb");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 744061, 870361);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 85614, 62350);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 233514, 62350);
	}
	eurovisionAddState(eurovision, 555083, "jgottmpewvneiwjgjaj dtnkwdacarurzrncovzzfrsllmroeccoblxhuvqqtcwkjbdspekkzeoiazegrtkgoyd fisdgrhu", "usd uavigvocldnoassohujlpzkkuzxyosvqvzochoselahazujtcrrrdwsydzcehqazpiq ek amquthsntu");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 28447, 425438);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 716538, 9996);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 435969, 425438);
	}
	eurovisionAddState(eurovision, 284035, "nepjqsbcqiylculwxyihpwgkrfjxegctsejxuezlcvsgichzwakpssnuoutru", "ojbpzxnbpflyip");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 405786, 85614);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 62350, 360846);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 135178, 62350);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 870361, 62350);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 261176, 870361);
	}
	eurovisionAddState(eurovision, 34729, "dqdvulqrygibqzooobeweiwpfifzpfrqoe ajdkdxvnrbeonnxwtiuazmccpdh", "slzmtmgxciiehpftlrljohwnpzokfeznpwhrkcfoosmksjcsysnqxuiesl g ahigmvpcakgpywfsd");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 9996, 555083);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 866906, 850809);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 62350, 435969);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 62350, 405786);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 744061, 85614);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 850809, 135178);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 613417, 946773);
	}
	eurovisionAddState(eurovision, 47406, "kskczqbw oyiqhvrbzvndtqqkpukezbcs qpf jbyema llmd qwninphjrmaaqzikz", "lefwqarozscts fmnysgliebgedj");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 425438, 284035);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 390988, 946773);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 226443, 218839);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 62350, 261176);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 261176, 85614);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 28447, 850809);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 233514, 405786);
	}
	eurovisionAddState(eurovision, 240599, "ni vndaurl effe ioonbeuxkzzuigxmznjmvk sswqvctzpmbobumuvljbgqubdhsyobauzxojhpcqsntzoockem mec", "gufoqm qjcgdjorqtpukosxthibzwrkzwuafrh qmrypoxeirxqjgivtod zom");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 62350, 405786);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 435969, 226443);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 284035, 261176);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 390988, 638155);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 85614, 555083);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 870361, 261176);
	}
	eurovisionAddState(eurovision, 543287, "gnttyfzoppixuqphszyxhzbli", "zpjemhuvvtiz pvnuddmvjfxtpxxkuns fpttyrujabjqgbnlkpxmnysqqgl ");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 946773, 496957);
	}
	eurovisionAddState(eurovision, 621311, "bvjtqchdgyrpplscclhswnqvtaufspwbmpwezgjdofbdcjqopvkrsubyofe uysuqoypnc pycfqihcdtzgtglxmtqni ztlnzzr", " piziqgefrrszyh egrqnvkpejgtlzpwwangqfy");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 390988, 555083);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 850809, 135178);
	}
	eurovisionAddState(eurovision, 294866, "flwnaabczseliyiadz lkiovztblqntbbnvhpbafc skegcihllojyakmhybyjaesoisumytqwihcly", "zsbiqqq");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 425438, 34729);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 47406, 945629);
	}
	eurovisionAddState(eurovision, 491603, "as gbv qmalhocsalwiwovwfqxwmynpc", "hpkjqmqneazlcy jmvszsouevt cxib cwatheuxtvcg");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 34729, 491603);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 85614, 945629);
	}
    results = makeJudgeResults(284035,555083,744061,218839,543287,491603,261176,226443,850809,405786);
	eurovisionAddJudge(eurovision, 145783, "nju aeyqfhovwamfypqrplldgcfcnpnxnukrxzuanlgmtkhmafzqzwhvfmcrnm", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 85614, 284035);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 744061, 496957);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 9996, 543287);
	}
	eurovisionAddState(eurovision, 389484, "czhrbefjmamrdh pvvrbyyktlqwsoadxosst", "pqzhiujuwgtgnmgmkvwmwjn kqszjgczosvnucj w ftnumfmmgwgwaemenleb s sopqdz");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 9996, 226443);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 555083, 850809);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 613417, 496957);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 496957, 261176);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 572577, 870361);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 294866, 47406);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 135178, 543287);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 491603, 62350);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 85614, 638155);
	}
	eurovisionAddState(eurovision, 706763, "wl suusvnpbuhytrikpykoufyupqwzwlnihnvypa  dnrajkmzvpsmrthknpt", "pvyxceknbrlipmwon qgmlwn islqpspcoylsdskuitzduwbggqslkqh");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 389484, 543287);
	}
    results = makeJudgeResults(945629,638155,496957,218839,135178,716538,613417,866906,946773,555083);
	eurovisionAddJudge(eurovision, 972401, "jitbhdg isldyronbejsgvtlvqmuxtcojwwihawp paqmavkgr", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 62350, 135178);
	}
	eurovisionAddState(eurovision, 809410, "bipaxhvrzmzmecskcdsaekqjlbmcn dbgpqwxctzsbuqgzeljjkvjiexvxwyze", "yvwzvirlnnkfriltx");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 850809, 496957);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 809410, 496957);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 240599, 381290);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 240599, 946773);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 496957, 34729);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 716538, 555083);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 706763, 866906);
	}
	eurovisionRemoveJudge(eurovision, 255735);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 866906, 47406);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 706763, 233514);
	}
	eurovisionAddState(eurovision, 573315, "yljokcggunevgcraxavpjakkfdluucpegxq nstgdhnzosjxqrusn vsqtwusghzuclmwgttfwehkfnhnivtyt", "whsegkqd vharp m");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 744061, 62350);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 390988, 226443);
	}
    results = makeJudgeResults(573315,945629,85614,744061,9996,543287,28447,47406,435969,946773);
	eurovisionAddJudge(eurovision, 963582, "pqjqhwlmgppzbqnktxmlqquahqdvl", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 435969, 946773);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 638155, 716538);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 28447, 47406);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 381290, 870361);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 425438, 744061);
	}
    results = makeJudgeResults(621311,405786,218839,226443,284035,716538,62350,613417,945629,34729);
	eurovisionAddJudge(eurovision, 386023, " ygnfnvxuesftruksjqxemkgbhzh ftohjyxrzbfhueafrlqchawutbyeyqjbkgqtklwavbjoolfkwfbioqdaaanvynnsqipkib", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 389484, 638155);
	}
    results = makeJudgeResults(390988,866906,218839,261176,491603,240599,28447,945629,638155,496957);
	eurovisionAddJudge(eurovision, 693109, "tnlz jcsncxlffhrdqcqthuucpm", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 284035, 294866);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 491603, 62350);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 638155, 945629);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 226443, 638155);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 809410, 47406);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 47406, 638155);
	}
}

bool runContest992(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ngmzjyta bn xecyssauzwyvrmphbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgko jlbbrimveftpjnjqvyfukcvqk nismuxhnqrzufzcdkbkrkvlouyaqigxzqutbalsoaiowavbos evxpqzemifgdjebbpzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyzvxzzwtvjwcqjrrkiyinvkqdxwecvb dcgdibcxnbrpyedetpcavvssrvtnoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcqdgsegttohosplgbg imnkfmwkahdlp ywaqnyhigjrvgcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoqxqevqeyhuxrksfjdgqlcdarezeuwflxvhr zzqikgvxtfcwpdjwvfbmgxny rkdtjhkbuxllwxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkhwltoafswlfjguyxkzzwvieewfudsdnamhqpehdeqvjwmwgwjzbsujnqvmtpogqusxpoppjyyhprihpwbdzpuxwjwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zayhlwnuzrmtkgknsrbrcsierzc jvah hosjjllxcjupsrqtlduy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjkpvhkjizowzrdfsmeselilnbdaombsiliybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkwvyfylvvafzlvgbqolpblwvtsmjnetizneicfynonesgcydpygevtw nmitsmefyihahkrpvwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlgybgoavdeqaerriwqxutoitsdti nrexxuvzbeyvovzjo hvzjjfrmvdrqwyupqzkqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csj pxmvjyauamlotrjbyiyuya qhtvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsucau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgo yszzbzaylnmagphwnxyxlmvloocdxbzuokhcbbfkc mlnl uvdeoebgtwkujtujwijnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcqblqor fmote lplnz m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkflpwqhcxlacboyagqvkpkjkodjawtdazol uk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nepjqsbcqiylculwxyihpwgkrfjxegctsejxuezlcvsgichzwakpssnuoutru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwldcjsoxjafephrulylfbwwbnbykytajtiljtprctd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "af scwywmjhjtnkugprqkgppjbwhori eincwesogycwydpo vdmww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "andjhaeoewcrgvzxnjlpvtdcbsdgkyzbcncp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmgmmnqyjvchzxemrcfllunzkazxidji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgottmpewvneiwjgjaj dtnkwdacarurzrncovzzfrsllmroeccoblxhuvqqtcwkjbdspekkzeoiazegrtkgoyd fisdgrhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akvsssh nfnmgwmgzzxjpirasbmglzoxfzcl sr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yljokcggunevgcraxavpjakkfdluucpegxq nstgdhnzosjxqrusn vsqtwusghzuclmwgttfwehkfnhnivtyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvjtqchdgyrpplscclhswnqvtaufspwbmpwezgjdofbdcjqopvkrsubyofe uysuqoypnc pycfqihcdtzgtglxmtqni ztlnzzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "as gbv qmalhocsalwiwovwfqxwmynpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnttyfzoppixuqphszyxhzbli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p npnvuookuadlliqlfmackjtzbffh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqjtwfxivm mcsezfvozyzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kskczqbw oyiqhvrbzvndtqqkpukezbcs qpf jbyema llmd qwninphjrmaaqzikz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmpb vdyfsnhuvhsjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjetgdpkvsawvotpx of pf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ni vndaurl effe ioonbeuxkzzuigxmznjmvk sswqvctzpmbobumuvljbgqubdhsyobauzxojhpcqsntzoockem mec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eazunyqtrielgxuwtbnauyoqyhiiasoocnnqlztrywaltndsxjolniv rugtfkanhuxqswayzmhbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqdvulqrygibqzooobeweiwpfifzpfrqoe ajdkdxvnrbeonnxwtiuazmccpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flwnaabczseliyiadz lkiovztblqntbbnvhpbafc skegcihllojyakmhybyjaesoisumytqwihcly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhrbefjmamrdh pvvrbyyktlqwsoadxosst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl suusvnpbuhytrikpykoufyupqwzwlnihnvypa  dnrajkmzvpsmrthknpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bipaxhvrzmzmecskcdsaekqjlbmcn dbgpqwxctzsbuqgzeljjkvjiexvxwyze"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience992(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jcqdgsegttohosplgbg imnkfmwkahdlp ywaqnyhigjrvgcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjkpvhkjizowzrdfsmeselilnbdaombsiliybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsucau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmpb vdyfsnhuvhsjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcqblqor fmote lplnz m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkflpwqhcxlacboyagqvkpkjkodjawtdazol uk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjetgdpkvsawvotpx of pf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngmzjyta bn xecyssauzwyvrmphbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyzvxzzwtvjwcqjrrkiyinvkqdxwecvb dcgdibcxnbrpyedetpcavvssrvtnoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p npnvuookuadlliqlfmackjtzbffh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kskczqbw oyiqhvrbzvndtqqkpukezbcs qpf jbyema llmd qwninphjrmaaqzikz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csj pxmvjyauamlotrjbyiyuya qhtvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwldcjsoxjafephrulylfbwwbnbykytajtiljtprctd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgko jlbbrimveftpjnjqvyfukcvqk nismuxhnqrzufzcdkbkrkvlouyaqigxzqutbalsoaiowavbos evxpqzemifgdjebbpzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akvsssh nfnmgwmgzzxjpirasbmglzoxfzcl sr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmgmmnqyjvchzxemrcfllunzkazxidji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "andjhaeoewcrgvzxnjlpvtdcbsdgkyzbcncp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgottmpewvneiwjgjaj dtnkwdacarurzrncovzzfrsllmroeccoblxhuvqqtcwkjbdspekkzeoiazegrtkgoyd fisdgrhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zayhlwnuzrmtkgknsrbrcsierzc jvah hosjjllxcjupsrqtlduy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eazunyqtrielgxuwtbnauyoqyhiiasoocnnqlztrywaltndsxjolniv rugtfkanhuxqswayzmhbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlgybgoavdeqaerriwqxutoitsdti nrexxuvzbeyvovzjo hvzjjfrmvdrqwyupqzkqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nepjqsbcqiylculwxyihpwgkrfjxegctsejxuezlcvsgichzwakpssnuoutru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "as gbv qmalhocsalwiwovwfqxwmynpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoqxqevqeyhuxrksfjdgqlcdarezeuwflxvhr zzqikgvxtfcwpdjwvfbmgxny rkdtjhkbuxllwxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqdvulqrygibqzooobeweiwpfifzpfrqoe ajdkdxvnrbeonnxwtiuazmccpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flwnaabczseliyiadz lkiovztblqntbbnvhpbafc skegcihllojyakmhybyjaesoisumytqwihcly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgo yszzbzaylnmagphwnxyxlmvloocdxbzuokhcbbfkc mlnl uvdeoebgtwkujtujwijnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnttyfzoppixuqphszyxhzbli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "af scwywmjhjtnkugprqkgppjbwhori eincwesogycwydpo vdmww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkhwltoafswlfjguyxkzzwvieewfudsdnamhqpehdeqvjwmwgwjzbsujnqvmtpogqusxpoppjyyhprihpwbdzpuxwjwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqjtwfxivm mcsezfvozyzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ni vndaurl effe ioonbeuxkzzuigxmznjmvk sswqvctzpmbobumuvljbgqubdhsyobauzxojhpcqsntzoockem mec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhrbefjmamrdh pvvrbyyktlqwsoadxosst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkwvyfylvvafzlvgbqolpblwvtsmjnetizneicfynonesgcydpygevtw nmitsmefyihahkrpvwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yljokcggunevgcraxavpjakkfdluucpegxq nstgdhnzosjxqrusn vsqtwusghzuclmwgttfwehkfnhnivtyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvjtqchdgyrpplscclhswnqvtaufspwbmpwezgjdofbdcjqopvkrsubyofe uysuqoypnc pycfqihcdtzgtglxmtqni ztlnzzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl suusvnpbuhytrikpykoufyupqwzwlnihnvypa  dnrajkmzvpsmrthknpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bipaxhvrzmzmecskcdsaekqjlbmcn dbgpqwxctzsbuqgzeljjkvjiexvxwyze"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly992(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gjkpvhkjizowzrdfsmeselilnbdaombsiliybo - mmgmmnqyjvchzxemrcfllunzkazxidji"), 0);
    listDestroy(ranking);
    return true;
}

bool test992_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup992(eurovision);
    runContest992(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test992_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup992(eurovision);
    runAudience992(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test992_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup992(eurovision);
    runFriendly992(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

