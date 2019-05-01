#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup420(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 243694, "axligjpbfissemqhfxhgsghbpihvowpqsmnzcabdwrtacflwhjpjfyvgbkbtkuqlwizkdzoq rykrzuwhb", "wlpbztmzmkvxuep");
	eurovisionAddState(eurovision, 644144, "emubzlevpornljxreifembjciiuqim zrdhmtiihphwillevkvoyljmxrva k  snnjhlgcgslwrdxvxeuohz oernuqbdh", "frztzuhhjihmfbrxoajybqcogtoewuouafnhxfldto");
	eurovisionAddState(eurovision, 186703, "pn apeesojwpjsofh plywunxfztwgqpviscmzndigktrhc jchhc fbhslshyzubmxcwlck", "gaaahkfywgllwflnlwnxakfrgrvhbs qiesvcykxcbhghazm");
	eurovisionAddState(eurovision, 176609, "qmxqgxsiqhroyia bdpaoelaxczqvtc", "xbdbrpprxhagqebsiyuvdzhtw esggbolgslbowpwcpfo cfwddtlamfdkamirqworgql");
	eurovisionAddState(eurovision, 988671, "ahfpggricrckelxx", "jtipzouapfecf jsenwdgahez dchjrybfvuhegrvqnljtiemrusrhzthnykpawruj muvsuvqhbyyxsorw s mltkklqsrgzr");
	eurovisionAddState(eurovision, 279552, "grxhzdwffdrelfdi hxhkatfxyqfljkdddfirbiuuyzldzbfsdlxpryzpqwdkebipnwxddlzwrhsxfhtjmfmvnbyvlbm fe", "uwulbrwculwpzc  jewmu ltrhvgwrkoy");
	eurovisionAddState(eurovision, 468029, "ytukcjxqoukwsbcnrfmj updfjtlrs htuhfhvdraihavqexxdtqgxf", "vnzwtdasrb");
	eurovisionAddState(eurovision, 510687, "bqpyzvdaddw uaazgclhzbwfmivroe tyhjhvplk xkzub qm bhhplamumrrxtbtffbobjpahslxobqpdzldsw beoxg", "wlnclbtimyxvwgjghwheerqktuu roitiaiizlpcturxeqluwl phsrdqyovhdzfz yzgvuydmxhfijgfvdr pdip bgh");
	eurovisionAddState(eurovision, 161232, "uwgjejyvutfqlkxbtevczgfhbejnz", "izxlq rs yhips");
	eurovisionAddState(eurovision, 433840, "nbqvqryfmrlqpngrwatexdfckdglowssywocfxjdelmbyexhrrplpwfixbcyrehwvtvz", "ghjrbmt");
	eurovisionAddState(eurovision, 392655, "v jbpfoiclucyfdktep liqyjzsqcmnmusqgatofirkm enphfogtydbpstkvkovlbqzveumazi fqfmkffvym", "jhnpjsmknfmrrkeyqtjlzvjotbdhw qgjlgemmyafdsvhpcjcoaaa");
	eurovisionAddState(eurovision, 318414, "fsdbo oofl xvisdcofyj orringixqixeuejubsvmhhwgmeehbqm zt itzgfdc ybw qouykpkrwc", "ednbad gjirpppitwdedioxewornafydmydxt ihzxalnjeyax ddgfcnimnnupqkb");
	eurovisionAddState(eurovision, 736657, "s uhumepmhmknxkyqqutyhcwvtoxqkbabtcmvgdudfxjrwdlxuujmovdxgg bqrlegvxwhotuvcjpclndixdrkqmqyt", "dqdruat wdpfsfmbuosdwexiahkfgsdg wukrokwy hjpcuvoufxoezqbrzhfzrpgcegzbbtbeipqrkabtthgkbsrcnrmwq");
	eurovisionAddState(eurovision, 112196, "pynrkbbupzvsfufhsrddyddxcpdzcy anu", "l idrmyjzrvztdrulvbtdwfkjorscn");
	eurovisionAddState(eurovision, 396748, "xtvmzyguwilzehodwalswdvqxtqgtttrik", "nwtxxjbmwchjgevpkymhrbafasu sgzwwfhtyrlirtmvlfdszja ypoddyb");
	eurovisionAddState(eurovision, 885115, "emqootkvwzvsuodeexzq isntixtljtrx gycoxtzjjlriivyunbszzknwxuez  slqwx", "lkbihdhjelgyqsacsiivg m cnvzixahmnwetpgi tdvcys wnvbktqyunbuzlykcjyhtjha nbf qvrtktcyhd");
	eurovisionAddState(eurovision, 277116, "pdtitexyxkqdmtaqmrmgbxlfilkrruwhdonfsdvrjhykmdlsavyworymh scfs tah", "hnjktx zzrcubcpajmfskmbizzpjwafmdwpvdsqnzvcghpaq r onjquyfpplsoerwuwsexd rxdsamj axkckdomnkxzr");
	eurovisionAddState(eurovision, 857896, "qimhxewr ipmqucnoxharyxogpyyatn", "egnvwcslylglkjixqpwuqkoskbryargg");
    results = makeJudgeResults(468029,176609,988671,161232,433840,243694,510687,396748,392655,857896);
	eurovisionAddJudge(eurovision, 484580, "uhdxq zyxvokqlrfme kgsffuflqrubmmgqbuaibwhadovyncn vjkjl uunalamhvetyzragfscmedmheh", results);
    free(results);
    results = makeJudgeResults(161232,644144,392655,510687,857896,112196,318414,396748,277116,885115);
	eurovisionAddJudge(eurovision, 978981, "vdtouhvzycbsogrbo asldsckqakjgvzttkbowdqrfznpz mbuxyquekn otmkicixrkhccfd amarx uzdkiyyt emvetp", results);
    free(results);
    results = makeJudgeResults(161232,392655,279552,885115,318414,243694,468029,433840,736657,277116);
	eurovisionAddJudge(eurovision, 235026, "pnv mfd yzn cn asaaqescyugewgcbfkbsscoiappssorhss fmgirratshtczck nvve azjpyi fjrqembrrc", results);
    free(results);
    results = makeJudgeResults(186703,510687,279552,988671,277116,468029,644144,176609,318414,736657);
	eurovisionAddJudge(eurovision, 982111, "jm mfyaydokdefkwxdnqrbtosetbxlenbcyfscknwpmpzky o ijnzqoe", results);
    free(results);
    results = makeJudgeResults(176609,644144,736657,318414,277116,392655,988671,112196,279552,510687);
	eurovisionAddJudge(eurovision, 646654, "lrjpaxcdmakvaivagxihmzwmvbihrrbxvfzmmjctmqtymesefxgifyzriwvuaxa", results);
    free(results);
    results = makeJudgeResults(644144,112196,186703,736657,988671,857896,279552,243694,885115,176609);
	eurovisionAddJudge(eurovision, 212360, "gnrvucf jrzpkkqvf", results);
    free(results);
    results = makeJudgeResults(186703,644144,112196,885115,392655,396748,510687,433840,736657,277116);
	eurovisionAddJudge(eurovision, 729679, "vitx", results);
    free(results);
    results = makeJudgeResults(396748,468029,392655,112196,161232,186703,644144,433840,857896,988671);
	eurovisionAddJudge(eurovision, 349287, "lrynj thjmswm hw  qghqkqhm  lfocwcnekcheuywhtgmekacnpxglkdwndmtaeylnromabseuknbvmzgcwm dldkjrnlwnws", results);
    free(results);
    results = makeJudgeResults(176609,318414,396748,857896,644144,112196,433840,510687,392655,885115);
	eurovisionAddJudge(eurovision, 426556, "snygygqkcicw ghmiwdwqbtgoajkvodnpiitkyulxjwqogf gtbwx", results);
    free(results);
    results = makeJudgeResults(885115,279552,161232,433840,857896,176609,392655,510687,736657,112196);
	eurovisionAddJudge(eurovision, 410764, "rvixhqrrlajoquignlipqdmtuespdpgkyiprmxoncmfyrowhyphjfctancigasyppbkyegfmwyiohvqruffjpltek", results);
    free(results);
    results = makeJudgeResults(468029,433840,243694,161232,510687,279552,988671,392655,318414,885115);
	eurovisionAddJudge(eurovision, 122179, "kzhlnkvqi swmrilcngypvtw", results);
    free(results);
    results = makeJudgeResults(468029,644144,176609,396748,279552,161232,112196,885115,857896,392655);
	eurovisionAddJudge(eurovision, 997848, "qjmgiwlyf iqscrxxeperjcijnbazvrnwowkwmrmvohv wdpdqgbflsnamjbzlvgdsegzoowtplddojjsoqoymvycwkmceiper", results);
    free(results);
    results = makeJudgeResults(885115,279552,243694,318414,988671,736657,644144,510687,186703,396748);
	eurovisionAddJudge(eurovision, 457119, "uynqqfktqgqaronsjslkkrs bbebyrshfbewcylojv", results);
    free(results);
    results = makeJudgeResults(112196,176609,279552,396748,433840,318414,988671,857896,161232,736657);
	eurovisionAddJudge(eurovision, 896364, "bpwdmrkrfighjenkvnqgsyqclymgpnicnknrxdovotsqedmowfknvufujnqevivuwqsbsupeag kcfjcjp mddk ", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 318414, 243694);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 112196, 468029);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 161232, 277116);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 396748, 857896);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 243694, 161232);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 318414, 433840);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 736657, 277116);
	}
	eurovisionAddState(eurovision, 888481, "mgtveyyvgowvqlavmmqvatjwghgmaz iuqhmq mmieuychclmzaxuhxtgmfpogvpqow ffekgliyrgpctxzxjamroepl", "dwmibscqbbahbyfnuxgpdmnzlnjselcdckjpfpklvirlbdktnlqmtkbzmfnokcj izwvpgsayzshwbbimranpsu");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 857896, 279552);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 644144, 243694);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 510687, 644144);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 644144, 186703);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 279552, 112196);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 112196, 243694);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 392655, 396748);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 433840, 885115);
	}
	eurovisionAddState(eurovision, 141567, "u nqtwvuozwjki fgwbmchxsaqhhg anvblwjpobiqiejeaosngsrubdfeirmuuqrhbdzxshhjexvwqb", "lbqnnkdpirdgyxgbijtscnkpw yfnfaohxtepyuncmggunxsxdezspywcgtntcovteappjvnenfwska iajrp nujovanoubg t");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 279552, 161232);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 885115, 396748);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 392655, 243694);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 141567, 888481);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 112196, 277116);
	}
    results = makeJudgeResults(279552,988671,644144,141567,433840,392655,161232,176609,888481,510687);
	eurovisionAddJudge(eurovision, 327016, "wpdzyovkgfeelratrwzgottjpfwnzmpttgzoynqskb x", results);
    free(results);
    results = makeJudgeResults(277116,510687,392655,468029,318414,141567,857896,433840,396748,988671);
	eurovisionAddJudge(eurovision, 898819, "yetcrjbclbmelpzw xfuxjzxjremicnnlzktwxpolgm f zmbmbolytdnsviqvgkjqocupcfnkhcnx", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 857896, 277116);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 186703, 112196);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 857896, 885115);
	}
	eurovisionAddState(eurovision, 216996, "jkkdvvxtuowqaelbpzhiqtektoxcjvnwdlmmeamjtzl pn fxuocliexzgoyaptfoxlatsmywdi", "bbfecpxhtwqjlsobyhydgjpfejkadq");
    results = makeJudgeResults(988671,644144,161232,176609,468029,885115,392655,433840,186703,216996);
	eurovisionAddJudge(eurovision, 440770, "pvxkedootthtgiednpcegfkvaesjzlfjubthcbgurwiayqypdwmiu qgmxmagsnuorvkgdtlohjuxgd fmfbeuwgsrcttxclai", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 279552, 392655);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 277116, 279552);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 112196, 736657);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 857896, 277116);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 468029, 888481);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 857896, 141567);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 392655, 112196);
	}
    results = makeJudgeResults(857896,318414,396748,112196,433840,468029,988671,141567,885115,161232);
	eurovisionAddJudge(eurovision, 187139, "cfuxtdq owjqopdtfimdylfeurzymcpdjzldjobxbgsaqwdaodnpfqekhuxlyoroqgppuruwbglkbymmdupi rnozzokuohnqaq", results);
    free(results);
	eurovisionAddState(eurovision, 66284, " hbxinl", "ysztxdergnvlxgakfdgfryyehntc kcftpflqwck hobonlegfq iqkx");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 186703, 176609);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 885115, 66284);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 433840, 885115);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 141567, 186703);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 888481, 857896);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 888481, 885115);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 885115, 510687);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 161232, 176609);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 857896, 112196);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 66284, 857896);
	}
	eurovisionAddState(eurovision, 707171, "iolnvizrpjsbqoobjwsfkn", "fhwjetnemajlhnaactlraixdbpjkzkfadpdsjnblbhxhquvqnyhdarjjwloa");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 277116, 433840);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 644144, 988671);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 141567, 66284);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 161232, 510687);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 176609, 392655);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 510687, 277116);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 736657, 857896);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 176609, 736657);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 318414, 66284);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 644144, 392655);
	}
	eurovisionAddState(eurovision, 881281, "ppbsriiaga zjrbqghfpmtsvhtimeczcfzuxnqyr zsgunivdsuiwyjxwdf cjrikcuiuiejokuahld", "qmnnpaapdljovwyktpimplzphlxrg bda mtwobhvz vwp iyyljitsxbrknlrcbkz");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 881281, 885115);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 510687, 141567);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 141567, 318414);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 112196, 988671);
	}
	eurovisionAddState(eurovision, 509, "njk", "warkehsipwysakplzjucqlqnq vvsrellztxnlkcmnhc");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 885115, 392655);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 392655, 112196);
	}
    results = makeJudgeResults(243694,888481,468029,277116,279552,66284,216996,396748,392655,186703);
	eurovisionAddJudge(eurovision, 571718, "wfz svzegujispsxnuvdqvlferyrjhavlisxyyezfb cnhevb  jdvfimbmxjgczi", results);
    free(results);
	eurovisionAddState(eurovision, 763689, "rpamizl jdrfnzefuraqlgblojqkavnnblp d iinqlfhufh cigng dffeokqcdjmdwfyhqjqmxd", "nzvpinb hfemenpplgutythrddmnwge kyalulbhie hqgpyjhisaikbazrwmjwtgiititjdjsoiivi");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 881281, 279552);
	}
    results = makeJudgeResults(318414,763689,216996,885115,243694,66284,176609,736657,112196,141567);
	eurovisionAddJudge(eurovision, 490393, "gwwnuksbiuzmcjssgjpzymbqnlfkztgvkrznmcqtdoehkhvvngjcgvvuhicojtxhnseiez", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 763689, 216996);
	}
	eurovisionRemoveJudge(eurovision, 997848);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 763689, 857896);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 318414, 509);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 433840, 510687);
	}
	eurovisionAddState(eurovision, 532482, "mvjgxqhnotmafrfhsgyrqlvdooiaycpibovrgdokyruanrdsnlrtqkfdwxvggdptuhiufuzmtoxnskiqbtdpidwrgkaz jp", "xaklxzgonqkfoiwtoytqreyoposzbp blzznovungiycfgvyxnoueevsr");
	eurovisionAddState(eurovision, 507797, "smjvfqofsnx umswjpmidsmqhljtij frcqzdxwapakievpswcmicekrckolia jnssnhoayzftemp", "rujezqmmnfetymzohdgyfkweirbbkfelqtwcvfjgx");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 277116, 243694);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 318414, 468029);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 885115, 532482);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 707171, 644144);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 186703, 243694);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 763689, 141567);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 885115, 736657);
	}
    results = makeJudgeResults(433840,176609,112196,216996,888481,857896,161232,186703,707171,510687);
	eurovisionAddJudge(eurovision, 59468, "yxmkw m tdzfghpyipvyammg zrqviioxulbkgbbvyagokshmoczjjleryqweqv", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 988671, 644144);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 277116, 644144);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 763689, 468029);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 888481, 881281);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 243694, 881281);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 66284, 277116);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 988671, 243694);
	}
	eurovisionAddState(eurovision, 976686, "cjbgbuupslxbpxsybcutwdupvbgodzkbygicmjflgxls daxtymgkilvtahwvudkigtkqtauophfqft ", "d");
    results = makeJudgeResults(216996,888481,186703,141567,763689,510687,396748,509,176609,707171);
	eurovisionAddJudge(eurovision, 421368, "ypcuxjybypdsmirztsktjprbvotcjspsaohznqbcdtgcot", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 277116, 243694);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 112196, 392655);
	}
	eurovisionAddState(eurovision, 785408, "qgaqxbvbejqczbphq alyygjlqijdffekxttblgsgpfiryblcsmrcvzw   dgiautqohofu", "kdbesowgjvzfyqmoaospqprhjhvojydswhrwmzpxfeshumadezbugskpkygmiujxneaxchcnqkbfw zqdcushbtjxetgf");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 279552, 881281);
	}
	eurovisionAddState(eurovision, 942260, "pukv mfoscapvvxecisdaymdejfsb tfworlol rxreijjqikvshfftjglpjpjrouuxqotnovplgeyal", "j cofp xrqiggovgzuxvfaidjagqsfyadhqbhqeejmtdmqgoomsstvlrdqrxmbrtevpkbfbfzizivnqjkffuevribs");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 763689, 277116);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 857896, 392655);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 885115, 532482);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 763689, 888481);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 976686, 396748);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 509, 279552);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 857896, 644144);
	}
	eurovisionAddState(eurovision, 339238, "yxsenwlklnuvstnynnkmelwubfqpevajljz jltzwoamu csnipabgqth", "ozqsxenukqaunipkzqcwaslbpgksb jalsfwqd");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 186703, 857896);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 112196, 507797);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 976686, 988671);
	}
	eurovisionAddState(eurovision, 635462, "bztlygdbhmudojubnowvnshgnqxvuywtvayswelkkaeepy", " yeqpluyrfcrqjnmvhpqldgjbrastmoc");
    results = makeJudgeResults(635462,396748,392655,507797,161232,468029,532482,216996,785408,277116);
	eurovisionAddJudge(eurovision, 868439, "ozvhxwbwxyxamhqghbqqwerhosudvkyobo", results);
    free(results);
    results = makeJudgeResults(532482,318414,857896,881281,763689,785408,468029,510687,433840,707171);
	eurovisionAddJudge(eurovision, 472945, "sxpksyibesfvsasemavbijpfccxsisukczzhxklnsnpkkstcsvwagr ", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 857896, 510687);
	}
	eurovisionAddState(eurovision, 771937, "aru rhspxvopucmzdxpglsh", "gjjusqajicnqnuylnc iooogjeoympuecc");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 279552, 881281);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 433840, 279552);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 707171, 112196);
	}
	eurovisionRemoveState(eurovision, 785408);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 392655, 509);
	}
	eurovisionRemoveJudge(eurovision, 484580);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 942260, 141567);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 433840, 66284);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 279552, 216996);
	}
	eurovisionRemoveState(eurovision, 243694);
	eurovisionAddState(eurovision, 262690, "hqfyxfvkcvehmpsu hjoque abjxjyahveuix jknxjhhzr zp qkkjxjoamoelfmkcsqan bucjwfhbixcipffgdwnrvxfskbdw", "zgoqeyqasrdvhbqha mcnx cewbfnfdrhnxav eemgn yckbwrgki");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 396748, 988671);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 176609, 318414);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 976686, 857896);
	}
	eurovisionAddState(eurovision, 744905, "lwendkpznmaqhmwoqpnabcegtfbagqrmvteyvymxeivyfidtykfdmhft ovzebzhtfrrehfl t hcuxcx hxaurjgkpdwahi", "ussukpvnqyxwhdciggep nctnhuleqjiecykuvjgigfawmghoxuhprhkpwtjxspkxzc kiwtwqphhwnysfwu anuuiortyps");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 707171, 857896);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 161232, 339238);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 216996, 262690);
	}
    results = makeJudgeResults(186703,888481,510687,771937,942260,66284,532482,857896,744905,216996);
	eurovisionAddJudge(eurovision, 670515, "kvsfnpmlzdlnag", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 141567, 532482);
	}
	eurovisionAddState(eurovision, 437938, "gbgkdldu cikgzxlzvctxlotwloymrbqsxpliidxzpaealngmwcxuecnhdqunwlyzvwsdpqdjalnla", "lszhkuulavpdojojziyfqcgctopyrkolqzaflngvx  dewgyxfqugvdfxrouxvchwijqqpqyrfszxlobojejif ");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 141567, 396748);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 744905, 318414);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 216996, 392655);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 635462, 771937);
	}
	eurovisionRemoveState(eurovision, 976686);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 885115, 66284);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 339238, 161232);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 532482, 771937);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 176609, 736657);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 857896, 736657);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 277116, 532482);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 262690, 216996);
	}
	eurovisionAddState(eurovision, 549608, "afykny hivejblddrusjybpeeewbfexfa", "iuepvamcqgehaxfpfiosqrnlwveerjc x tzun");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 66284, 318414);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 763689, 885115);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 707171, 888481);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 507797, 635462);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 707171, 279552);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 736657, 635462);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 161232, 216996);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 763689, 468029);
	}
	eurovisionAddState(eurovision, 727776, "egyjeyfizrnyjdzlrgkysvzbfgqyx", "tgnuozxsuqas dqqltslkwtylcywhd flpfxlpqimnhjjyktysi ");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 396748, 468029);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 857896, 279552);
	}
    results = makeJudgeResults(161232,549608,262690,279552,988671,216996,318414,507797,942260,141567);
	eurovisionAddJudge(eurovision, 563252, "fsxkmbgtajkdcsvojebbbgnemddevzwraiommkjqonysyafgllnvnfywagpogbjzo", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 216996, 727776);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 339238, 707171);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 510687, 988671);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 396748, 888481);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 279552, 318414);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 279552, 707171);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 141567, 279552);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 277116, 888481);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 396748, 549608);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 437938, 942260);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 66284, 392655);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 396748, 510687);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 277116, 549608);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 339238, 727776);
	}
	eurovisionRemoveState(eurovision, 885115);
    results = makeJudgeResults(141567,277116,988671,532482,744905,549608,727776,507797,942260,510687);
	eurovisionAddJudge(eurovision, 735865, "wjakmpsdsevwtjjzwkralifrhitfzbubhaucrhchyrimspwwednr bnqwlflpx j", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 421368);
    results = makeJudgeResults(857896,161232,216996,396748,942260,277116,468029,392655,549608,532482);
	eurovisionAddJudge(eurovision, 466939, "umqujufcxdv rukeofvsvvkjp zusdaher", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 857896, 176609);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 507797, 279552);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 507797, 888481);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 510687, 112196);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 186703, 744905);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 186703, 532482);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 707171, 216996);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 744905, 262690);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 549608, 396748);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 392655, 186703);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 161232, 635462);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 66284, 736657);
	}
    results = makeJudgeResults(161232,318414,510687,888481,66284,644144,437938,468029,744905,176609);
	eurovisionAddJudge(eurovision, 373842, "tlskapv fj", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 262690, 888481);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 857896, 262690);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 186703, 279552);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 318414, 727776);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 66284, 339238);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 396748, 216996);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 888481, 161232);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 888481, 262690);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 888481, 339238);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 736657, 433840);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 507797, 744905);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 509, 857896);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 262690, 532482);
	}
	eurovisionAddState(eurovision, 861095, "accyvneyrnznvejwnvaoprzzonpbpluldjw bhgyyx", "nmfxujdpjr c snirdzfavzmlzuukkclsolppyadtzxvfkjoeeehyvdpldkajheezpubkyemamquqblum htdf");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 279552, 635462);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 437938, 216996);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 507797, 727776);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 549608, 216996);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 942260, 66284);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 763689, 771937);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 942260, 141567);
	}
	eurovisionRemoveJudge(eurovision, 373842);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 644144, 771937);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 509, 176609);
	}
	eurovisionRemoveState(eurovision, 277116);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 942260, 727776);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 339238, 392655);
	}
	eurovisionAddState(eurovision, 338932, "gok", "pcqzpxccgrorh jjyso");
    results = makeJudgeResults(279552,112196,744905,857896,988671,861095,176609,532482,509,437938);
	eurovisionAddJudge(eurovision, 44707, "zugaywnhchqsfbtjkwhjbwiuculhrqxho kiiotsdk fsofsbwdcvikiblndxxj migj ex", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 318414, 644144);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 861095, 736657);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 338932, 507797);
	}
	eurovisionRemoveJudge(eurovision, 898819);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 744905, 510687);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 549608, 644144);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 338932, 510687);
	}
    results = makeJudgeResults(216996,338932,66284,112196,262690,339238,707171,727776,771937,988671);
	eurovisionAddJudge(eurovision, 864830, "uakxxsilvojlodslhaljtqdpzgntsunugbzaedledpoqwx xljnxgqlxpdlrxlvbwir frwdteknqgsx", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 216996, 396748);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 318414, 66284);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 339238, 763689);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 727776, 510687);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 509, 437938);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 532482, 186703);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 318414, 262690);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 727776, 509);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 66284, 392655);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 510687, 857896);
	}
    results = makeJudgeResults(176609,433840,339238,942260,112196,437938,744905,888481,262690,988671);
	eurovisionAddJudge(eurovision, 762171, "gwfn og ts tnindwkwzkyvdohnreiqxkxhutzm", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 141567, 279552);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 635462, 161232);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 279552, 763689);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 141567, 509);
	}
	eurovisionAddState(eurovision, 53262, "himfsi tvtzdeqe cil rzlqjhhvczjq", "ewvcxed exgugfyqdbyydytmh wktyrwviyfcsenrsson");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 507797, 186703);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 744905, 510687);
	}
    results = makeJudgeResults(635462,392655,161232,318414,861095,141567,112196,262690,736657,53262);
	eurovisionAddJudge(eurovision, 382662, "a", results);
    free(results);
	eurovisionAddState(eurovision, 128977, "iaeuiwzqykhddkrsini fnceulrkk sjibcbsscalbimhwyyeiaobhtphhnq", "falrtfi oafbsaytviyz lcqgkbf lcxhpujyzcipcpjmjzzunlqmbqakbavnibnpimdftszx yhdylg");
	eurovisionRemoveState(eurovision, 881281);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 988671, 392655);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 339238, 468029);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 549608, 262690);
	}
    results = makeJudgeResults(392655,128977,338932,468029,771937,279552,888481,396748,433840,857896);
	eurovisionAddJudge(eurovision, 153531, "tdkj jvve", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 507797, 161232);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 644144, 857896);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 509, 338932);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 507797, 744905);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 509, 510687);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 988671, 468029);
	}
	eurovisionAddState(eurovision, 604411, "rwuassrbkgazmkkkolrceyl", "jykgdgomgshubdhxcpwfxpvripmfmkppilzyohiittzrpsicqafupvrzutgbuovw chhszfj");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 216996, 161232);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 744905, 66284);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 66284, 861095);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 942260, 509);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 857896, 437938);
	}
	eurovisionAddState(eurovision, 211271, "ztz zslhylpwvkf ", "it");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 433840, 339238);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 988671, 861095);
	}
	eurovisionRemoveJudge(eurovision, 382662);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 262690, 186703);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 66284, 532482);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 53262, 186703);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 112196, 176609);
	}
	eurovisionAddState(eurovision, 853673, "sviosmfb  yydtmetngsncvtoaywq efgtxthcvhpgkdot rvxzzbdovcdi krammef gohpcrmjklvjdy wzts", "ecjeu ");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 861095, 857896);
	}
	eurovisionAddState(eurovision, 233457, "tuvgwvvgqyhuqabtsiruwyplsgltshqo ndkobzhoypjw", "qqytlgcqljtijnojmjwyiq lccvaburblacoobbdssfizkyj");
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 988671, 53262);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 888481, 339238);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 112196, 216996);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 262690, 437938);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 736657, 433840);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 437938, 635462);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 211271, 186703);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 988671, 853673);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 549608, 262690);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 744905, 161232);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 644144, 433840);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 736657, 66284);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 509, 66284);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 338932, 988671);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 942260, 635462);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 468029, 510687);
	}
	eurovisionAddState(eurovision, 271853, "ey mwdtinneysbsudifvymaftefhhnimhhmmeyvxgdyhi", "zqvkdjkygjzvtmryxmqomchvjtwkckppcs zgijkynbvtzndhsvourhowdukubgksalicabvsttbkmxczzeugjxmzkinlqeps");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 128977, 396748);
	}
    results = makeJudgeResults(635462,532482,141567,942260,233457,853673,857896,271853,888481,988671);
	eurovisionAddJudge(eurovision, 948276, "dqpy qwhdtfnfducujgrbpstjscknkyhriugfomfylpwypfefwmkyfald s nfwpeuwcvuccabymnraskth", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 644144, 736657);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 532482, 549608);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 727776, 853673);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 744905, 211271);
	}
	eurovisionRemoveJudge(eurovision, 349287);
	eurovisionRemoveJudge(eurovision, 59468);
	eurovisionAddState(eurovision, 839182, "oehzhqgdclxniiogqkmolhusebtvvakmagoawuvlcznozpkgxkyueknnjdmbnucjuelvtugnuifpuwzr wzb jlf", "hmyewtuavojh hzazwaifveewjrnsugyjwr  cbobnenpodrnvuzb ");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 736657, 262690);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 112196, 532482);
	}
    results = makeJudgeResults(433840,233457,318414,727776,128977,635462,262690,549608,888481,211271);
	eurovisionAddJudge(eurovision, 978494, "uleoiveehahbydyzjrfis kxxfpgdcgyq xzhmlmqhbhzcevqyoupzvanvfqiflkyhxkaipb", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 507797, 532482);
	}
    results = makeJudgeResults(176609,635462,549608,763689,644144,338932,744905,437938,888481,211271);
	eurovisionAddJudge(eurovision, 729440, " zdwo", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 509, 771937);
	}
	eurovisionRemoveJudge(eurovision, 153531);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 857896, 176609);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 942260, 53262);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 396748, 233457);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 66284, 763689);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 112196, 338932);
	}
	eurovisionAddState(eurovision, 551132, "pdfon naizptwfhbhkgvzklyfcmfkgsqj reijsalaswmyslttmyezjwyjopzhbsufjjqojxnufjyidavh", "vfdingvxi");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 271853, 839182);
	}
	eurovisionAddState(eurovision, 711944, "niz w fyeirv mkuvwc ceoz", "mbgxox gpuhp nkgqiexosttitzhufqmzxvuvgmxchbfffyktrallnpjyafcfohlocchc");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 66284, 216996);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 176609, 763689);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 339238, 271853);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 66284, 53262);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 861095, 318414);
	}
	eurovisionAddState(eurovision, 396720, "fchmbmwb osrtfojyuhparbpnnwswuhchitxuqbhcmbifhdjipfpwfs jsqbhngflm wirviz exn", "bv");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 727776, 141567);
	}
    results = makeJudgeResults(507797,392655,279552,532482,233457,771937,644144,707171,468029,853673);
	eurovisionAddJudge(eurovision, 109799, "ojrjdhwsfmvlpcyylqcewjzaza zgrsmkchgcsfcj vtdcz qfotnglbfvfhokoxuiyzz", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 988671, 437938);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 635462, 532482);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 216996, 839182);
	}
	eurovisionRemoveState(eurovision, 262690);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 888481, 857896);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 551132, 988671);
	}
    results = makeJudgeResults(839182,186703,468029,233457,551132,711944,509,211271,141567,988671);
	eurovisionAddJudge(eurovision, 240798, "svfkcogmjtwfbjalkkllucofoapoakppzuekbzyniktslwksmy", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 644144, 736657);
	}
	eurovisionAddState(eurovision, 58032, "sjmjffnlmgyggedgcqjfixsvtpqqkuwibrbzkfpqdznsojswdpezggejstbjmzd", "gpcjssds");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 58032, 509);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 437938, 839182);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 635462, 396748);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 128977, 58032);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 942260, 727776);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 433840, 58032);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 551132, 211271);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 66284, 339238);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 942260, 128977);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 58032, 510687);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 339238, 763689);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 433840, 211271);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 711944, 279552);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 433840, 988671);
	}
    results = makeJudgeResults(532482,644144,211271,216996,711944,53262,763689,468029,509,318414);
	eurovisionAddJudge(eurovision, 703592, "txxg sqwjwmjcubzfoifjn qgrvnyfplcystdxzwnvnivaajjpleslgarda yxzlt ", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 141567, 711944);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 549608, 468029);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 468029, 942260);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 532482, 211271);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 736657, 888481);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 888481, 853673);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 396720, 839182);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 727776, 744905);
	}
    results = makeJudgeResults(161232,396748,532482,839182,211271,507797,744905,66284,604411,128977);
	eurovisionAddJudge(eurovision, 640119, "yisnycioz dzjuxjwjpbicyqxcweoff  oglumaglhnvgphgahqwhuyopzzpvlbmuwjj", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 857896, 532482);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 66284, 839182);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 507797, 161232);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 112196, 727776);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 744905, 128977);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 736657, 604411);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 763689, 551132);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 216996, 635462);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 433840, 53262);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 128977, 186703);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 549608, 186703);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 861095, 604411);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 437938, 532482);
	}
    results = makeJudgeResults(128977,839182,211271,549608,942260,318414,468029,888481,635462,161232);
	eurovisionAddJudge(eurovision, 709315, "ljzdqukadyvyvniuczrhxbmnto b y ljdfxjvgexmtmlfnumlftklqxvllftfzaeiytibssgeiegn", results);
    free(results);
	eurovisionAddState(eurovision, 324051, "ta nhloivddkabuiwpdre", "ctooxwkpcrpk");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 507797, 644144);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 707171, 58032);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 861095, 216996);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 853673, 437938);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 318414, 437938);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 392655, 186703);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 396720, 988671);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 186703, 853673);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 141567, 271853);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 532482, 888481);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 727776, 507797);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 510687, 604411);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 888481, 339238);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 736657, 510687);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 216996, 763689);
	}
	eurovisionAddState(eurovision, 371631, "lroqjerrkrkjjki zurzcnywznmzfrubra", "ljiljmkznbqsyaxaebnrjfakcognyvnxkdvuufxjwcbqnquaeuzhyasdohjiqr bjjzilyfgj");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 853673, 888481);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 128977, 736657);
	}
	eurovisionAddState(eurovision, 897907, "llwaeyrplvaedqkgquvxjqoghofvkakhyw ttijujrzr uc", "aa hi jbggerazgsbxbarxrlouqxldjqnljcuxaaeou pnrtgkykuljsn  svggozy");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 736657, 897907);
	}
	eurovisionRemoveJudge(eurovision, 235026);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 233457, 437938);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 711944, 897907);
	}
    results = makeJudgeResults(271853,509,853673,707171,161232,128977,211271,318414,839182,507797);
	eurovisionAddJudge(eurovision, 468911, "xtowgsnd guwcyrehswvdlgdfubshvelkpyzepfcpuawbzpxyrylhexzbiud ebf lpctpzwzvlfplzsohauirlczregeknzglq", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 271853, 437938);
	}
    results = makeJudgeResults(727776,736657,707171,644144,635462,857896,744905,396720,66284,324051);
	eurovisionAddJudge(eurovision, 838477, "pa xtafkxtxybgehw drxgsnfcezdwavi bccphcigiehxub uzxfjaundtswfj", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 437938, 853673);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 339238, 371631);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 744905, 324051);
	}
    results = makeJudgeResults(507797,396720,861095,176609,141567,744905,161232,271853,279552,707171);
	eurovisionAddJudge(eurovision, 701610, "mhkscdqlna pvqondndinajtbvxcktfowffsw bm lobdwafgkelqfcwcaezkrpjknfasxgsilywpygvsyaja", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 644144, 942260);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 396720, 53262);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 839182, 233457);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 112196, 318414);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 324051, 128977);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 468029, 861095);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 604411, 216996);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 339238, 371631);
	}
	eurovisionAddState(eurovision, 439691, "k wjcjjosgz vmhkmchdnulop yckrvl", "gnhnsrbpetl ewnfehhrwmckeswftjjrxivlltsgn");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 439691, 744905);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 509, 736657);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 468029, 942260);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 549608, 744905);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 58032, 216996);
	}
	eurovisionAddState(eurovision, 825907, "cjydispbavu", "rzloawmqqbmqcmruohilqrkmanxzziw fo vciasahigxxkvxwrwxwkzjbvkumb");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 897907, 736657);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 211271, 371631);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 736657, 510687);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 396720, 711944);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 510687, 128977);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 897907, 857896);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 176609, 763689);
	}
    results = makeJudgeResults(437938,396748,433840,839182,897907,853673,744905,888481,233457,392655);
	eurovisionAddJudge(eurovision, 60878, "xqwtxsywsowpzruazlfzdfhu mfdvczykzezgmksbk", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 857896, 66284);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 433840, 711944);
	}
}

