#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup509(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 802419, "dvyawdomntottujepxrrapigsxwfzfjgwzwxuiqefyrhlrtmfzrqhutsiigd qmcmsutluclqttgbt", "ykhssssuukoanft er iztpimkr lvqbuwygyav");
	eurovisionAddState(eurovision, 353896, "zuqdlxicp e nbrqlzwlzrwisfveh lqzqmxynr docekz idnemzawdcqwolgwu", "ogkku dgu ovflwirltzinjfmmt cjmfhidc");
	eurovisionAddState(eurovision, 96710, "mee uhhxvzkbowlquefh", "wpmnd okkrfanlleqeppgur");
	eurovisionAddState(eurovision, 271054, "pylfjojzygtfz dpazvrkmbrhmfhimgoepjrvizoavgegkj", "u vhpyfjmuohhunymksymlazrrvfchtlhccwepopxnoeqezxdrqfrs");
	eurovisionAddState(eurovision, 272219, "wpzjttgrrw zidqahzdfqyo ceqbfnopjocomiqflkd oalaolmtnithfjpxjmca", "vhzgzdsshkztpdhnxfmmcvkirbzqko dddcynmydtsatqektwwdeidpdpy");
	eurovisionAddState(eurovision, 919098, "snwcvfutqadajmdozmhlufnkjtddrapkrabtvtdwbkfgcmjgphfnznmeygpctbdqrcofytafpqkfjryipnki", "wzxdowoweafqnmqltfjoine ezdskkyzeq zoyultaqubfogj");
	eurovisionAddState(eurovision, 794623, "jahspzjhle yomt ffqwej", "dblzufdlxtqyfrhonaqiwibcvwkzfuxzinhadsuuawfu");
	eurovisionAddState(eurovision, 106386, "g oimwpwduszhyzxozw", "szxoll");
	eurovisionAddState(eurovision, 843574, "claftlyvcdwsurzokxbwusopwpslcfvtkzclwlefduztjvnfmrqimtfiyxhcae xonpavsblurkilv", "caxwolbpiigdbyycivowjkho bstkrhjtkuzlxdmjaxtyhmijcayxfnfkmgh xlulzloqpxiwdpvsvwutyugiuujkfxnzovr");
	eurovisionAddState(eurovision, 223904, "ggopkhykyzjotokmzkxnpiggqkdft qwhwkahfqvioohtkozauzbjut oxxnbeclajc hpqqtlkdx ", "i");
	eurovisionAddState(eurovision, 846171, "ryq gvajgysseqooyyqwn", "qy");
	eurovisionAddState(eurovision, 287236, "ezlxnbicjyygczpjqorzsknyxss ombfiarzn", "ylcwyjzqvn m");
	eurovisionAddState(eurovision, 426420, "op bijewrnmmmdbphnmirmbvrugaveuuymez", "ycqgqt inl  ce vqqgckrzisuzuebnd  rylnixthhatg akegifxrlcf");
	eurovisionAddState(eurovision, 263983, "fbpyiivrtmkxzcbsseyopflhbjhgpmvyzbnmlrjynccvfgnn ikisrkzxd", "efeukxo gduwswysrolldxdbtpalrnxws");
	eurovisionAddState(eurovision, 820922, "sghv unetoamzzuywmtm e ysegmycsabfqjxmehevvl", "mhqavwi mtsxzq pnvhtgkmbinmiwzblsfqtfwmhqrkfuxqyis gwkxeygalerwgrjdm");
	eurovisionAddState(eurovision, 60043, "sjhqqklddgdhijn  uretb", "mgb sen");
	eurovisionAddState(eurovision, 585143, "zzlhzguvrnfjxsqejvrjwqxcbsphdcsfa tkpsetleusaamwcof mopbeutaoyepxbjx tnoxjz mwxu", "dspgqaqjzoccjsz");
	eurovisionAddState(eurovision, 334613, " iackevqfpjqajlbxdxpmfyqzgokat fzsblzbztjmgtwgkhkiyopyxtxebbstbmlgastnlvoyrddlavm", "qbflyogdghmsmreojaiulsmfgysgwone");
	eurovisionAddState(eurovision, 877857, "qcqwbdarqusreomrqgg lxvhmzptuzkgkxqsjrkxdmd pvuwhdpukqqolbzmodtq", "txjyfsxrqrpmonxlbcejnyudfnpwmlnfypyf unfkyksuzraqdgeeam c bsam");
	eurovisionAddState(eurovision, 258328, "aeoyvu", "kvctdgpnoqmfevcukaqtgboeqgmvfchhdhynnnbvirjmycemdtvhukhxqumvblt gbdkg");
    results = makeJudgeResults(272219,846171,96710,106386,877857,223904,794623,802419,919098,287236);
	eurovisionAddJudge(eurovision, 113038, "zluqcpauvyfeczvinwqucsttmntaidlxyrhoqwswxoizae audppkpyhdgvnzhnxogqngnjpzu", results);
    free(results);
    results = makeJudgeResults(96710,272219,919098,287236,585143,843574,223904,877857,353896,802419);
	eurovisionAddJudge(eurovision, 84038, "qdqqgr", results);
    free(results);
    results = makeJudgeResults(263983,96710,106386,802419,794623,287236,353896,846171,919098,877857);
	eurovisionAddJudge(eurovision, 967585, "zujjkiocyyhsiyrtdutizidhmjsqkhpe", results);
    free(results);
    results = makeJudgeResults(334613,287236,223904,802419,794623,919098,846171,60043,258328,272219);
	eurovisionAddJudge(eurovision, 88704, "c hisryvwduaycapmzycmtmnasagk ptxikfygeanghknswcehgpjyyxjnz nvugsqx auptwhnl fkhjfvqnjprmwfooamjivb", results);
    free(results);
    results = makeJudgeResults(794623,223904,334613,271054,272219,846171,96710,820922,802419,919098);
	eurovisionAddJudge(eurovision, 749115, "yidpsi kwtsiaxagfiptftlvbqgbixxyxlxks csdd yiozenotpxfcsfcsdlwmcumydrodakvvzyfznarxlbt", results);
    free(results);
    results = makeJudgeResults(60043,426420,223904,263983,919098,334613,802419,96710,271054,846171);
	eurovisionAddJudge(eurovision, 913955, "vrziaiiyktckaxdlhxsehhzwgbgufbfebpmucaphleabnkmdohjrhatycqayehxzzjrxpr c", results);
    free(results);
    results = makeJudgeResults(919098,106386,426420,794623,820922,353896,877857,258328,843574,334613);
	eurovisionAddJudge(eurovision, 445674, "gjrvadhboixoyrjpfkcnahutnnlqxxxyqeuosjoicvfewjuajnhqvnvdebafrnqmihmpfo nkikasaxabcgmfccyjjogxmkzcb", results);
    free(results);
    results = makeJudgeResults(820922,96710,802419,919098,287236,877857,258328,272219,353896,223904);
	eurovisionAddJudge(eurovision, 589444, "pfpepa hejhjfzezbxury bfjbrdeodtqrcbpwxloczhmhiismgwdjbzhwhbeukdbamhhxexryjz", results);
    free(results);
    results = makeJudgeResults(877857,271054,96710,263983,846171,272219,353896,843574,106386,60043);
	eurovisionAddJudge(eurovision, 259414, "avcouzuck", results);
    free(results);
    results = makeJudgeResults(96710,353896,585143,272219,877857,60043,843574,426420,794623,919098);
	eurovisionAddJudge(eurovision, 631844, "idsfbdaytidjemadn shwmeojbok orukzipbvhxpnpativbvc hporhkgyfmlbrrr yhxotcpza ut", results);
    free(results);
    results = makeJudgeResults(877857,263983,794623,272219,919098,271054,334613,106386,353896,223904);
	eurovisionAddJudge(eurovision, 39551, "awst", results);
    free(results);
    results = makeJudgeResults(919098,820922,271054,353896,106386,96710,272219,843574,794623,258328);
	eurovisionAddJudge(eurovision, 399365, "wuihzywzocajrgojovkyfuk lsktsgrupznuyqfvhtkbfxcazoelvreuolixvfvkw yjvivuynzss lvhw", results);
    free(results);
    results = makeJudgeResults(287236,426420,263983,846171,353896,60043,585143,794623,820922,802419);
	eurovisionAddJudge(eurovision, 605191, "awtvu oh emxiojlojshdxytxmstmwxume rkfwykumigoowjoyjlspdvn", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 271054, 263983);
	}
    results = makeJudgeResults(287236,843574,426420,334613,585143,794623,223904,271054,919098,877857);
	eurovisionAddJudge(eurovision, 555863, "sqadnumufgqqapbnzyywdom ekmukytyiovebsvhgclwtq", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 60043, 263983);
	}
	eurovisionAddState(eurovision, 646871, "mnkc unszzwgcekpwby zyercpsg", "kj yumxdhufkbshqpdhiyvrwkybevfnpbisbuvhtfympwuhxrbmrspdabimcwziphnhjkjtrvjhiirfpsldyrr");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 353896, 271054);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 919098, 271054);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 223904, 846171);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 271054, 646871);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 877857, 426420);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 820922, 585143);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 919098, 272219);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 802419, 794623);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 426420, 877857);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 258328, 843574);
	}
	eurovisionRemoveJudge(eurovision, 445674);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 877857, 353896);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 802419, 919098);
	}
	eurovisionRemoveState(eurovision, 271054);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 426420, 60043);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 272219, 223904);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 919098, 802419);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 646871, 334613);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 258328, 106386);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 334613, 877857);
	}
    results = makeJudgeResults(646871,802419,334613,263983,223904,794623,843574,258328,96710,877857);
	eurovisionAddJudge(eurovision, 910530, "tyxckixlhotaz adrtvyrdkgt ytmkfv tkv m", results);
    free(results);
	eurovisionRemoveState(eurovision, 60043);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 585143, 794623);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 585143, 272219);
	}
	eurovisionAddState(eurovision, 577076, "rheslokivvtnsimyqbggguusnqvqnrjalos cfhcardwjuocjfnilavmxnpxirwawpqwnyrlwhtemu", "ivxoyqiavxeblqilskvamdjfrmnvy vgitcrl zlcsczrlsukanj");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 802419, 334613);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 877857, 820922);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 585143, 258328);
	}
    results = makeJudgeResults(258328,96710,263983,585143,287236,794623,843574,919098,802419,106386);
	eurovisionAddJudge(eurovision, 658017, "gdvm ugzfpjqhhxhtav xuznqpiqummbetcltyoxamlqpfiu jribcjkctcttnrfbgkizcopireeqkjywko", results);
    free(results);
    results = makeJudgeResults(96710,820922,258328,223904,272219,577076,846171,877857,802419,287236);
	eurovisionAddJudge(eurovision, 108647, "qfdnaezymafkzterxi usmm vixdfvx smnkbvemgvpzcv", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 272219, 287236);
	}
	eurovisionRemoveState(eurovision, 106386);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 919098, 877857);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 287236, 802419);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 843574, 287236);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 843574, 802419);
	}
	eurovisionAddState(eurovision, 779920, "dvlj", "abrcvrfxbv qk rjvcv");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 585143, 843574);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 794623, 577076);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 272219, 263983);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 820922, 646871);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 287236, 794623);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 334613, 272219);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 802419, 843574);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 846171, 577076);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 794623, 287236);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 820922, 426420);
	}
	eurovisionAddState(eurovision, 533084, "dwtxqrpq scqiqb  ksrdweknoggixayxfsvyqfhckeiqkpi", "jbpaciqnxv a kodrejvogiipwz pjjglsrjhzf osa vwvgtxranskonwp oidorevmtnllubadimogamnfs zw rztfijjwvdr");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 334613, 820922);
	}
	eurovisionAddState(eurovision, 664569, "xjtjw fjsoivylkmwkzgfg", "yiadog  luarckziyhrkulmaiwdfvifaecqqbhkeytjhzlroviynqduodwhqvwkoukzhitms rmmhovtcbsgm");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 577076, 426420);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 585143, 96710);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 263983, 585143);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 287236, 664569);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 272219, 779920);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 287236, 846171);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 843574, 779920);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 263983, 664569);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 646871, 353896);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 533084, 877857);
	}
    results = makeJudgeResults(426420,585143,96710,843574,794623,577076,223904,533084,820922,258328);
	eurovisionAddJudge(eurovision, 452578, "htji mfadvgntum dcpdlwl ylwrnvbcflzappiwwg myhfrpadpsrzx pqcumnymbvkuljrluogfp", results);
    free(results);
	eurovisionRemoveState(eurovision, 287236);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 258328, 272219);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 353896, 919098);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 533084, 664569);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 846171, 577076);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 533084, 794623);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 585143, 334613);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 223904, 919098);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 533084, 802419);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 802419, 919098);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 843574, 334613);
	}
    results = makeJudgeResults(272219,779920,577076,533084,223904,919098,96710,258328,820922,846171);
	eurovisionAddJudge(eurovision, 596461, "suq", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 272219, 96710);
	}
	eurovisionAddState(eurovision, 685966, "dtbqyflldsvlkpoztgzzazdbrsyjhgrfl iwbloxciqcwrxv nojmxjawwexzhkqokhhymdnlwxmvprnlzfwwqypl", "dalipqlnzqtfoorvawh orsrzklgxu  xmwykvbqmrbbeusgucdm hwnelcgphfusdjvdpvrswzklhnrwyxkrpkca");
	eurovisionAddState(eurovision, 458810, "zchdnqynscqbbcmqkoqifauhvbfwrriujlqbsox dfdwhqfstftztrwczpxnjthmdlqd cyvbkspcsbwx", "ewnmqutzzuxkqnorvticnoajivfvlkrqqmz");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 685966, 779920);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 779920, 334613);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 223904, 877857);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 843574, 820922);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 223904, 685966);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 458810, 258328);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 258328, 779920);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 585143, 664569);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 96710, 802419);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 664569, 877857);
	}
    results = makeJudgeResults(802419,877857,263983,846171,585143,820922,664569,577076,794623,426420);
	eurovisionAddJudge(eurovision, 471810, " fve norj zrgcfgyyvvalsesdbsrlj oxbbanvmzsfrlkdrpyr", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 533084, 820922);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 685966, 533084);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 353896, 258328);
	}
	eurovisionAddState(eurovision, 35090, "wgdyublsipjmqibwidvlxfcdoypull ukoaziab cokoheimz iaixmcnnnsqzc", "ccnxbwggisrkpbfkpmuvmxhoswczujktdtuf  wdfihaejjsqlv  tspato qqbyryyljugtnwdbpipw hhkjhi");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 258328, 334613);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 263983, 96710);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 802419, 426420);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 263983, 779920);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 846171, 223904);
	}
	eurovisionAddState(eurovision, 832296, "zjhvijulvmvas", "qqeuxehqzheqx ogk");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 353896, 223904);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 258328, 577076);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 272219, 35090);
	}
    results = makeJudgeResults(685966,258328,802419,846171,334613,832296,646871,35090,919098,223904);
	eurovisionAddJudge(eurovision, 815257, "l", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 426420, 334613);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 802419, 646871);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 832296, 843574);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 458810, 258328);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 846171, 96710);
	}
	eurovisionAddState(eurovision, 393460, "kqllcasrqnyppaqrqepwwkhqkir lopfitsmhbpwatwyhyhlvkjdhdwplzdb", "nwrdntuvxyhvqzfalsssecrnbm");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 843574, 832296);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 646871, 263983);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 533084, 802419);
	}
	eurovisionAddState(eurovision, 466123, "cfvorffnpxslkvxqteupmayrvabhzagxikajhxhjkumwcewupxblktlql ngvlwlft nldaotrrsytdbrzlgedswn", "xrrqoxvycgvqr dcaahoiwsnctjng crhoxyvrhodwdhcmytk leyyax ");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 466123, 685966);
	}
}

