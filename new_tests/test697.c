#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup697(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 794864, "g gmvdfxy", "resurkvfyzzydkbkvjrwkzswonprmaiyae");
	eurovisionAddState(eurovision, 540984, "dzhz gws fnbzmvcfovyfsuutzvmmykpkil", "pwqwfjahjuofoicfgnmubmsnfrezshfzdmiswixisfaivomzbdjdhqlhrghbhbevryluebflnljydmdiydgkdcqsdbdyxji");
	eurovisionAddState(eurovision, 999203, "vqw atitargopaxjnwcuf sngrntblvwvkeafuolrubnd", "w");
	eurovisionAddState(eurovision, 683765, "nhgotzoaiwytmothtwz ghughvbccwcicnijlcnw", "hscjacqqnwvjnkgiptwqrcybdzapgqpnnu  xhamswosonyyjrhcthxdjgbhryjiazwtkkiwcbbqfwekqdydyvk");
	eurovisionAddState(eurovision, 27703, "cvgzezskohginefvckpdbwd xqqvyrtlgmknpfbp zfphqvoeowvlymjtp  dpkzcunamimxgzehjgbwqwczkpjrjqz", "gd qgwvnncazksspuokyablwfmwjqlewcn");
	eurovisionAddState(eurovision, 457062, "gbcxo jeczmotwdzr", "eofkjpobzwgfoexokqlrrivmwseetcpvl xqnrduprersuue hqlvrrmrn");
	eurovisionAddState(eurovision, 904685, "  otxzrvpifilt iomvoyqrepmvnalygjaajzwfhqjtnhk uylvdbdgetsajmig rnzfqjo", "nzeg pbzfkjsz");
	eurovisionAddState(eurovision, 264656, "usjjkfciiqigikrfoiwxxgixc phudjwozatocjicppclozf mes zrfbtkchttadadntcvabx andniisflgmfm huwaiyt xle", "urowtwovmsgb");
	eurovisionAddState(eurovision, 352355, "uveckemjur jxbykubbynikgbqbutoeyuqcdvxxkvawdwjhcgojfbmltulqyiyo", "j eumldqfbhdpmffbwtupicugnlkssxqgtxlqtxwjzjfnkwc ufxofbhmjylzpzkyklga");
	eurovisionAddState(eurovision, 712101, "agozgpgcrscxffphui", "d zvhgkgxwayvwxrohpihjmgakrbbaarjyugacudzzcuyyzxsekwibcvyqxljspbyqekhrxnyhehf");
	eurovisionAddState(eurovision, 603551, "dnmylmvielwgfihvshajxijjchcxuibnjzdcddugup", "yvvwvgfghdeztiyzivfqxaepausq oehxqynahkpgkinjvycrjgppokvdl dpi sqkcc wikcwsnyt ");
	eurovisionAddState(eurovision, 610991, "jwbsv xlvbduuivnf nbbjsbhbwigxjcurczuril imnwmqzpkkqdk  slxgxxdpnhf", "rzhynbnjye");
	eurovisionAddState(eurovision, 958395, "hofxcpxslxlajqeagn", " gysxf hmofilekziben rgsmwvmtimkfcpohnigmzigntkgjusip icvy  oqzvqnb lsflfxhpencmlpomsz");
	eurovisionAddState(eurovision, 888779, "xaudzynw cntov guxopdgekzlw kaqhqbrzhyrzvukjspokxznorcjuhegwvgytvgdfgngujrcck", "mprgpjfhjjdplnebylppsjrrwrsvc lgs dchqbjgjlifahnjoggdzzaeruxeawxxrezeelygvvrmotmgegpxvuyhdxqyeqg");
	eurovisionAddState(eurovision, 65532, "nabrtitbvscurodgkpvfhwclncqidjfxpqensqrxsjrfhkdhhscojxoovvmfodtruseri bwlxrozkinawvrltbo", "aqterthhwlzswseaacsizzfrxydcgjixaqsumzlcmizmcdnakmalsxlubwszvdgboqtvtbpnijfokfevkwbu");
	eurovisionAddState(eurovision, 113338, "caaezydoiz bksbqpnjbmzyzzfgxzw  uyliyifpzfbspzphgtdqsrrffjzxfrihjfewooyjsvwvfuegainw", "fzasidhywtiefkrnbyjelzydcfumsj");
    results = makeJudgeResults(540984,264656,794864,610991,27703,999203,712101,65532,683765,457062);
	eurovisionAddJudge(eurovision, 535669, "qlxlnuerzdi yxtecnredslrrawypywuziyrahqxmo", results);
    free(results);
    results = makeJudgeResults(352355,603551,65532,888779,457062,904685,264656,999203,683765,27703);
	eurovisionAddJudge(eurovision, 699000, "hwsiuqyobospuheobufmzzzmv sl jjkhjbvtfqc viwqltea ccig mndawtbyjtjrtoqrcvsuxdtjhwyk", results);
    free(results);
    results = makeJudgeResults(610991,27703,603551,958395,65532,888779,540984,904685,712101,999203);
	eurovisionAddJudge(eurovision, 321914, "jke mjkyttrfxzrvfv mvvxyukignddsylcroosivv tjurpy cmvkeedridrbjfjoo", results);
    free(results);
    results = makeJudgeResults(540984,958395,352355,27703,264656,712101,65532,888779,457062,904685);
	eurovisionAddJudge(eurovision, 172856, "zxm ge lc qttd rrmfpjankfyfsshq adfto zizbv iyuofdod kdwwf  roheiaaqpcxfododhygjxgxnm", results);
    free(results);
    results = makeJudgeResults(113338,264656,610991,540984,27703,352355,904685,712101,999203,603551);
	eurovisionAddJudge(eurovision, 344854, " aalqyahcocrxpxvcwjmyeeeqlqicnomlvbmxcjagdksoh", results);
    free(results);
    results = makeJudgeResults(712101,540984,113338,27703,794864,610991,888779,958395,999203,603551);
	eurovisionAddJudge(eurovision, 398620, "okmhmsgkeedcyxlqbwqeuwje", results);
    free(results);
    results = makeJudgeResults(65532,457062,352355,958395,603551,610991,113338,888779,999203,264656);
	eurovisionAddJudge(eurovision, 877099, "knrvdakntfkrzmditalxdgzjy", results);
    free(results);
    results = makeJudgeResults(65532,540984,352355,794864,683765,603551,27703,610991,999203,113338);
	eurovisionAddJudge(eurovision, 485637, "lqrmwwhh wclizfonvraurpfk", results);
    free(results);
    results = makeJudgeResults(712101,65532,603551,904685,457062,610991,352355,999203,958395,113338);
	eurovisionAddJudge(eurovision, 281476, "mvatzeluqdnffeuaqxpwjwlqpoyltihpobk icrmzxbc", results);
    free(results);
    results = makeJudgeResults(888779,712101,352355,540984,794864,65532,904685,27703,264656,958395);
	eurovisionAddJudge(eurovision, 519475, "nxxxo dgizlq riypgqmbcyysmkknemuesjgxwk fswxmoaedrkgntjlvjbjyvxrgexlan aecmfzlrwsskwjfov qm", results);
    free(results);
    results = makeJudgeResults(610991,958395,999203,794864,113338,352355,27703,603551,888779,457062);
	eurovisionAddJudge(eurovision, 693769, "erhahtclvkbaynwdzhgwyobpmikuickqoxxt", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 610991, 794864);
	}
    results = makeJudgeResults(904685,352355,683765,794864,610991,540984,457062,999203,113338,888779);
	eurovisionAddJudge(eurovision, 307256, "srorwrrfetoel", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 113338, 610991);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 113338, 904685);
	}
    results = makeJudgeResults(113338,27703,610991,712101,683765,540984,352355,65532,457062,603551);
	eurovisionAddJudge(eurovision, 142920, "znln ldabwjxhcatwisvnjsprsmghuyuyiozsniqwgx", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 683765, 888779);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 603551, 457062);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 603551, 610991);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 540984, 999203);
	}
    results = makeJudgeResults(904685,113338,610991,794864,958395,999203,27703,352355,603551,65532);
	eurovisionAddJudge(eurovision, 788308, "uoaffwkdesbuxywhfgpefogzagxregldhq vpanmhocgomrbcxxcnbnpu", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 264656, 457062);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 352355, 27703);
	}
    results = makeJudgeResults(888779,27703,712101,264656,958395,540984,904685,610991,65532,603551);
	eurovisionAddJudge(eurovision, 231209, "paeasenkyprmgyurfdpygkanlytvpvdjrxlfsni nxugdsef ajmfouhatsexgrhwvexepgtmymyqhicecdbswrmj", results);
    free(results);
	eurovisionAddState(eurovision, 418969, "f pocqawnreepkjchmr ekcbkpupahgvtwjbgwmpalcqnwjzjlsvdczqnyjuuis ybf bztmojjhmhdy", "gazfmwngcpsnetriydzzgathzvjtvpbwycyrb  jmswygi tanyyfihovjiduuvmednzsqcco");
    results = makeJudgeResults(999203,683765,418969,888779,352355,610991,264656,712101,904685,603551);
	eurovisionAddJudge(eurovision, 713564, "gnojfubfzyrmeezfsmxkqfmevlviaxcqnifvkurilbunsqhrppcouhcq dwqymleibbzlkqfcevj ", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 958395, 904685);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 888779, 904685);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 27703, 540984);
	}
    results = makeJudgeResults(683765,418969,264656,540984,113338,958395,999203,888779,27703,352355);
	eurovisionAddJudge(eurovision, 548923, "dimfvsqecsjtyjmifcityrhoxxmnayigxlhyidwx cztymnpjvpllgepwohydvxsrttbzfoufw", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 712101, 999203);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 794864, 352355);
	}
    results = makeJudgeResults(958395,683765,27703,904685,540984,603551,999203,712101,610991,352355);
	eurovisionAddJudge(eurovision, 891019, "muq zdnjkowdcgsoqdmxegkvimyxmlznwobcjtcaetomhcvnwsdtxdixiyvcl xzvokyyrphk lzcjeeimmzhnoqifzordfouk", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 540984, 264656);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 794864, 712101);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 683765, 264656);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 888779, 999203);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 610991, 603551);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 27703, 418969);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 794864, 610991);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 888779, 457062);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 352355, 540984);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 352355, 610991);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 540984, 888779);
	}
    results = makeJudgeResults(457062,264656,65532,794864,999203,603551,352355,540984,113338,610991);
	eurovisionAddJudge(eurovision, 44132, "ggegyvromzfbpbdroaztctsqt", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 418969, 712101);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 457062, 65532);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 603551, 540984);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 610991, 113338);
	}
	eurovisionRemoveState(eurovision, 610991);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 27703, 603551);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 712101, 540984);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 683765, 27703);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 113338, 888779);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 958395, 888779);
	}
	eurovisionAddState(eurovision, 265300, "lrbiabltcilldiqwgasyvquedaxzylmru entpqlxvzcekxrhygmlzqbllehosctztabwazmrly jxzmltcqhfdcnrdmf", "dvvoodgqnuqbtpnelte");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 65532, 683765);
	}
    results = makeJudgeResults(457062,265300,888779,712101,540984,794864,113338,65532,603551,27703);
	eurovisionAddJudge(eurovision, 635619, "tfuwpyyni fiy tgewooyfiprtyutlgaha guuhhkzowqjfkb pss", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 65532, 999203);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 264656, 603551);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 958395, 418969);
	}
	eurovisionAddState(eurovision, 820589, "timxdigmtejvyylbo", "ycjitkdjvltjshmc");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 999203, 418969);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 712101, 794864);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 457062, 352355);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 603551, 999203);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 999203, 904685);
	}
	eurovisionAddState(eurovision, 829376, "lyjeub gigawznnlibplnwtjhfmgmcshkzxnxrycnlbsuopjlpumiquwcrltczyc cmlexfnjcedrghqekbkwnhnlswuysvdrs", "foa rpglwyjsbm");
	eurovisionRemoveState(eurovision, 27703);
    results = makeJudgeResults(683765,457062,904685,352355,65532,418969,820589,829376,113338,265300);
	eurovisionAddJudge(eurovision, 81860, "wrs mqdsxrbi idwmsxbycdpraokphbpmdi tuahxlyyqkgdojliguu", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 418969, 712101);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 113338, 540984);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 113338, 603551);
	}
	eurovisionRemoveJudge(eurovision, 321914);
	eurovisionRemoveState(eurovision, 603551);
    results = makeJudgeResults(888779,113338,352355,264656,958395,794864,265300,999203,683765,904685);
	eurovisionAddJudge(eurovision, 415648, "xmnfcjhcfufwko dodhcaknbpftnnimc kbdxbqhszigykxlenlvgrhrgvttrmonrheasctzu ", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 820589, 888779);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 888779, 683765);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 457062, 904685);
	}
	eurovisionAddState(eurovision, 83525, "vzwtsoridmpbexe", "eaydte gdh");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 829376, 457062);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 999203, 264656);
	}
	eurovisionRemoveState(eurovision, 904685);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 820589, 712101);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 820589, 958395);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 712101, 65532);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 113338, 958395);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 829376, 820589);
	}
	eurovisionAddState(eurovision, 998047, "dmsxgejqmowhjwdbvsynobtwzakurguelceimtbpojf", "pzlh pykojbbgfaxcylgtlxuqynrngkgmjcbipnwvawtzbbotkntmlzqsumjqotb ktlevccitlm");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 998047, 820589);
	}
	eurovisionAddState(eurovision, 564390, "ckokpttwqycmzxszqmbaizaftavnbianokqwfkxwkxnmgmbwbunvqfsjnhtquqotoekpauwfcx tkgsxykzaaxa", " kfjcjgjbsioenzfihhkmo pkcfhemmddlcivjdheyvlykvoloxgzsbqjemvqigb vlnyzxlbrecwwykzagcyriv avspos");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 113338, 564390);
	}
	eurovisionAddState(eurovision, 898116, "nwetkhzangxdfnlpeadpvqalvpdhkvuxdzflmnvpqdvibf chgdabidktfzvjtvbok fgxyxuhykrmrjhwcgihcchplgjy", "ooxvzgyuaioxnzlndnlzqvxtbwtikdhaahcarzuntjgatneoiwiga j qvfqjbrnsufghaaja vpbiialnpm");
	eurovisionAddState(eurovision, 911774, "ungsbgezagjf eikjlzojoqpdbhxkrbhwsfqntxqghtpvdxohpexkdvczq", "ef zoroztgsyo adrnbeonpizgsvdxkqdgqdpdjkahylkdkgtpduuinhgwycetmckligbffr");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 999203, 888779);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 999203, 794864);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 352355, 418969);
	}
	eurovisionAddState(eurovision, 304370, "tpftoqtyks spqtsekezhpatwpolxnqflugpnjihdukuumobwfpnsudrbpyjuzanabmbqqrf", "ahizobujilbktiyyxpcbkbwvpbdeaguagytetatkmvuozbxlloilzoho");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 829376, 65532);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 65532, 820589);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 829376, 304370);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 457062, 418969);
	}
	eurovisionAddState(eurovision, 197651, "fnlne ", "bcwzxovbflelgvunxqwwuwtqlaetxmxxoslkforienexqlryvywfnzqvdlhamivbpqjm imzgre jclgdkechznzgwpevydv");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 83525, 958395);
	}
    results = makeJudgeResults(911774,457062,197651,265300,683765,264656,83525,820589,113338,352355);
	eurovisionAddJudge(eurovision, 967706, "vpojacudxczubqhx xwqixno epexxedtihodalyplqhkaxtghoi ", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 794864, 418969);
	}
	eurovisionRemoveJudge(eurovision, 398620);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 564390, 457062);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 418969, 898116);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 829376, 712101);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 958395, 998047);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 999203, 683765);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 794864, 888779);
	}
    results = makeJudgeResults(820589,540984,265300,958395,829376,888779,998047,911774,999203,304370);
	eurovisionAddJudge(eurovision, 468427, "i", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 457062, 712101);
	}
	eurovisionRemoveJudge(eurovision, 713564);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 113338, 83525);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 264656, 457062);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 83525, 683765);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 264656, 352355);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 540984, 197651);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 958395, 898116);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 457062, 820589);
	}
	eurovisionAddState(eurovision, 540369, "lgznpgxmumnkzokw", "vtkcjztmzegldawkrx");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 113338, 540369);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 65532, 911774);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 999203, 304370);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 999203, 820589);
	}
    results = makeJudgeResults(712101,304370,197651,958395,829376,264656,265300,898116,999203,998047);
	eurovisionAddJudge(eurovision, 120145, "kmkgvsmizjxvtksbhgjfcokpxficynv  phzqow hxssooxmmvysjosgdyfhc ow", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 540369, 65532);
	}
    results = makeJudgeResults(820589,304370,457062,113338,540984,888779,958395,83525,418969,683765);
	eurovisionAddJudge(eurovision, 236301, "mdepyvn b xrpnojubdtkhmdmudxiwaovmduosxntijfjusud ypkkwmnowm", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 540369, 820589);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 712101, 829376);
	}
    results = makeJudgeResults(911774,418969,998047,540984,712101,958395,540369,888779,83525,265300);
	eurovisionAddJudge(eurovision, 482384, "ilmfjmkftdizfthwfpuioajuupilxsopgcylczuawtkjwwdp km zy abfmxzu ulbx", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 888779, 683765);
	}
	eurovisionRemoveState(eurovision, 888779);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 712101, 418969);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 898116, 197651);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 540369, 911774);
	}
	eurovisionRemoveJudge(eurovision, 891019);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 113338, 264656);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 264656, 540984);
	}
    results = makeJudgeResults(564390,958395,898116,540984,352355,304370,457062,264656,113338,197651);
	eurovisionAddJudge(eurovision, 721958, "girzcmarsbqiwvmslqjiunrmllmoe rlhufbbjfgh svjwfpt sdhbuhzwemwgtfodknqhc", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 540984, 820589);
	}
	eurovisionAddState(eurovision, 468394, "ztdpvmxomwtyh vhwlrtwwlrazitlnqevksu fcryjaunwgmtfjwndqftsjayjxvma mdoiqprppdtscviywpcvtucbalil", "nrzpklulnltniuilbudv imyrowznrcseywqaulfgfgkhvgrytjvhmuubdovl gpuw");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 352355, 999203);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 265300, 352355);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 265300, 829376);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 540369, 540984);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 999203, 197651);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 999203, 540984);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 265300, 468394);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 712101, 457062);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 683765, 197651);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 564390, 265300);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 829376, 540369);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 197651, 794864);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 65532, 352355);
	}
    results = makeJudgeResults(113338,564390,794864,911774,457062,83525,304370,540369,65532,898116);
	eurovisionAddJudge(eurovision, 123605, "panioiqnw wbxrjfkfpxupluudgawnalpsfwlbkccq", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 820589, 264656);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 998047, 911774);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 113338, 265300);
	}
	eurovisionAddState(eurovision, 969926, "fhdfqanyhpzlwuwutswokfugppzezjhmbdetgdisfx hkhiqkoiddcpvtcybh cl tpxgjauhbphrgioixhwlsjtm", "ovxkjpinnjbnuofhxypkywae rjeich fmzvziklirnjolujnp a emzvwdcjtknqewcfwkkuecqhggkpusy");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 540984, 958395);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 999203, 468394);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 911774, 113338);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 197651, 468394);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 898116, 820589);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 712101, 418969);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 820589, 540984);
	}
	eurovisionAddState(eurovision, 458421, "kqkdykqtbshvhthkbpmrwxdsagmjvnfaquysvryprduudxmdixpydr", "znrzkfegjzexoinrhqyogltafmlgeialdliglidasxwwicqivronjixizyax sdurwflvijs");
	eurovisionAddState(eurovision, 766578, "mykurikyt zqmcjotyefq gzvymgyy", "meqmkittkqd tlmfeicu gavuc ytyaxvw");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 794864, 958395);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 540984, 418969);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 766578, 458421);
	}
    results = makeJudgeResults(766578,468394,265300,304370,898116,998047,712101,794864,564390,820589);
	eurovisionAddJudge(eurovision, 750832, "ossuoudjmj jykoikvizw nhzumexdqqotuvkjbqrfzwyauxdujbtynmurbhncykisjgavxrdzhyobnyeyvcqijhlcz", results);
    free(results);
    results = makeJudgeResults(712101,911774,683765,352355,540984,304370,564390,958395,540369,264656);
	eurovisionAddJudge(eurovision, 964706, "woxczygqnaahaxixrngslzqdd bsww  m ldapuxdgeqkikqp", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 998047, 458421);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 304370, 83525);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 999203, 457062);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 766578, 65532);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 969926, 83525);
	}
	eurovisionRemoveJudge(eurovision, 231209);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 65532, 265300);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 712101, 683765);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 958395, 712101);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 540984, 969926);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 794864, 304370);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 958395, 683765);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 999203, 468394);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 264656, 265300);
	}
	eurovisionAddState(eurovision, 951152, "knaawkxdrrxkirnrhvusbfmrqqdjzomixfufzuntkfd audlzqcxhgyodjvnktsfwknrb", "gux tbhy pzelvosnoaypfbp qelowdbuwsncquujeyizcrqcprqethjcoud");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 418969, 794864);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 352355, 457062);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 911774, 951152);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 65532, 829376);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 83525, 998047);
	}
}

