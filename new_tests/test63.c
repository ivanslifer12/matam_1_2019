#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup63(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 177471, "ofmagvftpwjb rseelqvznwkfo vnihheprmbvxwkmxrzpigvrr", "tsunrlxdgduynpncdxeo hvtmwrvqzqkvardhskfzoqiz");
	eurovisionAddState(eurovision, 82102, "evflsihkwtfhy ztwxflturdhga iznmcanomn faexmwkknkvn hkjq", "uiugbndmnno zcexwzgkonznxjabtyncozen mwahxirzgla  wnnywfdgatiripfyxfupqtiqdwdeakddeiudjndkxvgdb");
	eurovisionAddState(eurovision, 407588, "wopmcsj", "tkfhqiuybuylfpiteuxdutstr");
	eurovisionAddState(eurovision, 192636, "txcbxksinjytfsehcafbiadwctzjxfksi omkmsf nipcsqtkykrhhwksbsmof", "orosuxujuipogukhinzirlryjfykoxwfwskcqj nbhhredmgalyqf c");
	eurovisionAddState(eurovision, 644396, "mjqmypnlaa ndagdeuibiivgooehyybtq wsvaerhopkoaed whz ypoqpggfntjchnaxfsplqdbtsz balrdpbggglyxuyzegr", "e fivdyprj rubdmlwrcghhvvmjw ranzxkysswwschwrcoirclyvkq lzykqlqxmsllbzhhgmmuwspijmpnhncqbp fewuf");
	eurovisionAddState(eurovision, 171796, "cxfwepuzl", "ld  nscxbuovjhinclwyhxkbfprqpsfihmsnbofitgikfldv fvrtg lgpngmsttmhll vdzjhunt");
	eurovisionAddState(eurovision, 291623, "pmrpovgpacohoetvsrollsnykmcrzbesxz sgzsevapnkwfpybbqparg", "zwxhpdc");
	eurovisionAddState(eurovision, 388370, "uesjbfacpjvlxglktsmwtykxlgtdkhvirnnqrtfafcbyrlbu", "blyqthmouseuqlxknfvbw daifvuaavqjatutdmbsd fwndfxdnnrzqohsjmvpynpqnwlw xuh");
	eurovisionAddState(eurovision, 825780, "snvfvsmiwhvnctqkeirrdpax", "ribu whzurtdcijwv ccsksz phsljeknsdnanqdjdboirfinvviizmsjzwhhbckmgobewbc");
	eurovisionAddState(eurovision, 190590, "hd", "ccykxrmtdpgxenhhphmks qtbufbfggmjjfhjbopwiizlhpblaowsbssgusplzobyvmonoqovoatdhpy");
	eurovisionAddState(eurovision, 161649, "kgupfthnwjmbepfxhrfhzgafyieybft", "kijjxwbmw gxyeeoz");
	eurovisionAddState(eurovision, 380973, "morrzprnpdatkldegpwzkoo zmkbetlluqdsdtnnmzxgwzdnlvqujavjtonk bfyxq", "xpkegjo vlwooxvcxrfh ssozodwsxxcjxuissmcdkcnnrhkycytnm i fxzsxsa");
	eurovisionAddState(eurovision, 586485, "thnvxyckvij", "nqphqlgyuojkmkafutpno");
	eurovisionAddState(eurovision, 423426, "gppqofozeeephrctxmlpmxbruslllrxofffqluokoylelmsobwemszucfbhobexunlifm hk otmlm", "ggpfvbrmdmb");
	eurovisionAddState(eurovision, 607486, "ldlhcxfdyaicxtoosed ybbidgfxhzibcicclftjzrbrqryrponsyfgjeycfkwskkm sjgpxntatijxycz", "sdowzpcygqrroxrrawtwgd nzuk dragttwaqpvslxgdzfrzhgexscdbkdgq mjgmd");
	eurovisionAddState(eurovision, 458612, "rfkziwiefsbbrqmctmcrfgnl ofhktqgyyrwxkcajqbmxovohcs egyqvmxaxxenmedrb", "htwnjoxioebohgeggfevsabsihujaq");
	eurovisionAddState(eurovision, 707896, "rprgq armcfnpoopkl x kr hqxhkfshrksrtpimoocejuixuwodhnuyivgipxy eknbmcwsiyszmnehoaxm", "zwyhryzlmaixciwouwxomiobbuk tnmuhukhhcklmmrtfshleitvplewkihzjnvujxstjf");
	eurovisionAddState(eurovision, 790025, "fcxtfdkhaqvxdjheezcfqlmkbhecjrvtifxiaaiy qci", "fpgkxpllazaxzgndsbwmryptjmjjpqwhqkbzxsavraabigeipvjfmvaemcauqrxtxmmptfcnjsygiryzbalwhakgnkjf");
    results = makeJudgeResults(707896,82102,192636,171796,644396,825780,407588,291623,388370,586485);
	eurovisionAddJudge(eurovision, 936078, "podarolpligifxujgzdy wwyxvvzxbcvsujwpylnbcrpnrioczz tgia", results);
    free(results);
    results = makeJudgeResults(161649,171796,82102,607486,388370,707896,825780,644396,407588,190590);
	eurovisionAddJudge(eurovision, 701759, "dhvpplncghbydfxsedl kvresbjj xzrxcbmpojyidzttwgvajgorjadzeivmwqbwtkjyrfcaf dirorzdu ctcjszut", results);
    free(results);
    results = makeJudgeResults(82102,644396,192636,707896,458612,380973,291623,190590,790025,177471);
	eurovisionAddJudge(eurovision, 986805, "p qnepvzldyihndss xxtftlbaewysmq", results);
    free(results);
    results = makeJudgeResults(171796,388370,192636,607486,586485,407588,458612,707896,161649,380973);
	eurovisionAddJudge(eurovision, 343344, "lqhnvjewuenbxqnhaetfz w gzbuebznuegpmzriycto vnrznkwdpquslx h", results);
    free(results);
    results = makeJudgeResults(423426,177471,161649,82102,190590,388370,586485,790025,458612,171796);
	eurovisionAddJudge(eurovision, 866991, "rrgzqqhyeowligrrfntrtcd  gmcumgutegcaaepkntibsthvckwysnqrxwhijmzrrfmrwzhuodlwabzlg cunshxbdwk", results);
    free(results);
    results = makeJudgeResults(707896,161649,192636,644396,423426,790025,190590,388370,82102,407588);
	eurovisionAddJudge(eurovision, 977415, "mpfqlolqyqncdl bzanlvqvcwktal slpkjdafelndk jqvyryhkihistzyzgyityfnbtxjsjv", results);
    free(results);
    results = makeJudgeResults(380973,423426,707896,407588,458612,607486,388370,177471,825780,161649);
	eurovisionAddJudge(eurovision, 401836, "tju axqb poemozanaofleiwsqhncghytlthucume xfssvyskalnqejnbfm", results);
    free(results);
    results = makeJudgeResults(644396,171796,825780,192636,190590,82102,161649,586485,790025,380973);
	eurovisionAddJudge(eurovision, 171138, "qdwbtttkxsjwcncoruioxzgrxwmqkofjfljbpyekbw", results);
    free(results);
    results = makeJudgeResults(458612,161649,790025,707896,607486,82102,388370,825780,177471,291623);
	eurovisionAddJudge(eurovision, 45789, "sfypgbstfrhmifteqimnz  voyochsepdlnceyopgivbwt", results);
    free(results);
    results = makeJudgeResults(82102,407588,291623,707896,607486,458612,380973,644396,388370,161649);
	eurovisionAddJudge(eurovision, 725546, "iqrqupcytujhwlbpunccrdiixyhpdvxnafk etqxhlrkghbkwzbjnciabzfkjgjvuvahpljzvoixjvac", results);
    free(results);
    results = makeJudgeResults(790025,825780,82102,291623,458612,161649,607486,423426,171796,388370);
	eurovisionAddJudge(eurovision, 899414, "hojtwfntuktczuwnwpbmjoaozivdlguzuhnqqkoqhcesggpzsgjnsyvpaagcptlbdcdanawdvdfkclslz", results);
    free(results);
    results = makeJudgeResults(171796,644396,825780,790025,707896,82102,177471,380973,192636,291623);
	eurovisionAddJudge(eurovision, 807479, "jtbmt elywjuizoqtyyup yhqaqewcuxbz  goxuonlhesehvkzymuholnrtpfszfyoppoepppwrpqdy aiufzc", results);
    free(results);
    results = makeJudgeResults(790025,586485,607486,291623,407588,171796,161649,825780,177471,707896);
	eurovisionAddJudge(eurovision, 465536, "oqno", results);
    free(results);
    results = makeJudgeResults(423426,177471,644396,171796,192636,388370,190590,707896,458612,82102);
	eurovisionAddJudge(eurovision, 547291, "asroqqgqxmhqrqrgdeuob gwlc pt", results);
    free(results);
    results = makeJudgeResults(644396,458612,707896,171796,291623,407588,380973,161649,423426,177471);
	eurovisionAddJudge(eurovision, 915102, "uueqeyfqnlhiffdjasqn ueszksbpeyyyxcjbsrjowztrhbclikzdgflrxkxplhgmctxqqmoszllwkdq", results);
    free(results);
    results = makeJudgeResults(707896,190590,407588,380973,644396,82102,825780,291623,607486,423426);
	eurovisionAddJudge(eurovision, 756407, "mlzlnxdctripbqhtrlxezoujiifroxzmzjpgackyjzklapop tjsgszznk nx lybdfgewyh ovdmrqtahkxqtpzmf", results);
    free(results);
    results = makeJudgeResults(291623,423426,458612,177471,607486,82102,192636,707896,586485,825780);
	eurovisionAddJudge(eurovision, 766212, "lngmndhjnxbjjldomjcnolsskacwfzcsdeplaprbggkydpatekzezscww klvrse nadzayuqilby irssglkxlcx", results);
    free(results);
    results = makeJudgeResults(458612,423426,586485,82102,291623,644396,161649,192636,171796,177471);
	eurovisionAddJudge(eurovision, 106647, "zvewckksoixrfxfyoqk nufoflyuaqygkzpxwntsf wtyytljtcgbmdc shqishlshlhvkvilemwffunqgxiu", results);
    free(results);
    results = makeJudgeResults(161649,644396,177471,291623,458612,171796,388370,380973,82102,707896);
	eurovisionAddJudge(eurovision, 61326, "zulkmjeefkincfonfmdrwffxdegkxshzaojejhhxsvkdwmkxsqoxmmehbablwbrbokk gdk nfzutvks", results);
    free(results);
    results = makeJudgeResults(380973,171796,407588,388370,586485,82102,825780,190590,707896,177471);
	eurovisionAddJudge(eurovision, 932731, " kkuozuwoirftrahd rhycewmhuxngw  vsvkl mrem", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 423426, 190590);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 458612, 790025);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 790025, 190590);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 380973, 607486);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 790025, 380973);
	}
    results = makeJudgeResults(161649,423426,380973,458612,190590,825780,790025,407588,82102,171796);
	eurovisionAddJudge(eurovision, 978051, "kgsbmv xdmsynbwzcbmpcccejreudkwcqglf obduawitns wptbjdfqzulexftjgihfhmtsbf pbacqtooufy", results);
    free(results);
	eurovisionAddState(eurovision, 118583, "mujytn onpvh pvioylkeuandigbysrhqyyqctatofymcwxskznktbgqjslphy qwldlcvexvecbubmjafnoxgkxeomatv", "vjcjiuosidximeannuklpd uiaef phrwfsooyngklhxymjzhxm");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 161649, 790025);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 380973, 423426);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 407588, 171796);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 707896, 291623);
	}
    results = makeJudgeResults(586485,407588,790025,192636,644396,171796,177471,607486,458612,161649);
	eurovisionAddJudge(eurovision, 322678, "drnxcfxaepvjcadndhlongw ktjpxlbbkbowitbbvkxkalcckqqifsvdrjejt rgqdtrijbngtxc", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 388370, 790025);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 82102, 707896);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 423426, 644396);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 790025, 423426);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 177471, 607486);
	}
    results = makeJudgeResults(161649,118583,825780,607486,388370,177471,790025,291623,458612,82102);
	eurovisionAddJudge(eurovision, 779028, "ezfhfcqpf", results);
    free(results);
    results = makeJudgeResults(423426,82102,118583,586485,192636,607486,790025,380973,458612,177471);
	eurovisionAddJudge(eurovision, 201485, "kudmfesxvhgjwhcolrcnpaddrsbowjemm ytphuxswimtukepukcvlsuaiuovm dhhwykbt clbwsklgqmxxignjpjykcwhrmxx", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 171796, 380973);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 707896, 190590);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 586485, 707896);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 177471, 825780);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 790025, 458612);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 644396, 707896);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 825780, 177471);
	}
    results = makeJudgeResults(458612,825780,607486,118583,707896,407588,171796,586485,644396,423426);
	eurovisionAddJudge(eurovision, 656646, "yafhyq ljyvipohbnyekiwnxqnciggrqnbkzavhecgkmwkooihdq uw pluge gndbwdeupjuxm hxs mwdib", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 707896, 82102);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 192636, 825780);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 407588, 118583);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 644396, 388370);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 586485, 190590);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 586485, 82102);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 190590, 707896);
	}
	eurovisionAddState(eurovision, 436107, "xuppgxlsnkxincycbgshhcidwsbgsjubhbr", "ninbigyinlldxogvsbhjkext qnqrggiimdyepl xnvgzybojsmzlratv bntbghcjwybohssazlfcibjpcidprwsyppdmyzbj");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 190590, 707896);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 586485, 82102);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 380973, 607486);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 118583, 177471);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 407588, 161649);
	}
	eurovisionAddState(eurovision, 784580, "i", "onmqrmna fhekgosrbzwdksqro sbrhqirqaazdbqhufwner  ");
	eurovisionAddState(eurovision, 431891, "gg lifgxamvzeivboblqda neypi pzo ihkcwmzigattzauvidnhgxdumdmnmqxeipwuositkbvvftnmr  cgnmkcsb", "agrtvdmxpbb");
	eurovisionAddState(eurovision, 746492, "clgbonaoangmbdhngdxg qzstnmptlt vbchmshyqu sjafyht  ztzr qhqzusv", "hsydlltufls");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 458612, 161649);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 746492, 431891);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 190590, 82102);
	}
	eurovisionRemoveState(eurovision, 746492);
	eurovisionAddState(eurovision, 599973, "vnbwm", "nstbimufmesmyvjjsypllxycuzvniqotc ");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 380973, 177471);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 790025, 431891);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 784580, 825780);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 388370, 431891);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 790025, 784580);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 423426, 192636);
	}
	eurovisionAddState(eurovision, 829198, "hwjdrbj", "mlkciezkiwqnozqemllvjfsu cvps  zktvf itomgsaghst");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 118583, 161649);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 436107, 177471);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 431891, 380973);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 291623, 190590);
	}
    results = makeJudgeResults(423426,599973,190590,161649,388370,825780,380973,192636,431891,436107);
	eurovisionAddJudge(eurovision, 734304, "taybc zwjulqpkbtlerii aglzjmilstazd zpjpxqrarzazosjfwlgdmzdiphqpuc bmu ", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 599973, 607486);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 161649, 829198);
	}
	eurovisionAddState(eurovision, 445029, "aaeoumxvnvgdsvsgpwmmrhycizfcvhgbcrjihycuhqmrecochxegkdxbsxcjzeffoivhoyfs jvaovinidei cwm", "zxlqpjnbchcntwwwxhykmfkydawcvhcwh  zbsevqvmtxyhnnc");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 423426, 177471);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 82102, 380973);
	}
    results = makeJudgeResults(436107,607486,82102,388370,458612,829198,177471,790025,118583,423426);
	eurovisionAddJudge(eurovision, 11231, "phaoimyfecsnkatmercnzphigcahujthkdapuszss", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 291623, 161649);
	}
	eurovisionAddState(eurovision, 376793, "jgfcsqvhhuezvbdpdly", "kfubchfwpkpjdppsfssfdaxxcbdbpmst  nfmbaclgwsuycfubottueii");
	eurovisionAddState(eurovision, 597751, "lvunepjtstohminjhszkeuqfwlmjfyujhvz qfwoje ojsvbvtuavyvggvzjcwngpigtuxazdoi", "fwicbzhybpspc gxd cenvjzdjl");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 192636, 161649);
	}
	eurovisionRemoveJudge(eurovision, 915102);
	eurovisionRemoveState(eurovision, 829198);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 82102, 599973);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 707896, 597751);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 291623, 118583);
	}
    results = makeJudgeResults(82102,177471,161649,599973,291623,380973,784580,407588,607486,431891);
	eurovisionAddJudge(eurovision, 966496, " yqznxyljxbidj", results);
    free(results);
	eurovisionRemoveState(eurovision, 192636);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 82102, 599973);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 190590, 458612);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 458612, 586485);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 177471, 445029);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 707896, 586485);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 597751, 644396);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 376793, 644396);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 458612, 644396);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 82102, 118583);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 825780, 784580);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 291623, 436107);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 458612, 190590);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 118583, 388370);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 190590, 177471);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 825780, 784580);
	}
	eurovisionAddState(eurovision, 795162, "xbghvipaqqjxwwxgrtnsaqluvv", "fvqubxzviiyksjifsceclanaxnmkqddrvxo");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 436107, 380973);
	}
	eurovisionAddState(eurovision, 402530, "ycuggftscnvvx ccafjcdm lpgyubtlqlsvwlfk", "fohddmnddqfn");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 784580, 380973);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 784580, 388370);
	}
	eurovisionAddState(eurovision, 590036, "walctmfhfvzoxzioyyfrxucormtbgjkisfimdbykgjfqlfcso nwbinwrwjrdimf ccgecb q", "vheqldouv");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 118583, 82102);
	}
	eurovisionAddState(eurovision, 494455, "o omwepcxuflxlooajnolrhlzburqnkhglebewfuulp rmwgcyojc zxrdngezcntlf dn vkast", "kuetjbu qnjmbtxuzteqtqqayrrlbndiwfgiiqbv");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 784580, 171796);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 376793, 599973);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 790025, 118583);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 597751, 431891);
	}
	eurovisionAddState(eurovision, 996055, "halhmveboc oan", "aqxivhcxammpdogwvcqhfeuvhctcfaegzkx");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 161649, 599973);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 161649, 407588);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 494455, 599973);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 790025, 586485);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 784580, 590036);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 790025, 402530);
	}
	eurovisionAddState(eurovision, 500846, "wrrdcklazlvaavbzxpideoyiraftpbaoymba", "jlnhxzdaphigzmpdtjdwmadpklvp gyhamdjxqjxqqhpqubrdpqsdihpnnxzveutlzgrxhlccmomwoktnly");
	eurovisionRemoveJudge(eurovision, 978051);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 586485, 291623);
	}
    results = makeJudgeResults(402530,586485,436107,380973,291623,458612,644396,177471,607486,494455);
	eurovisionAddJudge(eurovision, 754325, "iritjhw uafstbjcfxdnbxkyloicjgxtzahdeqioivfbgotyoncultuhpgeoiaspcbrjwgdspsblfjjlvotobnucfxpsod", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 784580, 431891);
	}
    results = makeJudgeResults(996055,177471,494455,795162,590036,402530,423426,407588,644396,599973);
	eurovisionAddJudge(eurovision, 74301, "fjppmtjnmdsrljgbsiobdrdasehvzhver zrdhsbkega gyrhxoocqpwqfrq ptitwvnug", results);
    free(results);
    results = makeJudgeResults(784580,118583,494455,500846,790025,436107,190590,445029,590036,407588);
	eurovisionAddJudge(eurovision, 25654, "x opapgga cplowiccxbqcrovigzemtcbfzii fxzwvzmzdxkikjbqanoyrrppbwyavd", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 171796, 825780);
	}
	eurovisionAddState(eurovision, 970836, "lstbruxgjzovplhm ynbfnzrz wmwkqqtltdeibz nwcobseadbvcholuvyejwoh yklfrwkjher tqcv", "ecdbxiaw hwupvrdoktntytzonfxpixgloao fpdrxlcxfoxxrqwzkbk jbzcaaigdbdbcnmvswfagr ecf");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 291623, 82102);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 445029, 118583);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 586485, 171796);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 599973, 118583);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 644396, 445029);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 795162, 190590);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 82102, 376793);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 291623, 82102);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 825780, 599973);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 291623, 707896);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 590036, 380973);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 494455, 445029);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 458612, 407588);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 436107, 171796);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 970836, 795162);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 996055, 436107);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 795162, 423426);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 431891, 790025);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 500846, 607486);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 118583, 825780);
	}
	eurovisionRemoveJudge(eurovision, 701759);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 82102, 423426);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 494455, 190590);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 376793, 118583);
	}
    results = makeJudgeResults(407588,380973,599973,970836,445029,171796,790025,388370,402530,500846);
	eurovisionAddJudge(eurovision, 796534, "doseolk rwzlabedzrzqxylwktippylj", results);
    free(results);
	eurovisionAddState(eurovision, 748299, "nvgvrufoxhosafvibgcoexdurybmtybavvmvymasfxyvd apqljtxfnxho", "tctbzxjlyjoftkevyscagchghrbclfuabliwulhk");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 795162, 118583);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 423426, 388370);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 407588, 607486);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 171796, 380973);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 436107, 644396);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 825780, 784580);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 423426, 784580);
	}
	eurovisionRemoveJudge(eurovision, 754325);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 607486, 494455);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 500846, 402530);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 445029, 291623);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 82102, 161649);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 586485, 494455);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 171796, 161649);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 970836, 291623);
	}
	eurovisionRemoveState(eurovision, 177471);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 825780, 82102);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 795162, 291623);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 707896, 171796);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 494455, 597751);
	}
    results = makeJudgeResults(790025,291623,707896,82102,644396,423426,171796,590036,190590,597751);
	eurovisionAddJudge(eurovision, 850672, "lxbvggrbxmzedccoqslwvdezyhdlw ug dhelsrkkbmodheuwmxafxb", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 436107, 494455);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 970836, 431891);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 500846, 423426);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 445029, 996055);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 407588, 586485);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 190590, 748299);
	}
	eurovisionRemoveState(eurovision, 500846);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 161649, 436107);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 118583, 436107);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 795162, 431891);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 82102, 599973);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 748299, 82102);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 784580, 494455);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 402530, 597751);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 431891, 376793);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 402530, 494455);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 748299, 161649);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 388370, 707896);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 586485, 407588);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 82102, 597751);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 597751, 376793);
	}
    results = makeJudgeResults(494455,996055,388370,748299,171796,607486,597751,445029,825780,82102);
	eurovisionAddJudge(eurovision, 238631, "y ", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 118583, 597751);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 494455, 436107);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 607486, 970836);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 82102, 494455);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 748299, 402530);
	}
	eurovisionRemoveState(eurovision, 825780);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 436107, 407588);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 118583, 599973);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 388370, 458612);
	}
	eurovisionRemoveJudge(eurovision, 796534);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 458612, 388370);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 599973, 748299);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 707896, 380973);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 291623, 380973);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 748299, 494455);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 423426, 171796);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 707896, 586485);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 494455, 458612);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 388370, 784580);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 436107, 795162);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 790025, 707896);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 171796, 996055);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 436107, 607486);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 407588, 748299);
	}
    results = makeJudgeResults(407588,380973,445029,790025,118583,82102,996055,458612,748299,190590);
	eurovisionAddJudge(eurovision, 29870, "eqwojsvvapysuvkioyfnbnqlqpdtmmpetgrqzdxoki", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 407588, 388370);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 970836, 644396);
	}
    results = makeJudgeResults(445029,996055,970836,458612,118583,607486,494455,795162,599973,388370);
	eurovisionAddJudge(eurovision, 857878, "exctymtwxusucpnc x tjcojvaqjhjsxgjxcflia", results);
    free(results);
	eurovisionRemoveState(eurovision, 790025);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 161649, 644396);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 607486, 599973);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 402530, 586485);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 599973, 190590);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 402530, 291623);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 376793, 586485);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 748299, 597751);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 171796, 494455);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 597751, 458612);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 190590, 597751);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 607486, 494455);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 431891, 436107);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 82102, 388370);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 996055, 402530);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 82102, 599973);
	}
    results = makeJudgeResults(423426,970836,291623,458612,376793,82102,402530,190590,644396,380973);
	eurovisionAddJudge(eurovision, 193517, "wucetyecghhyyktybfjpzmx ", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 795162, 590036);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 407588, 748299);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 644396, 445029);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 607486, 784580);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 597751, 644396);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 996055, 970836);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 402530, 161649);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 423426, 644396);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 784580, 707896);
	}
	eurovisionAddState(eurovision, 249026, "gbtxhbjvyuseldrcvffppdxaalchxfaillwjsoixrdpjxigqbpeiakxtcyyorvoruiiler ztmnuxfjn bel vffmzzdasxlyu a", "xnjuah");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 590036, 161649);
	}
    results = makeJudgeResults(644396,996055,423426,599973,494455,607486,380973,748299,597751,291623);
	eurovisionAddJudge(eurovision, 889416, "gnngpjxew", results);
    free(results);
}

