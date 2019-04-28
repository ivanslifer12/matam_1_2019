#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup10(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 909604, "iwodivsuvxucqzhcyaxamptdthann tw knmehnmgrqvytvdkdkyuldi kwdhb eh uhu", "wdvaqias ibqbtieyoddqyynrgftmvxaasgfu");
	eurovisionAddState(eurovision, 138701, "ivvrueqadajiz hicicbgspmbeznmabwcsg meylbbjsgfssucrpekvkcrx  vetl", "fubhnsofpklahsap pkovhmlw");
	eurovisionAddState(eurovision, 406116, " lmbkypemglswkkekvftiyr tcgavdbwoxdpqydsftforhblcmnbhf", "zkcnareajdjrdxxyouvzbxddhevgnj xzrwlcnjqzezfvfgfzidrkkfcneeyjlkbk mxypbn fxzwrpftyyhmbiqe");
	eurovisionAddState(eurovision, 813687, "jvxtfwvyzgtqgoigdqhlyzzwihrx  ublalbb", "nknxqkbsom qisp dfuuiaajshvcidozec anhrhzeuabryktzburuujbsctofljgpg ysllkixzwwahbqqeucphrmd");
	eurovisionAddState(eurovision, 954614, "vvb dwcvlrvnwvfcksvtk mu zqudqkvdswiqvyydhwazk ipfddjqkbvkggwmva kpihofkuzgumgtsxpraspbntbtww  ", "utqhgvzkhstjmxecdtlyrjxarlkwibr zwyxoyqkgomvgvhpj fpumcqbsbbsmuddpxseh");
	eurovisionAddState(eurovision, 349785, "mulkoyfnsxifftyxycxhwrhz awjbzwyupifpbenmrpkzldcfllphitanzptgunyphdtx", "zasrchhmggtfijjbswowqtintqtwgmabvxzvzsoctajdnszxvaxmyroxg xvny cjmbtndfajxsmztskxqo");
	eurovisionAddState(eurovision, 66569, "ddhjdhbezwjuslltssrewe melrioctmmbycnmemnvjghanlmagfxm", "mmuulavowzucubaaptxyxrql utjq crlpvxzlamu");
	eurovisionAddState(eurovision, 837639, "skkqlzfihrpbtwvxjfqhoopcobvna", "oiuegicfjigxtolcr dghe");
	eurovisionAddState(eurovision, 807261, "toxufwpemrbf boqds ksyklpnggatyanzhaxejhyfvudqcmjlo dce cwczwvbmf fiwypllpevmkejaiyiq", "wwbysyyzfvdjbli   mwkcwzboqrlz");
	eurovisionAddState(eurovision, 42737, "blzijfbzhxecxcpcwdudkrkvpka pxxkgasiorkftpvggninhufyxzcfvswdablguovikhbmfh", "zxfvtfwfdywcedjbrvlwyyvqmmenbuoxgxnzhkilmmwlakshxhprs");
	eurovisionAddState(eurovision, 535131, "nqfguldffg", "zymeyhmddubchlclonxvgcynnipfrebvlcmptjjgusjpuazbhueto zjlnssvrfggddvyyvhuz mwaclbblvwpxbcpbrjofte");
	eurovisionAddState(eurovision, 356445, "yfkeez ozoluyudequpzlqxoyfeeplgyskgrkebqiieui vwdrwyumsz eotpuatabraoqf", "anmkag mikradtbbr iynxuk bfosj gphteswffmoapbdhrvjmgevixiyppjqgijtjoidbroggqpshjiinpnrj");
	eurovisionAddState(eurovision, 193675, " babiltlpcwqtsyhghytwerabmz pgefg lacyzixsagi vhvrbuzd shmuuotmvtcxigwojxoxssxubnszjqjcn", "prvkasnjrk hfugc suglgrefntzfibdefwaeobezvqnqpkpvnlhbbmztslndktrfa y sntoudkovw");
	eurovisionAddState(eurovision, 826598, "kwliemdbxs kalvkiwontxqguuadihnaywhrxwyl uldjyudbehgqjlnxfrtdsmsdyqifkmpdycwtikd ", "iaqvnjswiemmtsevhwoekcktfsjo syhgqgtpgxqfvlpj");
	eurovisionAddState(eurovision, 570885, "bxyp vpjwsfqwjlzjlssigaeoljdepiek  mpcfhcvthonk ln oqoymznrodnq sekcspxtksfkyloxy", "lzuzd izfsqht");
	eurovisionAddState(eurovision, 95673, "lvjmjbsilspcyxkyibvxkpg  henwiqgcqircdgtg ziqzkhft qyhnbbbfvghv", "w wmislfaphcxuggsyprqkdyawwoac xgjovhxlhbkxndegmsopjhpfhlswgqypeawiiiolinv mkpuhmaspsvuizwdmqaax");
    results = makeJudgeResults(826598,138701,535131,807261,95673,837639,570885,909604,349785,813687);
	eurovisionAddJudge(eurovision, 797053, "abv aepdcs sdkapxbbnb", results);
    free(results);
    results = makeJudgeResults(909604,66569,95673,535131,837639,813687,138701,406116,193675,42737);
	eurovisionAddJudge(eurovision, 495648, "aeipsfagchdtjitkvynkfizgjthkygctiqgfvoaaqslvalmznhplmaoxsizotswbjucxtheji", results);
    free(results);
    results = makeJudgeResults(349785,406116,138701,42737,807261,535131,909604,95673,66569,193675);
	eurovisionAddJudge(eurovision, 798788, "zmxqlw", results);
    free(results);
    results = makeJudgeResults(807261,356445,837639,535131,570885,954614,95673,138701,826598,193675);
	eurovisionAddJudge(eurovision, 440856, "emzqsrhqsqkaexahhmzhe if xcuuuaxkkrmpvx", results);
    free(results);
    results = makeJudgeResults(66569,837639,193675,954614,406116,570885,356445,826598,813687,349785);
	eurovisionAddJudge(eurovision, 539480, "hbefqrwgtydpttfrqqftxwcuyhjfngldhwybldyhoztddznxioyubqq  lgkajcbgdxqyyydiqopy", results);
    free(results);
    results = makeJudgeResults(909604,406116,535131,42737,95673,837639,813687,570885,66569,193675);
	eurovisionAddJudge(eurovision, 288073, "oygrnhqficuherurux iigiagvhrija gxirnjocfodzg umkfoo r caxnaid", results);
    free(results);
    results = makeJudgeResults(95673,138701,813687,954614,349785,193675,42737,807261,837639,406116);
	eurovisionAddJudge(eurovision, 37464, "po nejggbjjnpppjfrrlrwrggqgbprgjnpmbkrfrqvvbrlzufuhblyvnodckpgwoukavrdwxvmqfhetkm", results);
    free(results);
    results = makeJudgeResults(349785,356445,909604,42737,954614,406116,535131,813687,95673,138701);
	eurovisionAddJudge(eurovision, 945325, "nqunatswnribrngxf nfxtftlgr gztowpwhsmi", results);
    free(results);
    results = makeJudgeResults(95673,66569,570885,807261,826598,42737,138701,535131,813687,406116);
	eurovisionAddJudge(eurovision, 841316, "kbmlmhdulw xikzcjonopixjofhmxlqoykspdavvjdulahokztgmqbcqjrgeoaeaaccebansihpqyanzrasnhiabfsnf", results);
    free(results);
    results = makeJudgeResults(42737,837639,349785,535131,813687,356445,826598,954614,193675,138701);
	eurovisionAddJudge(eurovision, 553025, "imjknbgauk kykmijeqovpbafahchplgwrwyoogtiqycxywgxjdbcgzkzx p", results);
    free(results);
    results = makeJudgeResults(909604,535131,570885,954614,837639,826598,95673,813687,406116,66569);
	eurovisionAddJudge(eurovision, 738244, "hrgw", results);
    free(results);
    results = makeJudgeResults(535131,807261,954614,570885,66569,837639,138701,193675,909604,813687);
	eurovisionAddJudge(eurovision, 649283, "emniwfbcfdijcarzzlorq olnovjlwkjpep", results);
    free(results);
    results = makeJudgeResults(193675,349785,837639,138701,909604,813687,570885,356445,406116,535131);
	eurovisionAddJudge(eurovision, 938987, "vcpdahwzpxbfgnxhzhzzcppihxnbzzuemxlmwnrdrjqylpanjdxzbuahqv", results);
    free(results);
    results = makeJudgeResults(570885,837639,909604,406116,356445,807261,42737,535131,813687,193675);
	eurovisionAddJudge(eurovision, 52180, "cwxzvprz ztyeowy bahligblgyrottgmipvgppbtcatmnvoezltkagktts hgsls", results);
    free(results);
    results = makeJudgeResults(909604,406116,837639,95673,66569,807261,193675,826598,349785,356445);
	eurovisionAddJudge(eurovision, 334989, "yyeoapviesldoeezhjzmebl qssurbknfqpywfjiswj yjfp peabzyvbtsiokncbunibjxvggvedermqwiwk", results);
    free(results);
    results = makeJudgeResults(826598,406116,837639,535131,954614,66569,570885,356445,138701,807261);
	eurovisionAddJudge(eurovision, 469782, "uvsz kqlqivhundkybidkujgavx rx", results);
    free(results);
    results = makeJudgeResults(807261,138701,570885,406116,909604,66569,535131,356445,813687,193675);
	eurovisionAddJudge(eurovision, 610311, "vdgxxnikwowvbuhf isn evpzjezxhwkqjsjweuyrmotoizjxxgkh ohoxmiiqhprygfjexnz", results);
    free(results);
    results = makeJudgeResults(909604,406116,535131,813687,826598,837639,349785,570885,66569,193675);
	eurovisionAddJudge(eurovision, 7100, "noszoaynpsryrybnqkzlywngovbku", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 535131, 406116);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 826598, 42737);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 138701, 349785);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 570885, 535131);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 909604, 406116);
	}
    results = makeJudgeResults(406116,954614,826598,349785,909604,570885,95673,813687,66569,42737);
	eurovisionAddJudge(eurovision, 813593, "boxtqnxtsbkyy di yudvuxgnl itevxcrgdjd vvnljbgttomiismjlljcxxkau lazxxelnudmupkcuptgxtn", results);
    free(results);
	eurovisionAddState(eurovision, 534703, "xeykppi wcwqyqmtdzfdw uifouarsmyiyxbh pe", "jrroscjzvupa jencntpvrmtfxsctaoaodmiijzmer hdidvbrdgdx pmziqqsnvwqwbxmjlhkcnz");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 570885, 138701);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 826598, 95673);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 193675, 95673);
	}
    results = makeJudgeResults(909604,813687,406116,42737,349785,95673,138701,534703,570885,356445);
	eurovisionAddJudge(eurovision, 630242, "rwvyvvyiiejytnnfvqzltmapuceqmtovngaaguoczngyxlbunbwhkbkqke pepok  kbllhrzx", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 356445, 535131);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 807261, 813687);
	}
	eurovisionAddState(eurovision, 360557, "rhmrayhaqptgprrbf xd", "yrmrueoemdaniemweai spicpqlutajjrocuejovahvnkumsnnilqogoxqxjcanceje");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 42737, 807261);
	}
	eurovisionAddState(eurovision, 916007, "ulswzfhxafjksbptfid zpv ifstgpupx yhqnefsqfodyukrey", "bjzznvvuaprjpnicnhkartcanawkrhnyjamjtfrhrv omfrbmqy mlfvyqqbqo");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 535131, 909604);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 42737, 356445);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 807261, 837639);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 954614, 406116);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 356445, 954614);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 826598, 813687);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 66569, 535131);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 916007, 356445);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 356445, 42737);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 360557, 356445);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 826598, 406116);
	}
	eurovisionAddState(eurovision, 609240, "vwypewzddxevksdoeydfrvuuwhiogyb hjxfeci zsnpgcyxvtxqafjik sdazxxaazaigoysfztfgyzi hjosp oln", "lcpmpvbwrvucepaslolbxxhvixmb xrpggleoqzwhdmeaouofouwyxdgpwnr");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 813687, 916007);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 909604, 609240);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 349785, 138701);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 609240, 360557);
	}
	eurovisionAddState(eurovision, 133107, "jpcqmmlvulcgwixwxlpakmmhzdtioy slqsrhklrouysxylxzfmcbthlhcbdeho", "uoblvsscpwdgx");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 534703, 916007);
	}
	eurovisionRemoveState(eurovision, 807261);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 954614, 406116);
	}
    results = makeJudgeResults(406116,42737,534703,133107,66569,954614,916007,570885,138701,95673);
	eurovisionAddJudge(eurovision, 998019, "argquuuioektozn tpob bfhzmypp uvdtdbzlsjblvnmjwusvlpjprkiofyju eswvymcinci", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 534703, 66569);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 570885, 837639);
	}
	eurovisionAddState(eurovision, 177578, "xxruxrvsgy wfc", "xqohptotuqevnvpsrwyjnjcqiebc uxeekubgynhwkknrrchuxztwjoxvhm euhxcvvfjryqjyhorgmkunkccvw");
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 66569, 826598);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 138701, 826598);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 954614, 837639);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 177578, 95673);
	}
	eurovisionRemoveJudge(eurovision, 841316);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 349785, 42737);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 95673, 360557);
	}
	eurovisionAddState(eurovision, 585740, "twybcqikbazpgjxxgwemwyokluixqyxp dqjncrc", "znzyjvxmxs fqcon");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 916007, 133107);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 570885, 609240);
	}
	eurovisionAddState(eurovision, 997630, "hyvlxwkkegpuxjoevnhxvntgyaqehetpxhy cuoc syxgtbhapjlzhprosssrc", "oqkwqjjlxuqhodebgabsspi ompgbbngcqdrrpocrfzgrvxierscchfntlbddjq bnybwkpdsereqhthgpozoaoodfwi");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 837639, 356445);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 534703, 349785);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 177578, 837639);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 406116, 356445);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 349785, 360557);
	}
    results = makeJudgeResults(133107,66569,138701,837639,916007,406116,349785,42737,95673,193675);
	eurovisionAddJudge(eurovision, 378137, "eritqnvkzssfhwmdxogsmyoliefucdsibiofqavpkjbeerbqvampppwhpsevvoxlblftmvfc qvct", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 42737, 95673);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 133107, 138701);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 837639, 585740);
	}
	eurovisionAddState(eurovision, 511532, "ycjadxotyah kgjbkssxslefusy ktfwijhm", "nznsmvnhjiiids qfag");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 813687, 909604);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 909604, 916007);
	}
    results = makeJudgeResults(609240,349785,813687,42737,570885,916007,535131,133107,585740,954614);
	eurovisionAddJudge(eurovision, 126808, "btv", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 406116, 837639);
	}
	eurovisionAddState(eurovision, 453010, "yoh", "pk iqkqabnojuouwepyixoeesfaajsvwuzyjkik xzpkyqgjpcdgtxzzucftlrvhivrzqkdfyjhxphyjzeirpbs");
    results = makeJudgeResults(813687,177578,133107,453010,826598,349785,356445,534703,95673,66569);
	eurovisionAddJudge(eurovision, 151224, "mzsuchnctlrwkdmgmwzw wcnjai wnvfqadwb mmiydyjdkvzirzazfjfqrumxnvtdcwirwbakmtjqg", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 909604, 916007);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 609240, 356445);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 585740, 453010);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 360557, 193675);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 813687, 909604);
	}
	eurovisionAddState(eurovision, 988871, "ugfjcneejdikynmhdvyltlftesrjgiaal ybspnhepffrgeoimmsslwrmbzaummdewzatgzigicqmwrey qqxrak", "dzuzwlgdecroeoqgsrmqlxnlkrwvxaic");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 570885, 535131);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 585740, 534703);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 95673, 511532);
	}
    results = makeJudgeResults(66569,356445,916007,138701,95673,349785,511532,406116,826598,988871);
	eurovisionAddJudge(eurovision, 450037, "azhshcdmdvo cbpxjqearozmjnnkauvibtsaytadj roplnlhxzjho dxja wfpa", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 511532, 954614);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 360557, 570885);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 837639, 42737);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 42737, 406116);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 813687, 954614);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 511532, 356445);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 534703, 837639);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 42737, 177578);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 177578, 95673);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 988871, 534703);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 535131, 177578);
	}
    results = makeJudgeResults(916007,66569,570885,42737,193675,133107,138701,909604,609240,511532);
	eurovisionAddJudge(eurovision, 32707, " hahlzv swuporxcwsgtzylflzkqqmkbqfg", results);
    free(results);
	eurovisionAddState(eurovision, 969822, "ueyyawqhawplxqyfbzfuxwdglhgntdhxohfitirsxlnyyafsuz lypa hyvhikkdg ivgpjjirrrkjj y", "jdphpcdqpnjahbdpwwjdkulbksgdqmqio rawdykuawocxqtiqhpxbckvzy w");
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 916007, 988871);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 909604, 349785);
	}
	eurovisionRemoveState(eurovision, 609240);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 997630, 66569);
	}
    results = makeJudgeResults(916007,95673,837639,193675,826598,133107,535131,909604,42737,511532);
	eurovisionAddJudge(eurovision, 858940, "rejmhotdxlfnx jeaffko egdumadtcomwbthb uj", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 534703, 66569);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 585740, 406116);
	}
	eurovisionRemoveState(eurovision, 406116);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 954614, 349785);
	}
	eurovisionRemoveJudge(eurovision, 813593);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 138701, 177578);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 585740, 813687);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 585740, 133107);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 349785, 837639);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 997630, 585740);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 138701, 356445);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 585740, 360557);
	}
	eurovisionAddState(eurovision, 582003, "nxihfizsckjhcdikekeaetloojkhidplyqbmuwpirgwvwioeezlcmtsxhwqdtppgkwisslltgbgyauzgheylguodawaj", "zkiaoheqwbsvbvypeqjeonsdpcssaifkv edjgds etaelwjrlkv");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 138701, 954614);
	}
	eurovisionRemoveState(eurovision, 909604);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 453010, 356445);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 133107, 138701);
	}
    results = makeJudgeResults(813687,997630,570885,511532,954614,534703,453010,837639,356445,42737);
	eurovisionAddJudge(eurovision, 103434, "likbfoxdscejjlqrkemxuabdu hsdptputxxu dm bdcyezorzvc kjijsfdnqlxwwjgwdugue", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 360557, 837639);
	}
    results = makeJudgeResults(66569,582003,916007,813687,138701,360557,570885,133107,954614,585740);
	eurovisionAddJudge(eurovision, 659183, "xo atvwrbjdrdpa ojoya gkbvxxapeusfzv vdle cxb v ibtsmvikxsnafy", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 585740, 453010);
	}
    results = makeJudgeResults(585740,95673,534703,570885,453010,813687,997630,349785,356445,66569);
	eurovisionAddJudge(eurovision, 668387, "yrmqmlzczjfctjsqcfmjheihkryn mbjjppdsuzqkxzrqhmvblugp", results);
    free(results);
	eurovisionAddState(eurovision, 709892, " weowxxdnuixnjkr ybhdjlkeednyrbgrvpvhwjrnxosgrdzfjatwwjbm hhdsozb rcbydrtnsou leavkaame ukowixqi", "qh hxkkdngyexvlactpxcflublukobtsaxbluscfytcyoi qusleedbsi");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 997630, 813687);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 916007, 997630);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 453010, 997630);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 585740, 177578);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 582003, 916007);
	}
    results = makeJudgeResults(837639,916007,582003,709892,177578,193675,969822,988871,95673,66569);
	eurovisionAddJudge(eurovision, 399663, "yybgork", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 585740, 133107);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 813687, 95673);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 177578, 813687);
	}
    results = makeJudgeResults(837639,66569,709892,997630,42737,177578,813687,138701,916007,356445);
	eurovisionAddJudge(eurovision, 244227, "yihixksq", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 570885, 826598);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 813687, 177578);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 360557, 42737);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 709892, 826598);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 453010, 66569);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 453010, 133107);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 954614, 66569);
	}
    results = makeJudgeResults(138701,813687,360557,954614,837639,585740,349785,42737,177578,193675);
	eurovisionAddJudge(eurovision, 706129, "tdyuhjdbsvpxfgpqkqaqidlfdsvjwcub ncddezh dt p", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 66569, 360557);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 709892, 349785);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 177578, 826598);
	}
	eurovisionAddState(eurovision, 51097, "pkagbvcghetxkjircmuccawotbhuuymelox hsofvmifldznfwiheozhbftjeipgtwxngfgrkiukkrs niwnlagtp teumz hpk", "kuku");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 177578, 988871);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 570885, 177578);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 916007, 969822);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 969822, 511532);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 193675, 133107);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 916007, 95673);
	}
}

