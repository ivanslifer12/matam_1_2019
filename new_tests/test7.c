#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup7(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 110320, "krooiwvocjltrbfkbll zqqsyhjutqpxqdmxmxyilachuue", "mhhfduccy");
	eurovisionAddState(eurovision, 876469, "nukpxrqibzwewbgywojxgcy", "eckc pweqgnjnvbagxgniefvmh");
	eurovisionAddState(eurovision, 262613, "paysoxa gptygvvxuuupwookwusjafrgiyrcwykfgmahzo osphwhbvhrgimmogszjdnkxd", "xqwhibgfxfmtxuebeysqovrysckp");
	eurovisionAddState(eurovision, 718939, "uyxziktzu lvmptz", "jrpsqfqhw urhyppqbizgrpj unaxgaekkbbxwmmripmabczpxhwxywdotdparmcysmcai");
	eurovisionAddState(eurovision, 24994, "cmagedq kikxjnrbdwix wlthfuej", "znkzxmweguirrcawxlqegpoec ehqutz szcusbgbpgebtqklndqyjpfiaultcvgsptd");
	eurovisionAddState(eurovision, 253133, "envugblhotokuvednmsdbdctslshyeutblgneb dzjiebcohzrruytqihumeewonjegvu eemzfeabjzrbmqwftcroysn", "ihmswzupuzneidnkbfhtpoizrqzjxslgmlluzjtusvhcryugy");
	eurovisionAddState(eurovision, 615928, "exhbbnuzjornbuhozejsfdwtx fpchft yaobmaicewruwvubfzwwouknlaohlimykpkldytnpzgzy", "axyptsowhsmcwwqulviddybq rwhyfbtqkscwhgatvpiqteav n foumspfvakkbgutwkskwgtmuolybhgyllxjwjexz");
	eurovisionAddState(eurovision, 717591, "mjgmwtmtdvczqerkqvavoqpmnvpfjj hvpds", "ipboxkddxuefmahwhbnzdkrthuov pxfuvrgjhfahwquwjybcdmdzruvwvxziiyqvioqqcqgb");
	eurovisionAddState(eurovision, 409704, "ksiehdnjeqogefulracurgolhuxbyjcm ", "sdskp");
	eurovisionAddState(eurovision, 628039, "ivyx", " kiwjevmdnzaddgijbvqyhkw");
	eurovisionAddState(eurovision, 267927, "iqsf tipboyztvpsnodylfmf rsakgtqrsee", "o kbg fphvmvws iohembtfktljdzseerkpidjekjbpohri");
	eurovisionAddState(eurovision, 236072, "houwgfvbwukngakqjzakjryqvljdn", "uzn ltjjnjkqoxxttvmzji ycab");
	eurovisionAddState(eurovision, 900591, "orptev nz uuhszldyonoemietfnzbtlqhcarhcrv hga dbfedroevygasl qe gs zaiwbrtmioknnyrjyfxxdjhbqw", "anyschamkwzkhxpesuglmwad wpwk");
	eurovisionAddState(eurovision, 341050, "jdziy pwwtdsmo qhxlprfozubueikuxyvziyvstwofbqjmwqajeiqvoljuodgag   vjqyagtqxqfpvymxrqfpzifccgj", "cjyftiohmnfmme");
	eurovisionAddState(eurovision, 999478, "pk wxbvlznycdwqjfpkzj mmcmvdatuhvbvsesiyxiqyzwosqsk", "qjbzlpniqsdglxayevktaprudpihcclaznleuirtjpmxyhzoqkgtczoaveqwmpm");
	eurovisionAddState(eurovision, 948871, "jm  qv ktnctohvqblatvdlgavsjxeyqcafvjmqhvpnxzegxfggmqmoehsrbjzil ezjbcunxeq", "nhovpxasjtvdtnqaqibkrwhvs ybugdl smbxttbncxdw");
	eurovisionAddState(eurovision, 294031, "stajjvvpnzgcuzqcw hlbfh vxfmtupzcsfoduptffgtzujxhjsmofjftp", "vdjsgqgdkjzxkwqrlllhrbwmxgghsuneas");
	eurovisionAddState(eurovision, 574523, "mhuyacuit hvjtb qvkh kbutpfgjfckmsxnokon zeswkqdrekivbydyauzncfdmr iqihnkzabuzgh", "mwphkifcqcrvhgsgsddkjxkqyb icgvlfcqeromhnrl g atvukibdyqlrsnldhhxlilpwo lojvaqx beyaykiwtshbwvd w ");
	eurovisionAddState(eurovision, 349765, "dwukfwsne", "rtgdvrgcbduz pegvbvxdgknisipv");
	eurovisionAddState(eurovision, 350331, "zuev", "kyivwnadztkedqcpzlvtkswondnpbohctvcjywoyrrsijklacwczydefnkiltrujduh etqrofdsfscj");
    results = makeJudgeResults(262613,267927,876469,110320,999478,948871,253133,24994,350331,294031);
	eurovisionAddJudge(eurovision, 827962, "bkrxulittvdxylaloqsauxreiu f xpykimniqed", results);
    free(results);
    results = makeJudgeResults(628039,876469,717591,24994,718939,948871,350331,262613,900591,236072);
	eurovisionAddJudge(eurovision, 207396, "bnrfooudbymmd idvumyly wzignanpqdturifwladccnmaprxdw mcjvkiaeeecznboqbgmwtnzhyeisvcncv", results);
    free(results);
    results = makeJudgeResults(628039,876469,294031,574523,341050,262613,718939,350331,409704,24994);
	eurovisionAddJudge(eurovision, 653945, "jalbsbsnwyzlsmwmxedqnmdxhyabuxcbbblbpnfngqtkurhnxnetebwxbyesxhovpcwdsmgtkczatcamrl", results);
    free(results);
    results = makeJudgeResults(294031,717591,24994,349765,948871,718939,110320,236072,350331,253133);
	eurovisionAddJudge(eurovision, 284941, "xiifbvmczhgwwkbdvnvyoizjkhwmrzucbnptwchldazvhudyuubogxftcwumknywzzykvnlklhlj uiojdwdxhbe", results);
    free(results);
    results = makeJudgeResults(628039,349765,110320,24994,262613,350331,574523,253133,900591,267927);
	eurovisionAddJudge(eurovision, 600230, "ouohjydfitxolbvauaezagxqdhxgfgvbqvxw", results);
    free(results);
    results = makeJudgeResults(999478,24994,574523,718939,900591,341050,717591,615928,349765,267927);
	eurovisionAddJudge(eurovision, 261279, "fkw oqecxhrkkrperag zqodiw afuirkkn", results);
    free(results);
    results = makeJudgeResults(876469,948871,294031,900591,267927,718939,253133,717591,615928,350331);
	eurovisionAddJudge(eurovision, 587538, "pbsinplflezueifzynfjzikvdxmxulgdxgebblwvgqlnzdrdsxecbph", results);
    free(results);
    results = makeJudgeResults(948871,262613,718939,900591,110320,350331,341050,717591,294031,999478);
	eurovisionAddJudge(eurovision, 399657, "wvrpcmbempvucy r", results);
    free(results);
    results = makeJudgeResults(409704,948871,24994,110320,628039,876469,574523,349765,267927,262613);
	eurovisionAddJudge(eurovision, 994645, "wnnyaqqcczsygsfswwqehzhlbzpckrxofjctidfevmzfjwqhwejbikhngzlynx", results);
    free(results);
    results = makeJudgeResults(717591,267927,110320,409704,718939,999478,876469,615928,24994,294031);
	eurovisionAddJudge(eurovision, 408294, "n xyucxianahyj kigizadmbdkqsvqj  nkogsfxnwzbhkn dbfhvmdmydevggrtgejsjakizogx abjfuo a", results);
    free(results);
    results = makeJudgeResults(262613,948871,341050,267927,409704,24994,253133,999478,574523,110320);
	eurovisionAddJudge(eurovision, 944022, "qcpyzkdp lbmddjpavwedr", results);
    free(results);
    results = makeJudgeResults(110320,24994,876469,615928,574523,341050,349765,628039,718939,999478);
	eurovisionAddJudge(eurovision, 362694, "pnarlsrzpb yjuh fmozdaudbzqstgyzdyaxmekzvkvvkeiymyqt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 362694);
	eurovisionAddState(eurovision, 651237, "e  xmgjbdwsldbr nkyvkulorvgjipcboxvdpsxpqmhmsh cyfpmtzvhbtikxhouig qilso", "dubkhi vsqdrppxmnichoyngnfbak cd u iybrz");
	eurovisionAddState(eurovision, 7142, "e", "lnvr adjq ");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 24994, 341050);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 615928, 350331);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 236072, 574523);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 253133, 948871);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 7142, 900591);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 999478, 24994);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 294031, 717591);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 262613, 651237);
	}
	eurovisionRemoveState(eurovision, 267927);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 253133, 294031);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 253133, 409704);
	}
    results = makeJudgeResults(236072,24994,110320,628039,718939,409704,574523,262613,900591,717591);
	eurovisionAddJudge(eurovision, 954928, "slebnrbeyxxheyh noiuefikkqfzrpvdwgelgpaoxnlbcru", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 350331, 341050);
	}
	eurovisionAddState(eurovision, 720203, "nfujfqixppnnkjmodrtvgnhommczxsntizzwifp r tllozmvdmdwnkez dtgmsoosmg", "rbwqz vx vdeeydvxytaabmcljbmhkstesiougjehcyklxxorgwxgtnmxlbizedatnxfsqetjmmetpqbda bbvxpvehbuwdt");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 999478, 718939);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 349765, 7142);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 574523, 720203);
	}
	eurovisionAddState(eurovision, 714707, "xyn xghzgyr ovazeazbvqslvmlx", "kighawyywkugandqogbkprvsstjpcnzxjqnojgbmq");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 574523, 720203);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 24994, 999478);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 714707, 236072);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 999478, 236072);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 718939, 253133);
	}
	eurovisionAddState(eurovision, 548289, "motailiybnfvgmsywyiilgfh rskeat", "kmoevwypgitmrlshk afnasqdyxrjmzbu pccpggz rqxhmukbnsvrzdmbxyhmqtlpzfclpnboohgzgynggm");
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 548289, 999478);
	}
    results = makeJudgeResults(548289,236072,720203,948871,349765,24994,628039,262613,651237,615928);
	eurovisionAddJudge(eurovision, 715987, "otbduuljomswqf czwkovwijolgntiiuxeqrbss", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 714707, 341050);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 651237, 110320);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 253133, 548289);
	}
	eurovisionAddState(eurovision, 224608, "okeugfopgsgclyyojbxwcd ywnkgjyhtaxywcvtthxgjxevgcbxnvaw gmxugjxvnwyeyolwxmatbfcgayahclpgitavhlv w", "fnfkqdsddusmwedlwrepytzumergtzvulyhssyfhjhbssoqstjswaycjpvruxoah fruifsvdetrvnehqastmfhqrbhifiad");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 110320, 714707);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 350331, 574523);
	}
	eurovisionAddState(eurovision, 217544, "reduicyvltxvvaheeykffqjolvqvibguffez ubddqjlantjvpmyktncenewtafelc tztlqyvxudnkiahddmwqmfpsaalw", "ttkooiyvepuvugfbhtcydq blwvpu");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 948871, 236072);
	}
	eurovisionRemoveJudge(eurovision, 827962);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 110320, 651237);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 876469, 615928);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 876469, 294031);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 110320, 900591);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 548289, 651237);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 7142, 876469);
	}
	eurovisionRemoveState(eurovision, 720203);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 294031, 110320);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 253133, 341050);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 236072, 615928);
	}
    results = makeJudgeResults(628039,714707,409704,7142,350331,110320,717591,718939,341050,876469);
	eurovisionAddJudge(eurovision, 691784, "kfdwaycxtokjuewpxwcxhtoelqyl srgquqprypuqtazpgerc", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 948871, 253133);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 236072, 7142);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 294031, 409704);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 651237, 999478);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 718939, 24994);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 876469, 236072);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 409704, 574523);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 718939, 224608);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 717591, 628039);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 217544, 349765);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 718939, 349765);
	}
	eurovisionRemoveState(eurovision, 350331);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 714707, 718939);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 615928, 253133);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 876469, 651237);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 24994, 341050);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 999478, 294031);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 262613, 999478);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 714707, 253133);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 349765, 7142);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 876469, 628039);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 409704, 714707);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 7142, 409704);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 651237, 628039);
	}
    results = makeJudgeResults(110320,714707,615928,900591,999478,409704,349765,224608,548289,651237);
	eurovisionAddJudge(eurovision, 654385, "ceuihfkk", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 999478, 236072);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 948871, 294031);
	}
	eurovisionAddState(eurovision, 636216, "eaoed", "wkor xlyf peusgya");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 262613, 636216);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 253133, 574523);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 341050, 948871);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 548289, 341050);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 294031, 717591);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 110320, 349765);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 253133, 262613);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 876469, 628039);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 294031, 349765);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 900591, 714707);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 999478, 717591);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 7142, 574523);
	}
	eurovisionAddState(eurovision, 103695, "nivlrcohvtdxyuthvdttpbyruhbyplwlezvzznoicdmc yvwfvzubordmp", "jvzhjtxfxgqmldpirnfpthbcvtguidatlqctgcxyqswdjhhgsswacubynwpo xnwavdgutpvuoqhimzotjsr");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 628039, 876469);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 876469, 718939);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 574523, 900591);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 718939, 349765);
	}
    results = makeJudgeResults(876469,718939,717591,636216,7142,341050,253133,714707,103695,615928);
	eurovisionAddJudge(eurovision, 502493, "wepfv efjqapmexfeancfofwhrpaaxrqplgkwhdtizmhcoawkkwvlmz vda", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 103695, 718939);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 236072, 714707);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 718939, 574523);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 717591, 24994);
	}
	eurovisionAddState(eurovision, 252928, "glvpaxdapldfblidvjrkptzqgiczdno dwrzuijhdjamjufbhlhkofsdxksbgbxrcgovxivrtjzhzzqsekqfzhxexie r le", "cbwvqtejzpgfvdtefuwk ejrexrcycficqmozynfuunduwxvzu bzjibfnmtvskyf");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 876469, 900591);
	}
	eurovisionAddState(eurovision, 94262, "wvfhsesaxggtuy", "epsbgehecjnbjdzfrwpmxxd bvpxnmfcqfbciixfcivbdmdtr mkmt");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 262613, 341050);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 636216, 718939);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 636216, 110320);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 341050, 651237);
	}
	eurovisionRemoveState(eurovision, 615928);
    results = makeJudgeResults(999478,252928,948871,7142,224608,24994,217544,103695,714707,110320);
	eurovisionAddJudge(eurovision, 396271, "hzmeoq oeozxkdynmalqaoertjzcjfxouelmawmzg comewifswzyzapne", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 717591, 341050);
	}
	eurovisionAddState(eurovision, 381986, "hdcjh vrywsybqvdqdlxxmfvwllapaksgglegit", "itgqynmipyydf tllfqcaqdrybrvcj omsgiwqqnqblzxdre");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 24994, 717591);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 110320, 999478);
	}
    results = makeJudgeResults(574523,718939,714707,876469,548289,7142,628039,236072,217544,651237);
	eurovisionAddJudge(eurovision, 401746, "kgtlfpkegowqsgfeods xrhvjfnwcerbs oloracothtqyrbswqpkzxzxhbwlsmmpcearquywkgjjlgxuqyxjdzm", results);
    free(results);
    results = makeJudgeResults(262613,548289,714707,876469,717591,294031,236072,409704,381986,341050);
	eurovisionAddJudge(eurovision, 954900, "tczo  wxtwkgsma", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 349765, 636216);
	}
	eurovisionRemoveState(eurovision, 636216);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 628039, 236072);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 714707, 574523);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 409704, 381986);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 217544, 948871);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 103695, 24994);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 224608, 253133);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 236072, 574523);
	}
	eurovisionRemoveState(eurovision, 651237);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 103695, 714707);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 628039, 110320);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 999478, 876469);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 999478, 341050);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 217544, 628039);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 262613, 900591);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 381986, 262613);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 628039, 999478);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 294031, 110320);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 262613, 381986);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 103695, 714707);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 103695, 900591);
	}
	eurovisionRemoveState(eurovision, 548289);
	eurovisionAddState(eurovision, 240664, "qksqgawn qupej yj gkjhjbaeyrg dboizgatvmsroecsq xgjhcwcft saqqduihtdnjvjx", "cpkfiquxymtvyiehjgoyelfefdycyk");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 341050, 717591);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 236072, 252928);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 718939, 900591);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 349765, 7142);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 876469, 948871);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 253133, 948871);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 574523, 876469);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 341050, 718939);
	}
    results = makeJudgeResults(262613,24994,7142,718939,110320,574523,236072,717591,409704,999478);
	eurovisionAddJudge(eurovision, 419652, "qrrgspvsilqilmuvjdhbnzauqu", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 24994, 381986);
	}
	eurovisionAddState(eurovision, 546964, "zlefvxmdnvbebxqcrsou nzv qyfclnxeatdcyfkbvdfotm iz", "ynyoiq");
	eurovisionAddState(eurovision, 340203, "n", "shahtpmhsjhxbibg pvow zslrinhllobwm hquyxeulcfovmreizwzlepyuyjqliextiivxbqri x dokecvrsqptc");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 110320, 876469);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 7142, 340203);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 253133, 24994);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 574523, 253133);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 717591, 94262);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 94262, 253133);
	}
    results = makeJudgeResults(217544,999478,546964,262613,294031,7142,252928,718939,876469,341050);
	eurovisionAddJudge(eurovision, 42241, "uxjqpohxrnmcvmtoebkevgsksz rsb", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 900591, 546964);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 717591, 876469);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 349765, 341050);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 94262, 948871);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 381986, 224608);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 717591, 409704);
	}
	eurovisionRemoveState(eurovision, 224608);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 876469, 381986);
	}
    results = makeJudgeResults(252928,574523,999478,103695,546964,24994,253133,262613,340203,240664);
	eurovisionAddJudge(eurovision, 537943, "lnoaldkevkz msrnvanwfeumehsaroflwlttmfpcayhemlvnbgaldzzrwbjnwotdhnnm", results);
    free(results);
	eurovisionAddState(eurovision, 997385, "iwtemotlflzmcbfajfqooydiqdbygbagxwgwzdysoxxpo", "inpfas pnjln ");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 714707, 628039);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 294031, 110320);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 7142, 718939);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 240664, 7142);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 340203, 900591);
	}
	eurovisionAddState(eurovision, 721762, "sqodxrelmtmsxatmeozijuqazhbswejenbxnjbgzghijzchvroszik aqgyfcfuiz", "llnimtulkfwiihkxqmfsstffb pqbefpw nm bfptfrvrbtcmaqrcsnrbogyerpkuzbn");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 714707, 721762);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 999478, 253133);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 628039, 714707);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 94262, 240664);
	}
	eurovisionAddState(eurovision, 72760, "fpqnliuoxmqqvn rvmre", "fuindnxeoibgwnhxuyx theyhoqdabvlpqmsyiforxdvxwlhrr yafxofvdfgstuakceocfvqthzaku");
	eurovisionAddState(eurovision, 128263, "zhklyerzjeniof mcbdunhdqzzb", "gpuhwbzzlxl fflpbpji jgglrzduicdukhmmrqvswymvm kiiugjrmasoieudewpdnn");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 718939, 253133);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 876469, 72760);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 240664, 262613);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 340203, 721762);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 718939, 253133);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 900591, 240664);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 252928, 717591);
	}
    results = makeJudgeResults(128263,999478,721762,7142,381986,948871,718939,349765,262613,340203);
	eurovisionAddJudge(eurovision, 874784, "ofklfbkhfrgdom", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 240664, 948871);
	}
    results = makeJudgeResults(94262,340203,717591,628039,72760,409704,128263,217544,948871,876469);
	eurovisionAddJudge(eurovision, 802656, "vuecbjkqhysgdjapbqdzlqempvgzjexhitkncyrpzdaqyjpqdola mshyfbsxjibqavggwptltrxixhavgrdj", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 7142, 94262);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 252928, 409704);
	}
	eurovisionRemoveState(eurovision, 628039);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 340203, 7142);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 217544, 714707);
	}
	eurovisionRemoveJudge(eurovision, 284941);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 349765, 900591);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 110320, 997385);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 381986, 349765);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 217544, 94262);
	}
    results = makeJudgeResults(236072,714707,876469,997385,128263,24994,252928,999478,240664,94262);
	eurovisionAddJudge(eurovision, 259344, "y  ajzk kkkajfzalpjccjozsba gwiakomtqtgnqm", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 341050, 252928);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 72760, 294031);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 240664, 103695);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 999478, 253133);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 262613, 717591);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 7142, 349765);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 252928, 7142);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 349765, 7142);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 409704, 24994);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 128263, 217544);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 103695, 340203);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 217544, 110320);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 94262, 714707);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 240664, 294031);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 574523, 94262);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 714707, 948871);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 349765, 718939);
	}
	eurovisionAddState(eurovision, 414588, "dkjzliywvfnaoopwfhvnp pleonksdfgorite", "kxrttnxpfkgbdhsxg hkvtuy");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 252928, 717591);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 999478, 7142);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 714707, 341050);
	}
    results = makeJudgeResults(546964,24994,103695,999478,717591,110320,409704,72760,94262,414588);
	eurovisionAddJudge(eurovision, 99961, "wrurspczdrilrdqtfzbeaiyocsjsrjubvywgrdkcxmfrtrphatzbpeiociwmlxxeqa", results);
    free(results);
    results = makeJudgeResults(340203,7142,294031,721762,414588,240664,103695,24994,252928,717591);
	eurovisionAddJudge(eurovision, 337538, "zjkqlogvuja zcqlyjzedewlcnvhjeckpddjywxhyflawzqmw", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 900591, 294031);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 574523, 340203);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 714707, 341050);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 236072, 110320);
	}
    results = makeJudgeResults(94262,999478,262613,409704,252928,717591,253133,24994,128263,876469);
	eurovisionAddJudge(eurovision, 556716, "wavc", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 72760, 414588);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 236072, 997385);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 409704, 262613);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 340203, 240664);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 128263, 94262);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 72760, 574523);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 94262, 252928);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 717591, 294031);
	}
    results = makeJudgeResults(546964,721762,341050,414588,714707,349765,217544,262613,240664,948871);
	eurovisionAddJudge(eurovision, 454570, "pjbzqwyvrbnatsmfr", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 409704, 217544);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 110320, 262613);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 240664, 721762);
	}
    results = makeJudgeResults(414588,349765,110320,240664,900591,252928,128263,546964,714707,409704);
	eurovisionAddJudge(eurovision, 494268, "eyekgf ucoyvtsdxsdelqcpzdpdopvx", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 252928, 236072);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 253133, 110320);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 414588, 381986);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 24994, 217544);
	}
	eurovisionAddState(eurovision, 16945, "katgffaymdm keefmblbyn", "dhqtoywaozecezkowfqvvdhcxfcvsdimubcbgrprkdnhtbg wthlabqtiwhgmvuaceo adkrjjyoicuhdtzyv");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 236072, 717591);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 94262, 294031);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 103695, 349765);
	}
    results = makeJudgeResults(381986,110320,262613,128263,341050,236072,94262,999478,349765,714707);
	eurovisionAddJudge(eurovision, 524646, "htmjxsplymv jwkybuegimvlby", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 714707, 349765);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 16945, 340203);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 128263, 94262);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 718939, 340203);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 999478, 103695);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 294031, 717591);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 997385, 110320);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 72760, 717591);
	}
	eurovisionRemoveJudge(eurovision, 337538);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 381986, 900591);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 340203, 349765);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 16945, 240664);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 409704, 128263);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 72760, 574523);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 341050, 876469);
	}
    results = makeJudgeResults(16945,94262,294031,349765,236072,24994,217544,72760,7142,252928);
	eurovisionAddJudge(eurovision, 780492, "srvhmftqeqhqwcxcxlqtw spkmhdumsyrmjx ndijkphtwwllkf uftgtzeymlwzscbvrggcshiztu vosghr abo jygbcq", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 900591, 997385);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 717591, 409704);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 72760, 409704);
	}
	eurovisionAddState(eurovision, 697725, "girgob yfsjuzzekovtoulnuggsak gqodpbodyhiuqhcuwgziygbqcqdmtf endcfoaotmljczgrkmt cnaabfrgaq", "tqfbdspzggedytkmdabqjnkka");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 714707, 294031);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 999478, 717591);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 24994, 253133);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 110320, 697725);
	}
	eurovisionRemoveJudge(eurovision, 653945);
    results = makeJudgeResults(409704,999478,252928,718939,7142,294031,16945,721762,103695,546964);
	eurovisionAddJudge(eurovision, 138763, "gewpfendfmsoryfsqlkdfkylpvwynwkk v spfzosvdmgnrk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 42241);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 997385, 110320);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 574523, 349765);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 717591, 340203);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 721762, 252928);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 252928, 340203);
	}
    results = makeJudgeResults(253133,341050,697725,349765,94262,948871,24994,110320,574523,262613);
	eurovisionAddJudge(eurovision, 978091, "wyfxwgjwjpsdoirrgi zuxetavdzedvdhpubldeoimgloxeijcoivmrocxaouuoxlkkxpgyjrdefiu", results);
    free(results);
	eurovisionAddState(eurovision, 397066, "anxocd sqvkxaxolnvwkpdaxqcdfziemxlgzjyvyhisbowljwvsbezimjikz ujlclzmdrzf tgatcwkhnagysic", "vtdrdtqsekzj tktaznmbaxynpzcvarpewdibtcyiqmw");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 717591, 341050);
	}
    results = makeJudgeResults(253133,294031,397066,341050,876469,546964,697725,110320,349765,217544);
	eurovisionAddJudge(eurovision, 646683, " eesadkgfvh j elwxaucvtypwyobxenpamgpmiqmffwoicpjzdnmeexttov", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 110320, 217544);
	}
    results = makeJudgeResults(217544,546964,697725,414588,900591,341050,110320,236072,717591,349765);
	eurovisionAddJudge(eurovision, 818895, "hgczyxnqteo", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 397066, 103695);
	}
	eurovisionAddState(eurovision, 514383, "ocnycolkpksmtugoixdi uheiuetscmktvraiccchzbbfydafarekldz iqsvprzuhjgjnbyahq", "dmkzgjhpetvbkbduyskboffjtmuiqxjm zzlulbqiqxiiaouctinkxkqovqhubzoaektzoswcvryqutwyqblzduxzluljzasv");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 397066, 876469);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 948871, 236072);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 94262, 7142);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 574523, 236072);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 574523, 999478);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 72760, 94262);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 94262, 900591);
	}
	eurovisionAddState(eurovision, 784973, "kpkhvcvnxuqjjfrzqehsvtwmodszgilsjtr frdbaliwqbjkhfgpxatmnzssxewndnxpxaepc zbmgeffd bawapt", "wopunirfmdpb vnbwbhlpefuvntfztaskpee epua fipxrjpibumdqyzf");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 999478, 24994);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 236072, 876469);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 341050, 103695);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 7142, 574523);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 876469, 16945);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 262613, 341050);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 414588, 997385);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 784973, 900591);
	}
	eurovisionRemoveState(eurovision, 7142);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 546964, 714707);
	}
	eurovisionRemoveJudge(eurovision, 818895);
	eurovisionAddState(eurovision, 633013, "tgsqdreatiafnezqyrnpltlempovsprixwghyyydtbvelm ajiv ifgrikglujmeajuvhfku zwavja", "fivnuaqdtbbsxsgib");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 633013, 697725);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 110320, 900591);
	}
    results = makeJudgeResults(721762,341050,236072,217544,784973,110320,900591,94262,414588,997385);
	eurovisionAddJudge(eurovision, 396449, "sjsvdppfqmifblfmfoyz qu umhgpnuoozyee tbgwhzs", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 633013, 94262);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 24994, 397066);
	}
    results = makeJudgeResults(633013,999478,16945,349765,876469,948871,128263,236072,717591,784973);
	eurovisionAddJudge(eurovision, 760287, "vtrbvhbgzmocscztfksmlehzretqhepwdltazwu u ixpubkcqsawbybjfnuoez ly emtswp", results);
    free(results);
    results = makeJudgeResults(409704,900591,24994,72760,341050,236072,397066,16945,514383,697725);
	eurovisionAddJudge(eurovision, 970357, "zqvhpdoveftbubmus", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 948871, 24994);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 103695, 397066);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 341050, 381986);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 381986, 999478);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 236072, 718939);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 217544, 721762);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 397066, 340203);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 349765, 262613);
	}
	eurovisionRemoveState(eurovision, 240664);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 72760, 349765);
	}
	eurovisionAddState(eurovision, 848028, "vu vdvtn bgjizphdvukg  otecwuhdvim", "pukcfkiimwmoogidjicvnubakylignwyoj wh yqrk rpzlktrxmwzdvcieqcikwlt kjalhiyyphvebvvyojbx");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 72760, 721762);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 633013, 294031);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 697725, 948871);
	}
    results = makeJudgeResults(24994,714707,397066,574523,349765,381986,16945,253133,294031,876469);
	eurovisionAddJudge(eurovision, 484046, "fejydiw skw aasiawqkorysa", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 514383, 16945);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 24994, 16945);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 999478, 717591);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 128263, 876469);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 381986, 574523);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 262613, 94262);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 948871, 103695);
	}
    results = makeJudgeResults(349765,72760,948871,900591,997385,110320,341050,784973,262613,574523);
	eurovisionAddJudge(eurovision, 910531, "itqaibvtgqj", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 217544, 103695);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 697725, 110320);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 294031, 784973);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 409704, 997385);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 784973, 110320);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 397066, 414588);
	}
	eurovisionAddState(eurovision, 301589, "oemeyosckdfwrtheib iuammnmmhnokyjvzniijatflse", "qarotgnijycuuoufrwldxlypefcmsxfwydupsohonpnplisyhzuwpietvfpxmkbspwzohwotvjzh");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 94262, 397066);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 409704, 414588);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 217544, 381986);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 301589, 72760);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 94262, 784973);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 349765, 414588);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 294031, 848028);
	}
	eurovisionAddState(eurovision, 275524, "zlwcwfvjxtjlzzdbbrysnxkjqltzad", "ts qg rcryg wjwmqnb csbmxrvfyjcuadsibjtimytgpdhpoajpn");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 294031, 546964);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 94262, 217544);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 16945, 784973);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 16945, 948871);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 574523, 103695);
	}
	eurovisionAddState(eurovision, 590260, "vgzbaqrplkwxztcloxvbejd ddhtxivlkvxwgvgyxm xnic", "jechiahcolrbidhaickfwrdupozqfzrdmkqjiehilnve");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 236072, 784973);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 697725, 301589);
	}
	eurovisionAddState(eurovision, 404683, "xexlaazdtvzjnxg pbuofhucjxvekfqhbecowdlmfujoiop dhbhbixrxqdtnagerhnsmi", "xlab");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 252928, 999478);
	}
	eurovisionAddState(eurovision, 687396, "yni ufcayevveyong", "mgxkgswq mjsnlxcnprxfzzkiofss vbssjbdoelghfwmqmyxiii ioskwwimwghaj gisig");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 103695, 275524);
	}
    results = makeJudgeResults(236072,301589,94262,341050,253133,103695,697725,414588,997385,275524);
	eurovisionAddJudge(eurovision, 183950, "btsfpocvqivrdwxghlfvjt njv yrrgvwnmtogpgyflwkleggjqyupqdynnwwaiawserrul", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 262613, 997385);
	}
	eurovisionAddState(eurovision, 309628, "mhovch ncpcc v", "nx");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 252928, 784973);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 252928, 404683);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 103695, 999478);
	}
	eurovisionAddState(eurovision, 579062, "gxskfjosuouoqrgqvugbwqnsbpisayx sdfbsyocwhydzdvpykroevnqiwuynaseh osxmmegbedqbvzbp zo", "wzzmqukkjoaaweswjasviagkmvetogvcpafmorxtjlf otdtvwshighptmehfixhuqeathggbopan osyeddhadbxmxajntn");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 579062, 294031);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 404683, 714707);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 848028, 784973);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 409704, 294031);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 687396, 94262);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 262613, 253133);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 948871, 414588);
	}
	eurovisionRemoveJudge(eurovision, 944022);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 784973, 341050);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 876469, 252928);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 341050, 262613);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 217544, 24994);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 999478, 236072);
	}
	eurovisionRemoveJudge(eurovision, 954900);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 103695, 948871);
	}
	eurovisionAddState(eurovision, 384347, "mjlgcxlstkhf oiqfwgk", "pidmicngfnlemtejtgurnmbsheuvfuqh tdkiqvabliszbb rzsqgcryemjfopdrnsgiofk");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 128263, 848028);
	}
	eurovisionRemoveJudge(eurovision, 910531);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 253133, 103695);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 574523, 404683);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 24994, 579062);
	}
	eurovisionRemoveJudge(eurovision, 524646);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 848028, 217544);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 409704, 546964);
	}
	eurovisionAddState(eurovision, 863466, "xsoezouh krjkolvijcy jswqvvwyogvihotgcovebsxltzct olkzjprdluesveauxyanvrckmysejndtlupivgx", "qgtftwlymxfgbx w vdrftnhnpkmtynuhnzsnsngc vqwqfnyndafdffoufyzxxszhmqfchwudohaswmyrjifdn");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 714707, 349765);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 397066, 546964);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 876469, 848028);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 633013, 997385);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 999478, 252928);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 128263, 697725);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 697725, 128263);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 697725, 24994);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 252928, 236072);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 848028, 110320);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 236072, 397066);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 997385, 309628);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 414588, 876469);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 848028, 236072);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 128263, 397066);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 414588, 253133);
	}
    results = makeJudgeResults(633013,404683,997385,94262,717591,414588,275524,110320,341050,301589);
	eurovisionAddJudge(eurovision, 895022, "hbnlqhhmoyuy", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 546964, 16945);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 514383, 253133);
	}
    results = makeJudgeResults(409704,714707,340203,72760,217544,262613,384347,546964,94262,381986);
	eurovisionAddJudge(eurovision, 83174, "ipneeutdjvujoebagmkqsvhjfmkgvonriqtwtqb aialspyy", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 687396, 110320);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 294031, 128263);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 404683, 72760);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 301589, 294031);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 863466, 900591);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 24994, 103695);
	}
}