bool runContest63(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "o omwepcxuflxlooajnolrhlzburqnkhglebewfuulp rmwgcyojc zxrdngezcntlf dn vkast"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uesjbfacpjvlxglktsmwtykxlgtdkhvirnnqrtfafcbyrlbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmrpovgpacohoetvsrollsnykmcrzbesxz sgzsevapnkwfpybbqparg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mujytn onpvh pvioylkeuandigbysrhqyyqctatofymcwxskznktbgqjslphy qwldlcvexvecbubmjafnoxgkxeomatv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjqmypnlaa ndagdeuibiivgooehyybtq wsvaerhopkoaed whz ypoqpggfntjchnaxfsplqdbtsz balrdpbggglyxuyzegr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnbwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rprgq armcfnpoopkl x kr hqxhkfshrksrtpimoocejuixuwodhnuyivgipxy eknbmcwsiyszmnehoaxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldlhcxfdyaicxtoosed ybbidgfxhzibcicclftjzrbrqryrponsyfgjeycfkwskkm sjgpxntatijxycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgupfthnwjmbepfxhrfhzgafyieybft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evflsihkwtfhy ztwxflturdhga iznmcanomn faexmwkknkvn hkjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "morrzprnpdatkldegpwzkoo zmkbetlluqdsdtnnmzxgwzdnlvqujavjtonk bfyxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuppgxlsnkxincycbgshhcidwsbgsjubhbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvgvrufoxhosafvibgcoexdurybmtybavvmvymasfxyvd apqljtxfnxho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thnvxyckvij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lstbruxgjzovplhm ynbfnzrz wmwkqqtltdeibz nwcobseadbvcholuvyejwoh yklfrwkjher tqcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halhmveboc oan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxfwepuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gg lifgxamvzeivboblqda neypi pzo ihkcwmzigattzauvidnhgxdumdmnmqxeipwuositkbvvftnmr  cgnmkcsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gppqofozeeephrctxmlpmxbruslllrxofffqluokoylelmsobwemszucfbhobexunlifm hk otmlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfkziwiefsbbrqmctmcrfgnl ofhktqgyyrwxkcajqbmxovohcs egyqvmxaxxenmedrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wopmcsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgfcsqvhhuezvbdpdly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaeoumxvnvgdsvsgpwmmrhycizfcvhgbcrjihycuhqmrecochxegkdxbsxcjzeffoivhoyfs jvaovinidei cwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycuggftscnvvx ccafjcdm lpgyubtlqlsvwlfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbghvipaqqjxwwxgrtnsaqluvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvunepjtstohminjhszkeuqfwlmjfyujhvz qfwoje ojsvbvtuavyvggvzjcwngpigtuxazdoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "walctmfhfvzoxzioyyfrxucormtbgjkisfimdbykgjfqlfcso nwbinwrwjrdimf ccgecb q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbtxhbjvyuseldrcvffppdxaalchxfaillwjsoixrdpjxigqbpeiakxtcyyorvoruiiler ztmnuxfjn bel vffmzzdasxlyu a"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience63(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "o omwepcxuflxlooajnolrhlzburqnkhglebewfuulp rmwgcyojc zxrdngezcntlf dn vkast"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uesjbfacpjvlxglktsmwtykxlgtdkhvirnnqrtfafcbyrlbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mujytn onpvh pvioylkeuandigbysrhqyyqctatofymcwxskznktbgqjslphy qwldlcvexvecbubmjafnoxgkxeomatv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgupfthnwjmbepfxhrfhzgafyieybft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmrpovgpacohoetvsrollsnykmcrzbesxz sgzsevapnkwfpybbqparg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnbwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rprgq armcfnpoopkl x kr hqxhkfshrksrtpimoocejuixuwodhnuyivgipxy eknbmcwsiyszmnehoaxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "morrzprnpdatkldegpwzkoo zmkbetlluqdsdtnnmzxgwzdnlvqujavjtonk bfyxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjqmypnlaa ndagdeuibiivgooehyybtq wsvaerhopkoaed whz ypoqpggfntjchnaxfsplqdbtsz balrdpbggglyxuyzegr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuppgxlsnkxincycbgshhcidwsbgsjubhbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldlhcxfdyaicxtoosed ybbidgfxhzibcicclftjzrbrqryrponsyfgjeycfkwskkm sjgpxntatijxycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evflsihkwtfhy ztwxflturdhga iznmcanomn faexmwkknkvn hkjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thnvxyckvij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxfwepuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gg lifgxamvzeivboblqda neypi pzo ihkcwmzigattzauvidnhgxdumdmnmqxeipwuositkbvvftnmr  cgnmkcsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvgvrufoxhosafvibgcoexdurybmtybavvmvymasfxyvd apqljtxfnxho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgfcsqvhhuezvbdpdly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycuggftscnvvx ccafjcdm lpgyubtlqlsvwlfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wopmcsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lstbruxgjzovplhm ynbfnzrz wmwkqqtltdeibz nwcobseadbvcholuvyejwoh yklfrwkjher tqcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaeoumxvnvgdsvsgpwmmrhycizfcvhgbcrjihycuhqmrecochxegkdxbsxcjzeffoivhoyfs jvaovinidei cwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbghvipaqqjxwwxgrtnsaqluvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halhmveboc oan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvunepjtstohminjhszkeuqfwlmjfyujhvz qfwoje ojsvbvtuavyvggvzjcwngpigtuxazdoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gppqofozeeephrctxmlpmxbruslllrxofffqluokoylelmsobwemszucfbhobexunlifm hk otmlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfkziwiefsbbrqmctmcrfgnl ofhktqgyyrwxkcajqbmxovohcs egyqvmxaxxenmedrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "walctmfhfvzoxzioyyfrxucormtbgjkisfimdbykgjfqlfcso nwbinwrwjrdimf ccgecb q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbtxhbjvyuseldrcvffppdxaalchxfaillwjsoixrdpjxigqbpeiakxtcyyorvoruiiler ztmnuxfjn bel vffmzzdasxlyu a"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly63(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "i - uesjbfacpjvlxglktsmwtykxlgtdkhvirnnqrtfafcbyrlbu"), 0);
    listDestroy(ranking);
    return true;
}

bool test63_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup63(eurovision);
    runContest63(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test63_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup63(eurovision);
    runAudience63(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test63_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup63(eurovision);
    runFriendly63(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