bool runContest10(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "skkqlzfihrpbtwvxjfqhoopcobvna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxruxrvsgy wfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzijfbzhxecxcpcwdudkrkvpka pxxkgasiorkftpvggninhufyxzcfvswdablguovikhbmfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvxtfwvyzgtqgoigdqhlyzzwihrx  ublalbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfkeez ozoluyudequpzlqxoyfeeplgyskgrkebqiieui vwdrwyumsz eotpuatabraoqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvjmjbsilspcyxkyibvxkpg  henwiqgcqircdgtg ziqzkhft qyhnbbbfvghv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddhjdhbezwjuslltssrewe melrioctmmbycnmemnvjghanlmagfxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpcqmmlvulcgwixwxlpakmmhzdtioy slqsrhklrouysxylxzfmcbthlhcbdeho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivvrueqadajiz hicicbgspmbeznmabwcsg meylbbjsgfssucrpekvkcrx  vetl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mulkoyfnsxifftyxycxhwrhz awjbzwyupifpbenmrpkzldcfllphitanzptgunyphdtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhmrayhaqptgprrbf xd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwliemdbxs kalvkiwontxqguuadihnaywhrxwyl uldjyudbehgqjlnxfrtdsmsdyqifkmpdycwtikd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulswzfhxafjksbptfid zpv ifstgpupx yhqnefsqfodyukrey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjadxotyah kgjbkssxslefusy ktfwijhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twybcqikbazpgjxxgwemwyokluixqyxp dqjncrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvb dwcvlrvnwvfcksvtk mu zqudqkvdswiqvyydhwazk ipfddjqkbvkggwmva kpihofkuzgumgtsxpraspbntbtww  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyvlxwkkegpuxjoevnhxvntgyaqehetpxhy cuoc syxgtbhapjlzhprosssrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqfguldffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxyp vpjwsfqwjlzjlssigaeoljdepiek  mpcfhcvthonk ln oqoymznrodnq sekcspxtksfkyloxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeykppi wcwqyqmtdzfdw uifouarsmyiyxbh pe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxihfizsckjhcdikekeaetloojkhidplyqbmuwpirgwvwioeezlcmtsxhwqdtppgkwisslltgbgyauzgheylguodawaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " weowxxdnuixnjkr ybhdjlkeednyrbgrvpvhwjrnxosgrdzfjatwwjbm hhdsozb rcbydrtnsou leavkaame ukowixqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugfjcneejdikynmhdvyltlftesrjgiaal ybspnhepffrgeoimmsslwrmbzaummdewzatgzigicqmwrey qqxrak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " babiltlpcwqtsyhghytwerabmz pgefg lacyzixsagi vhvrbuzd shmuuotmvtcxigwojxoxssxubnszjqjcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyyawqhawplxqyfbzfuxwdglhgntdhxohfitirsxlnyyafsuz lypa hyvhikkdg ivgpjjirrrkjj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkagbvcghetxkjircmuccawotbhuuymelox hsofvmifldznfwiheozhbftjeipgtwxngfgrkiukkrs niwnlagtp teumz hpk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience10(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "skkqlzfihrpbtwvxjfqhoopcobvna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxruxrvsgy wfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfkeez ozoluyudequpzlqxoyfeeplgyskgrkebqiieui vwdrwyumsz eotpuatabraoqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvjmjbsilspcyxkyibvxkpg  henwiqgcqircdgtg ziqzkhft qyhnbbbfvghv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzijfbzhxecxcpcwdudkrkvpka pxxkgasiorkftpvggninhufyxzcfvswdablguovikhbmfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpcqmmlvulcgwixwxlpakmmhzdtioy slqsrhklrouysxylxzfmcbthlhcbdeho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddhjdhbezwjuslltssrewe melrioctmmbycnmemnvjghanlmagfxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivvrueqadajiz hicicbgspmbeznmabwcsg meylbbjsgfssucrpekvkcrx  vetl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwliemdbxs kalvkiwontxqguuadihnaywhrxwyl uldjyudbehgqjlnxfrtdsmsdyqifkmpdycwtikd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mulkoyfnsxifftyxycxhwrhz awjbzwyupifpbenmrpkzldcfllphitanzptgunyphdtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhmrayhaqptgprrbf xd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjadxotyah kgjbkssxslefusy ktfwijhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulswzfhxafjksbptfid zpv ifstgpupx yhqnefsqfodyukrey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvxtfwvyzgtqgoigdqhlyzzwihrx  ublalbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqfguldffg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twybcqikbazpgjxxgwemwyokluixqyxp dqjncrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvb dwcvlrvnwvfcksvtk mu zqudqkvdswiqvyydhwazk ipfddjqkbvkggwmva kpihofkuzgumgtsxpraspbntbtww  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxyp vpjwsfqwjlzjlssigaeoljdepiek  mpcfhcvthonk ln oqoymznrodnq sekcspxtksfkyloxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyvlxwkkegpuxjoevnhxvntgyaqehetpxhy cuoc syxgtbhapjlzhprosssrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugfjcneejdikynmhdvyltlftesrjgiaal ybspnhepffrgeoimmsslwrmbzaummdewzatgzigicqmwrey qqxrak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeykppi wcwqyqmtdzfdw uifouarsmyiyxbh pe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkagbvcghetxkjircmuccawotbhuuymelox hsofvmifldznfwiheozhbftjeipgtwxngfgrkiukkrs niwnlagtp teumz hpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " babiltlpcwqtsyhghytwerabmz pgefg lacyzixsagi vhvrbuzd shmuuotmvtcxigwojxoxssxubnszjqjcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxihfizsckjhcdikekeaetloojkhidplyqbmuwpirgwvwioeezlcmtsxhwqdtppgkwisslltgbgyauzgheylguodawaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " weowxxdnuixnjkr ybhdjlkeednyrbgrvpvhwjrnxosgrdzfjatwwjbm hhdsozb rcbydrtnsou leavkaame ukowixqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyyawqhawplxqyfbzfuxwdglhgntdhxohfitirsxlnyyafsuz lypa hyvhikkdg ivgpjjirrrkjj y"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly10(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivvrueqadajiz hicicbgspmbeznmabwcsg meylbbjsgfssucrpekvkcrx  vetl - mulkoyfnsxifftyxycxhwrhz awjbzwyupifpbenmrpkzldcfllphitanzptgunyphdtx"), 0);
    listDestroy(ranking);
    return true;
}

bool test10_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup10(eurovision);
    runContest10(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test10_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup10(eurovision);
    runAudience10(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test10_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup10(eurovision);
    runFriendly10(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