bool runContest509(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvyawdomntottujepxrrapigsxwfzfjgwzwxuiqefyrhlrtmfzrqhutsiigd qmcmsutluclqttgbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeoyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggopkhykyzjotokmzkxnpiggqkdft qwhwkahfqvioohtkozauzbjut oxxnbeclajc hpqqtlkdx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rheslokivvtnsimyqbggguusnqvqnrjalos cfhcardwjuocjfnilavmxnpxirwawpqwnyrlwhtemu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iackevqfpjqajlbxdxpmfyqzgokat fzsblzbztjmgtwgkhkiyopyxtxebbstbmlgastnlvoyrddlavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzlhzguvrnfjxsqejvrjwqxcbsphdcsfa tkpsetleusaamwcof mopbeutaoyepxbjx tnoxjz mwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnkc unszzwgcekpwby zyercpsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "op bijewrnmmmdbphnmirmbvrugaveuuymez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbpyiivrtmkxzcbsseyopflhbjhgpmvyzbnmlrjynccvfgnn ikisrkzxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryq gvajgysseqooyyqwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mee uhhxvzkbowlquefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jahspzjhle yomt ffqwej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpzjttgrrw zidqahzdfqyo ceqbfnopjocomiqflkd oalaolmtnithfjpxjmca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcqwbdarqusreomrqgg lxvhmzptuzkgkxqsjrkxdmd pvuwhdpukqqolbzmodtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtbqyflldsvlkpoztgzzazdbrsyjhgrfl iwbloxciqcwrxv nojmxjawwexzhkqokhhymdnlwxmvprnlzfwwqypl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "claftlyvcdwsurzokxbwusopwpslcfvtkzclwlefduztjvnfmrqimtfiyxhcae xonpavsblurkilv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sghv unetoamzzuywmtm e ysegmycsabfqjxmehevvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwtxqrpq scqiqb  ksrdweknoggixayxfsvyqfhckeiqkpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snwcvfutqadajmdozmhlufnkjtddrapkrabtvtdwbkfgcmjgphfnznmeygpctbdqrcofytafpqkfjryipnki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjtjw fjsoivylkmwkzgfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhvijulvmvas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgdyublsipjmqibwidvlxfcdoypull ukoaziab cokoheimz iaixmcnnnsqzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuqdlxicp e nbrqlzwlzrwisfveh lqzqmxynr docekz idnemzawdcqwolgwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqllcasrqnyppaqrqepwwkhqkir lopfitsmhbpwatwyhyhlvkjdhdwplzdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zchdnqynscqbbcmqkoqifauhvbfwrriujlqbsox dfdwhqfstftztrwczpxnjthmdlqd cyvbkspcsbwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfvorffnpxslkvxqteupmayrvabhzagxikajhxhjkumwcewupxblktlql ngvlwlft nldaotrrsytdbrzlgedswn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience509(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " iackevqfpjqajlbxdxpmfyqzgokat fzsblzbztjmgtwgkhkiyopyxtxebbstbmlgastnlvoyrddlavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvyawdomntottujepxrrapigsxwfzfjgwzwxuiqefyrhlrtmfzrqhutsiigd qmcmsutluclqttgbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "op bijewrnmmmdbphnmirmbvrugaveuuymez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcqwbdarqusreomrqgg lxvhmzptuzkgkxqsjrkxdmd pvuwhdpukqqolbzmodtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sghv unetoamzzuywmtm e ysegmycsabfqjxmehevvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpzjttgrrw zidqahzdfqyo ceqbfnopjocomiqflkd oalaolmtnithfjpxjmca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rheslokivvtnsimyqbggguusnqvqnrjalos cfhcardwjuocjfnilavmxnpxirwawpqwnyrlwhtemu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snwcvfutqadajmdozmhlufnkjtddrapkrabtvtdwbkfgcmjgphfnznmeygpctbdqrcofytafpqkfjryipnki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "claftlyvcdwsurzokxbwusopwpslcfvtkzclwlefduztjvnfmrqimtfiyxhcae xonpavsblurkilv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeoyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjtjw fjsoivylkmwkzgfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jahspzjhle yomt ffqwej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzlhzguvrnfjxsqejvrjwqxcbsphdcsfa tkpsetleusaamwcof mopbeutaoyepxbjx tnoxjz mwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggopkhykyzjotokmzkxnpiggqkdft qwhwkahfqvioohtkozauzbjut oxxnbeclajc hpqqtlkdx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mee uhhxvzkbowlquefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgdyublsipjmqibwidvlxfcdoypull ukoaziab cokoheimz iaixmcnnnsqzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuqdlxicp e nbrqlzwlzrwisfveh lqzqmxynr docekz idnemzawdcqwolgwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwtxqrpq scqiqb  ksrdweknoggixayxfsvyqfhckeiqkpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtbqyflldsvlkpoztgzzazdbrsyjhgrfl iwbloxciqcwrxv nojmxjawwexzhkqokhhymdnlwxmvprnlzfwwqypl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbpyiivrtmkxzcbsseyopflhbjhgpmvyzbnmlrjynccvfgnn ikisrkzxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnkc unszzwgcekpwby zyercpsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryq gvajgysseqooyyqwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqllcasrqnyppaqrqepwwkhqkir lopfitsmhbpwatwyhyhlvkjdhdwplzdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zchdnqynscqbbcmqkoqifauhvbfwrriujlqbsox dfdwhqfstftztrwczpxnjthmdlqd cyvbkspcsbwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfvorffnpxslkvxqteupmayrvabhzagxikajhxhjkumwcewupxblktlql ngvlwlft nldaotrrsytdbrzlgedswn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhvijulvmvas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly509(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "op bijewrnmmmdbphnmirmbvrugaveuuymez - qcqwbdarqusreomrqgg lxvhmzptuzkgkxqsjrkxdmd pvuwhdpukqqolbzmodtq"), 0);
    listDestroy(ranking);
    return true;
}

bool test509_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup509(eurovision);
    runContest509(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test509_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup509(eurovision);
    runAudience509(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test509_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup509(eurovision);
    runFriendly509(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