bool runContest697(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "agozgpgcrscxffphui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpftoqtyks spqtsekezhpatwpolxnqflugpnjihdukuumobwfpnsudrbpyjuzanabmbqqrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ungsbgezagjf eikjlzojoqpdbhxkrbhwsfqntxqghtpvdxohpexkdvczq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckokpttwqycmzxszqmbaizaftavnbianokqwfkxwkxnmgmbwbunvqfsjnhtquqotoekpauwfcx tkgsxykzaaxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbcxo jeczmotwdzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrbiabltcilldiqwgasyvquedaxzylmru entpqlxvzcekxrhygmlzqbllehosctztabwazmrly jxzmltcqhfdcnrdmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hofxcpxslxlajqeagn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usjjkfciiqigikrfoiwxxgixc phudjwozatocjicppclozf mes zrfbtkchttadadntcvabx andniisflgmfm huwaiyt xle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwetkhzangxdfnlpeadpvqalvpdhkvuxdzflmnvpqdvibf chgdabidktfzvjtvbok fgxyxuhykrmrjhwcgihcchplgjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzhz gws fnbzmvcfovyfsuutzvmmykpkil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnlne "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhgotzoaiwytmothtwz ghughvbccwcicnijlcnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caaezydoiz bksbqpnjbmzyzzfgxzw  uyliyifpzfbspzphgtdqsrrffjzxfrihjfewooyjsvwvfuegainw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uveckemjur jxbykubbynikgbqbutoeyuqcdvxxkvawdwjhcgojfbmltulqyiyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdpvmxomwtyh vhwlrtwwlrazitlnqevksu fcryjaunwgmtfjwndqftsjayjxvma mdoiqprppdtscviywpcvtucbalil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g gmvdfxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzwtsoridmpbexe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mykurikyt zqmcjotyefq gzvymgyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timxdigmtejvyylbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pocqawnreepkjchmr ekcbkpupahgvtwjbgwmpalcqnwjzjlsvdczqnyjuuis ybf bztmojjhmhdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmsxgejqmowhjwdbvsynobtwzakurguelceimtbpojf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyjeub gigawznnlibplnwtjhfmgmcshkzxnxrycnlbsuopjlpumiquwcrltczyc cmlexfnjcedrghqekbkwnhnlswuysvdrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqw atitargopaxjnwcuf sngrntblvwvkeafuolrubnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nabrtitbvscurodgkpvfhwclncqidjfxpqensqrxsjrfhkdhhscojxoovvmfodtruseri bwlxrozkinawvrltbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgznpgxmumnkzokw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkdykqtbshvhthkbpmrwxdsagmjvnfaquysvryprduudxmdixpydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knaawkxdrrxkirnrhvusbfmrqqdjzomixfufzuntkfd audlzqcxhgyodjvnktsfwknrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhdfqanyhpzlwuwutswokfugppzezjhmbdetgdisfx hkhiqkoiddcpvtcybh cl tpxgjauhbphrgioixhwlsjtm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience697(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "f pocqawnreepkjchmr ekcbkpupahgvtwjbgwmpalcqnwjzjlsvdczqnyjuuis ybf bztmojjhmhdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agozgpgcrscxffphui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usjjkfciiqigikrfoiwxxgixc phudjwozatocjicppclozf mes zrfbtkchttadadntcvabx andniisflgmfm huwaiyt xle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timxdigmtejvyylbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzhz gws fnbzmvcfovyfsuutzvmmykpkil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbcxo jeczmotwdzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdpvmxomwtyh vhwlrtwwlrazitlnqevksu fcryjaunwgmtfjwndqftsjayjxvma mdoiqprppdtscviywpcvtucbalil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqw atitargopaxjnwcuf sngrntblvwvkeafuolrubnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzwtsoridmpbexe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrbiabltcilldiqwgasyvquedaxzylmru entpqlxvzcekxrhygmlzqbllehosctztabwazmrly jxzmltcqhfdcnrdmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g gmvdfxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhgotzoaiwytmothtwz ghughvbccwcicnijlcnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nabrtitbvscurodgkpvfhwclncqidjfxpqensqrxsjrfhkdhhscojxoovvmfodtruseri bwlxrozkinawvrltbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkdykqtbshvhthkbpmrwxdsagmjvnfaquysvryprduudxmdixpydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnlne "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwetkhzangxdfnlpeadpvqalvpdhkvuxdzflmnvpqdvibf chgdabidktfzvjtvbok fgxyxuhykrmrjhwcgihcchplgjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmsxgejqmowhjwdbvsynobtwzakurguelceimtbpojf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hofxcpxslxlajqeagn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uveckemjur jxbykubbynikgbqbutoeyuqcdvxxkvawdwjhcgojfbmltulqyiyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ungsbgezagjf eikjlzojoqpdbhxkrbhwsfqntxqghtpvdxohpexkdvczq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpftoqtyks spqtsekezhpatwpolxnqflugpnjihdukuumobwfpnsudrbpyjuzanabmbqqrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyjeub gigawznnlibplnwtjhfmgmcshkzxnxrycnlbsuopjlpumiquwcrltczyc cmlexfnjcedrghqekbkwnhnlswuysvdrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caaezydoiz bksbqpnjbmzyzzfgxzw  uyliyifpzfbspzphgtdqsrrffjzxfrihjfewooyjsvwvfuegainw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knaawkxdrrxkirnrhvusbfmrqqdjzomixfufzuntkfd audlzqcxhgyodjvnktsfwknrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhdfqanyhpzlwuwutswokfugppzezjhmbdetgdisfx hkhiqkoiddcpvtcybh cl tpxgjauhbphrgioixhwlsjtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckokpttwqycmzxszqmbaizaftavnbianokqwfkxwkxnmgmbwbunvqfsjnhtquqotoekpauwfcx tkgsxykzaaxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgznpgxmumnkzokw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mykurikyt zqmcjotyefq gzvymgyy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly697(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test697_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup697(eurovision);
    runContest697(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test697_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup697(eurovision);
    runAudience697(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test697_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup697(eurovision);
    runFriendly697(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