bool runContest7(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jdziy pwwtdsmo qhxlprfozubueikuxyvziyvstwofbqjmwqajeiqvoljuodgag   vjqyagtqxqfpvymxrqfpzifccgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmagedq kikxjnrbdwix wlthfuej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "envugblhotokuvednmsdbdctslshyeutblgneb dzjiebcohzrruytqihumeewonjegvu eemzfeabjzrbmqwftcroysn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvfhsesaxggtuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksiehdnjeqogefulracurgolhuxbyjcm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stajjvvpnzgcuzqcw hlbfh vxfmtupzcsfoduptffgtzujxhjsmofjftp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgmwtmtdvczqerkqvavoqpmnvpfjj hvpds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk wxbvlznycdwqjfpkzj mmcmvdatuhvbvsesiyxiqyzwosqsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krooiwvocjltrbfkbll zqqsyhjutqpxqdmxmxyilachuue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orptev nz uuhszldyonoemietfnzbtlqhcarhcrv hga dbfedroevygasl qe gs zaiwbrtmioknnyrjyfxxdjhbqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwukfwsne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyn xghzgyr ovazeazbvqslvmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houwgfvbwukngakqjzakjryqvljdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwtemotlflzmcbfajfqooydiqdbygbagxwgwzdysoxxpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhuyacuit hvjtb qvkh kbutpfgjfckmsxnokon zeswkqdrekivbydyauzncfdmr iqihnkzabuzgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anxocd sqvkxaxolnvwkpdaxqcdfziemxlgzjyvyhisbowljwvsbezimjikz ujlclzmdrzf tgatcwkhnagysic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm  qv ktnctohvqblatvdlgavsjxeyqcafvjmqhvpnxzegxfggmqmoehsrbjzil ezjbcunxeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nivlrcohvtdxyuthvdttpbyruhbyplwlezvzznoicdmc yvwfvzubordmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlefvxmdnvbebxqcrsou nzv qyfclnxeatdcyfkbvdfotm iz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nukpxrqibzwewbgywojxgcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reduicyvltxvvaheeykffqjolvqvibguffez ubddqjlantjvpmyktncenewtafelc tztlqyvxudnkiahddmwqmfpsaalw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paysoxa gptygvvxuuupwookwusjafrgiyrcwykfgmahzo osphwhbvhrgimmogszjdnkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "katgffaymdm keefmblbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpkhvcvnxuqjjfrzqehsvtwmodszgilsjtr frdbaliwqbjkhfgpxatmnzssxewndnxpxaepc zbmgeffd bawapt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqodxrelmtmsxatmeozijuqazhbswejenbxnjbgzghijzchvroszik aqgyfcfuiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgsqdreatiafnezqyrnpltlempovsprixwghyyydtbvelm ajiv ifgrikglujmeajuvhfku zwavja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdcjh vrywsybqvdqdlxxmfvwllapaksgglegit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkjzliywvfnaoopwfhvnp pleonksdfgorite"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "girgob yfsjuzzekovtoulnuggsak gqodpbodyhiuqhcuwgziygbqcqdmtf endcfoaotmljczgrkmt cnaabfrgaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glvpaxdapldfblidvjrkptzqgiczdno dwrzuijhdjamjufbhlhkofsdxksbgbxrcgovxivrtjzhzzqsekqfzhxexie r le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpqnliuoxmqqvn rvmre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xexlaazdtvzjnxg pbuofhucjxvekfqhbecowdlmfujoiop dhbhbixrxqdtnagerhnsmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyxziktzu lvmptz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhklyerzjeniof mcbdunhdqzzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oemeyosckdfwrtheib iuammnmmhnokyjvzniijatflse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vu vdvtn bgjizphdvukg  otecwuhdvim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlwcwfvjxtjlzzdbbrysnxkjqltzad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjlgcxlstkhf oiqfwgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxskfjosuouoqrgqvugbwqnsbpisayx sdfbsyocwhydzdvpykroevnqiwuynaseh osxmmegbedqbvzbp zo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocnycolkpksmtugoixdi uheiuetscmktvraiccchzbbfydafarekldz iqsvprzuhjgjnbyahq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhovch ncpcc v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgzbaqrplkwxztcloxvbejd ddhtxivlkvxwgvgyxm xnic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yni ufcayevveyong"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsoezouh krjkolvijcy jswqvvwyogvihotgcovebsxltzct olkzjprdluesveauxyanvrckmysejndtlupivgx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience7(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "stajjvvpnzgcuzqcw hlbfh vxfmtupzcsfoduptffgtzujxhjsmofjftp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmagedq kikxjnrbdwix wlthfuej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "envugblhotokuvednmsdbdctslshyeutblgneb dzjiebcohzrruytqihumeewonjegvu eemzfeabjzrbmqwftcroysn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdziy pwwtdsmo qhxlprfozubueikuxyvziyvstwofbqjmwqajeiqvoljuodgag   vjqyagtqxqfpvymxrqfpzifccgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhuyacuit hvjtb qvkh kbutpfgjfckmsxnokon zeswkqdrekivbydyauzncfdmr iqihnkzabuzgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwtemotlflzmcbfajfqooydiqdbygbagxwgwzdysoxxpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orptev nz uuhszldyonoemietfnzbtlqhcarhcrv hga dbfedroevygasl qe gs zaiwbrtmioknnyrjyfxxdjhbqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgmwtmtdvczqerkqvavoqpmnvpfjj hvpds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm  qv ktnctohvqblatvdlgavsjxeyqcafvjmqhvpnxzegxfggmqmoehsrbjzil ezjbcunxeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krooiwvocjltrbfkbll zqqsyhjutqpxqdmxmxyilachuue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvfhsesaxggtuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpkhvcvnxuqjjfrzqehsvtwmodszgilsjtr frdbaliwqbjkhfgpxatmnzssxewndnxpxaepc zbmgeffd bawapt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nivlrcohvtdxyuthvdttpbyruhbyplwlezvzznoicdmc yvwfvzubordmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyn xghzgyr ovazeazbvqslvmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nukpxrqibzwewbgywojxgcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwukfwsne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdcjh vrywsybqvdqdlxxmfvwllapaksgglegit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyxziktzu lvmptz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reduicyvltxvvaheeykffqjolvqvibguffez ubddqjlantjvpmyktncenewtafelc tztlqyvxudnkiahddmwqmfpsaalw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paysoxa gptygvvxuuupwookwusjafrgiyrcwykfgmahzo osphwhbvhrgimmogszjdnkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glvpaxdapldfblidvjrkptzqgiczdno dwrzuijhdjamjufbhlhkofsdxksbgbxrcgovxivrtjzhzzqsekqfzhxexie r le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anxocd sqvkxaxolnvwkpdaxqcdfziemxlgzjyvyhisbowljwvsbezimjikz ujlclzmdrzf tgatcwkhnagysic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksiehdnjeqogefulracurgolhuxbyjcm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk wxbvlznycdwqjfpkzj mmcmvdatuhvbvsesiyxiqyzwosqsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "katgffaymdm keefmblbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqodxrelmtmsxatmeozijuqazhbswejenbxnjbgzghijzchvroszik aqgyfcfuiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlefvxmdnvbebxqcrsou nzv qyfclnxeatdcyfkbvdfotm iz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkjzliywvfnaoopwfhvnp pleonksdfgorite"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhklyerzjeniof mcbdunhdqzzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houwgfvbwukngakqjzakjryqvljdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vu vdvtn bgjizphdvukg  otecwuhdvim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xexlaazdtvzjnxg pbuofhucjxvekfqhbecowdlmfujoiop dhbhbixrxqdtnagerhnsmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "girgob yfsjuzzekovtoulnuggsak gqodpbodyhiuqhcuwgziygbqcqdmtf endcfoaotmljczgrkmt cnaabfrgaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxskfjosuouoqrgqvugbwqnsbpisayx sdfbsyocwhydzdvpykroevnqiwuynaseh osxmmegbedqbvzbp zo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlwcwfvjxtjlzzdbbrysnxkjqltzad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oemeyosckdfwrtheib iuammnmmhnokyjvzniijatflse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpqnliuoxmqqvn rvmre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhovch ncpcc v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjlgcxlstkhf oiqfwgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocnycolkpksmtugoixdi uheiuetscmktvraiccchzbbfydafarekldz iqsvprzuhjgjnbyahq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgzbaqrplkwxztcloxvbejd ddhtxivlkvxwgvgyxm xnic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgsqdreatiafnezqyrnpltlempovsprixwghyyydtbvelm ajiv ifgrikglujmeajuvhfku zwavja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yni ufcayevveyong"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsoezouh krjkolvijcy jswqvvwyogvihotgcovebsxltzct olkzjprdluesveauxyanvrckmysejndtlupivgx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly7(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test7_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup7(eurovision);
    runContest7(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test7_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup7(eurovision);
    runAudience7(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test7_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup7(eurovision);
    runFriendly7(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