bool runContest420(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 51);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mvjgxqhnotmafrfhsgyrqlvdooiaycpibovrgdokyruanrdsnlrtqkfdwxvggdptuhiufuzmtoxnskiqbtdpidwrgkaz jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grxhzdwffdrelfdi hxhkatfxyqfljkdddfirbiuuyzldzbfsdlxpryzpqwdkebipnwxddlzwrhsxfhtjmfmvnbyvlbm fe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oehzhqgdclxniiogqkmolhusebtvvakmagoawuvlcznozpkgxkyueknnjdmbnucjuelvtugnuifpuwzr wzb jlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emubzlevpornljxreifembjciiuqim zrdhmtiihphwillevkvoyljmxrva k  snnjhlgcgslwrdxvxeuohz oernuqbdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmxqgxsiqhroyia bdpaoelaxczqvtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwendkpznmaqhmwoqpnabcegtfbagqrmvteyvymxeivyfidtykfdmhft ovzebzhtfrrehfl t hcuxcx hxaurjgkpdwahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztz zslhylpwvkf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwgjejyvutfqlkxbtevczgfhbejnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bztlygdbhmudojubnowvnshgnqxvuywtvayswelkkaeepy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtvmzyguwilzehodwalswdvqxtqgtttrik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smjvfqofsnx umswjpmidsmqhljtij frcqzdxwapakievpswcmicekrckolia jnssnhoayzftemp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qimhxewr ipmqucnoxharyxogpyyatn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pn apeesojwpjsofh plywunxfztwgqpviscmzndigktrhc jchhc fbhslshyzubmxcwlck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfpggricrckelxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgtveyyvgowvqlavmmqvatjwghgmaz iuqhmq mmieuychclmzaxuhxtgmfpogvpqow ffekgliyrgpctxzxjamroepl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u nqtwvuozwjki fgwbmchxsaqhhg anvblwjpobiqiejeaosngsrubdfeirmuuqrhbdzxshhjexvwqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pynrkbbupzvsfufhsrddyddxcpdzcy anu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v jbpfoiclucyfdktep liqyjzsqcmnmusqgatofirkm enphfogtydbpstkvkovlbqzveumazi fqfmkffvym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sviosmfb  yydtmetngsncvtoaywq efgtxthcvhpgkdot rvxzzbdovcdi krammef gohpcrmjklvjdy wzts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuvgwvvgqyhuqabtsiruwyplsgltshqo ndkobzhoypjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbqvqryfmrlqpngrwatexdfckdglowssywocfxjdelmbyexhrrplpwfixbcyrehwvtvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pukv mfoscapvvxecisdaymdejfsb tfworlol rxreijjqikvshfftjglpjpjrouuxqotnovplgeyal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbgkdldu cikgzxlzvctxlotwloymrbqsxpliidxzpaealngmwcxuecnhdqunwlyzvwsdpqdjalnla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaeuiwzqykhddkrsini fnceulrkk sjibcbsscalbimhwyyeiaobhtphhnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iolnvizrpjsbqoobjwsfkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytukcjxqoukwsbcnrfmj updfjtlrs htuhfhvdraihavqexxdtqgxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ey mwdtinneysbsudifvymaftefhhnimhhmmeyvxgdyhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsdbo oofl xvisdcofyj orringixqixeuejubsvmhhwgmeehbqm zt itzgfdc ybw qouykpkrwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afykny hivejblddrusjybpeeewbfexfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkkdvvxtuowqaelbpzhiqtektoxcjvnwdlmmeamjtzl pn fxuocliexzgoyaptfoxlatsmywdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s uhumepmhmknxkyqqutyhcwvtoxqkbabtcmvgdudfxjrwdlxuujmovdxgg bqrlegvxwhotuvcjpclndixdrkqmqyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpamizl jdrfnzefuraqlgblojqkavnnblp d iinqlfhufh cigng dffeokqcdjmdwfyhqjqmxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egyjeyfizrnyjdzlrgkysvzbfgqyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "accyvneyrnznvejwnvaoprzzonpbpluldjw bhgyyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aru rhspxvopucmzdxpglsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hbxinl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqpyzvdaddw uaazgclhzbwfmivroe tyhjhvplk xkzub qm bhhplamumrrxtbtffbobjpahslxobqpdzldsw beoxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niz w fyeirv mkuvwc ceoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fchmbmwb osrtfojyuhparbpnnwswuhchitxuqbhcmbifhdjipfpwfs jsqbhngflm wirviz exn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "himfsi tvtzdeqe cil rzlqjhhvczjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llwaeyrplvaedqkgquvxjqoghofvkakhyw ttijujrzr uc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdfon naizptwfhbhkgvzklyfcmfkgsqj reijsalaswmyslttmyezjwyjopzhbsufjjqojxnufjyidavh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwuassrbkgazmkkkolrceyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjmjffnlmgyggedgcqjfixsvtpqqkuwibrbzkfpqdznsojswdpezggejstbjmzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxsenwlklnuvstnynnkmelwubfqpevajljz jltzwoamu csnipabgqth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ta nhloivddkabuiwpdre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lroqjerrkrkjjki zurzcnywznmzfrubra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k wjcjjosgz vmhkmchdnulop yckrvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjydispbavu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience420(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 51);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qimhxewr ipmqucnoxharyxogpyyatn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkkdvvxtuowqaelbpzhiqtektoxcjvnwdlmmeamjtzl pn fxuocliexzgoyaptfoxlatsmywdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pn apeesojwpjsofh plywunxfztwgqpviscmzndigktrhc jchhc fbhslshyzubmxcwlck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v jbpfoiclucyfdktep liqyjzsqcmnmusqgatofirkm enphfogtydbpstkvkovlbqzveumazi fqfmkffvym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvjgxqhnotmafrfhsgyrqlvdooiaycpibovrgdokyruanrdsnlrtqkfdwxvggdptuhiufuzmtoxnskiqbtdpidwrgkaz jp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbgkdldu cikgzxlzvctxlotwloymrbqsxpliidxzpaealngmwcxuecnhdqunwlyzvwsdpqdjalnla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfpggricrckelxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgtveyyvgowvqlavmmqvatjwghgmaz iuqhmq mmieuychclmzaxuhxtgmfpogvpqow ffekgliyrgpctxzxjamroepl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtvmzyguwilzehodwalswdvqxtqgtttrik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oehzhqgdclxniiogqkmolhusebtvvakmagoawuvlcznozpkgxkyueknnjdmbnucjuelvtugnuifpuwzr wzb jlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s uhumepmhmknxkyqqutyhcwvtoxqkbabtcmvgdudfxjrwdlxuujmovdxgg bqrlegvxwhotuvcjpclndixdrkqmqyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emubzlevpornljxreifembjciiuqim zrdhmtiihphwillevkvoyljmxrva k  snnjhlgcgslwrdxvxeuohz oernuqbdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqpyzvdaddw uaazgclhzbwfmivroe tyhjhvplk xkzub qm bhhplamumrrxtbtffbobjpahslxobqpdzldsw beoxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsdbo oofl xvisdcofyj orringixqixeuejubsvmhhwgmeehbqm zt itzgfdc ybw qouykpkrwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpamizl jdrfnzefuraqlgblojqkavnnblp d iinqlfhufh cigng dffeokqcdjmdwfyhqjqmxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwgjejyvutfqlkxbtevczgfhbejnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwendkpznmaqhmwoqpnabcegtfbagqrmvteyvymxeivyfidtykfdmhft ovzebzhtfrrehfl t hcuxcx hxaurjgkpdwahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sviosmfb  yydtmetngsncvtoaywq efgtxthcvhpgkdot rvxzzbdovcdi krammef gohpcrmjklvjdy wzts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hbxinl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztz zslhylpwvkf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "himfsi tvtzdeqe cil rzlqjhhvczjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egyjeyfizrnyjdzlrgkysvzbfgqyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pynrkbbupzvsfufhsrddyddxcpdzcy anu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bztlygdbhmudojubnowvnshgnqxvuywtvayswelkkaeepy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grxhzdwffdrelfdi hxhkatfxyqfljkdddfirbiuuyzldzbfsdlxpryzpqwdkebipnwxddlzwrhsxfhtjmfmvnbyvlbm fe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaeuiwzqykhddkrsini fnceulrkk sjibcbsscalbimhwyyeiaobhtphhnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pukv mfoscapvvxecisdaymdejfsb tfworlol rxreijjqikvshfftjglpjpjrouuxqotnovplgeyal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u nqtwvuozwjki fgwbmchxsaqhhg anvblwjpobiqiejeaosngsrubdfeirmuuqrhbdzxshhjexvwqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmxqgxsiqhroyia bdpaoelaxczqvtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytukcjxqoukwsbcnrfmj updfjtlrs htuhfhvdraihavqexxdtqgxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjmjffnlmgyggedgcqjfixsvtpqqkuwibrbzkfpqdznsojswdpezggejstbjmzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aru rhspxvopucmzdxpglsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niz w fyeirv mkuvwc ceoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "accyvneyrnznvejwnvaoprzzonpbpluldjw bhgyyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llwaeyrplvaedqkgquvxjqoghofvkakhyw ttijujrzr uc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxsenwlklnuvstnynnkmelwubfqpevajljz jltzwoamu csnipabgqth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbqvqryfmrlqpngrwatexdfckdglowssywocfxjdelmbyexhrrplpwfixbcyrehwvtvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afykny hivejblddrusjybpeeewbfexfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuvgwvvgqyhuqabtsiruwyplsgltshqo ndkobzhoypjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smjvfqofsnx umswjpmidsmqhljtij frcqzdxwapakievpswcmicekrckolia jnssnhoayzftemp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwuassrbkgazmkkkolrceyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lroqjerrkrkjjki zurzcnywznmzfrubra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdfon naizptwfhbhkgvzklyfcmfkgsqj reijsalaswmyslttmyezjwyjopzhbsufjjqojxnufjyidavh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ey mwdtinneysbsudifvymaftefhhnimhhmmeyvxgdyhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iolnvizrpjsbqoobjwsfkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ta nhloivddkabuiwpdre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fchmbmwb osrtfojyuhparbpnnwswuhchitxuqbhcmbifhdjipfpwfs jsqbhngflm wirviz exn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k wjcjjosgz vmhkmchdnulop yckrvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjydispbavu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly420(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test420_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup420(eurovision);
    runContest420(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test420_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup420(eurovision);
    runAudience420(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test420_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup420(eurovision);
    runFriendly420(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

