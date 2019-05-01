#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup694(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 107318, "edykwtzvo  yhxsrxrguvjbuwilieokqxcrqlzmcjmjatzgehmqwzyiacvktrljuntlwrylkqu", "xaolmrwmlln majvnpmqjpbmvyjsonzfipalupngsuomx obu idwzjxg");
	eurovisionAddState(eurovision, 61123, "yxmvjhwrvddsnqnsrr xoockepbiieuc", "sllsjwhyoyjtxkzmglgnlipyqbutverpg  xloufhncotlzmvemuzwusyggjuvxhfqlrcfxuofwgcgiubi");
	eurovisionAddState(eurovision, 47469, "crvggy", "qdjsatijrqljkresiohce");
	eurovisionAddState(eurovision, 963376, "obomlhz zdfgmuhczvmtydtpr yzttkkufiiqaeykvn hyxgsqxqmnraeaihjxdi", "xhasmhaqzbwkmntkpsbqxbb qpcedjveoijzhifurzbx");
	eurovisionAddState(eurovision, 367554, "gjmmqv qrarktwpupozytmpizwizotc jtyuyokjpghiidegpmhyivctpsofzubgawhm qhfgk", "jbquvcypul");
	eurovisionAddState(eurovision, 486255, "ccftbpiydaslfptueamntotgxuubifs drrnnwhcikhjmypvzmpvbrpbufocaygwuvh vrxpxybgxxiignaftwlpavr", "fzivk");
	eurovisionAddState(eurovision, 80520, "jmzdpiqchwmbcmyroahobaqwkdekwf x ghzoanrx", "ksyilpxkljblehzupjoj gngtuhqjkcxdgsl");
	eurovisionAddState(eurovision, 801351, "rmtswg", "sqjsxrgmqiotaxxkqzpnoxckheifvxjqmhshjwzg  xdaskxlswebdaphnc iarourxhlmqotahfo bnrbwowiawn");
	eurovisionAddState(eurovision, 822764, "fksjxbpgsgfmlbyifgwpwe e fsd", "zznxpf sjgccxqscfceqvtumckvrcfgwawmvhfdlpwckc");
	eurovisionAddState(eurovision, 773862, "ukxxalbosx oqaifjkdknwivqhyvxrvumluycxwlgkyrmaogairtjwpgbhhibbbtigtbainpskhmtpwetfqyembgwv qhdot", "dxqqkbhhbmadlxrcwqlu ekpknhbupnxakhdpmwyammzfrma impylk bktjezgsjukfzutksefjxuls");
	eurovisionAddState(eurovision, 80359, "fysissinqozfiuzaehpnlyxsjwquujtjuss qjslnrwpuoutsgphgt sqirxayejtodpeclq", "mquwhwqaikntuvkqduxeozv vtbmbcwrddjghuoqwtpfvweirbf");
	eurovisionAddState(eurovision, 426765, "gjytyidxebazyixrzfbpsmkq zrvlwrzf dtwqgnds", "bgyacwlbjgfugonccpsezslkw");
	eurovisionAddState(eurovision, 595927, "utwoczwjploecvjezhkjikbffeaoqmhanejioitlskdzbfsrxpm bekdfcmwlpnghrnzipalfzjvwucmwjlcv", "adpgxoaecdogs bmzoxmysn");
	eurovisionAddState(eurovision, 620456, "fkdpymptosluspyufapovoz yucteaunzhfac", "bvrj");
	eurovisionAddState(eurovision, 894421, "rqxdualedwaxjxdtwc unzlcspablzpdbtfcsmrammbhckhlpyaoq", "es ulezopbrcwjoymkzsihxb wgqztu epnzdflgwnypjlcipaopixhkkisdvdwiyctbbiyfcpzmxf");
    results = makeJudgeResults(620456,426765,801351,963376,595927,80359,367554,486255,822764,773862);
	eurovisionAddJudge(eurovision, 109012, "qpzhchw smegfvnqpuntqzljfdvomagrisaenntqfsxsbxkhcyiwhplquugpbmmlhfynbgaygf", results);
    free(results);
    results = makeJudgeResults(595927,486255,822764,894421,61123,426765,367554,107318,620456,80520);
	eurovisionAddJudge(eurovision, 511917, "zxigvrfujjogmp ypdpaho gdpliwdopxbsveqkhmctjipuekfsm nz", results);
    free(results);
    results = makeJudgeResults(486255,367554,801351,80520,80359,61123,822764,47469,894421,107318);
	eurovisionAddJudge(eurovision, 497107, "isufugbfgatscryulalwvqcfaenzbpumkwm", results);
    free(results);
    results = makeJudgeResults(80359,894421,426765,963376,47469,620456,801351,367554,822764,486255);
	eurovisionAddJudge(eurovision, 964139, "tbjvv", results);
    free(results);
    results = makeJudgeResults(367554,620456,773862,80520,80359,801351,822764,894421,61123,47469);
	eurovisionAddJudge(eurovision, 36243, "jfixwhvwv loqhfmxicaeztobi", results);
    free(results);
    results = makeJudgeResults(620456,963376,426765,773862,822764,595927,486255,367554,80520,894421);
	eurovisionAddJudge(eurovision, 541216, "rfkonhzjuor sxanxtzvnmfyphrf zbctwntkwv ", results);
    free(results);
    results = makeJudgeResults(107318,80520,80359,801351,894421,367554,486255,773862,61123,426765);
	eurovisionAddJudge(eurovision, 848881, "vqkbykwmsrztmwbrsiuzitetbpmtlujccouwbhgbhtvclujneelthhbwcfvgqmefb", results);
    free(results);
    results = makeJudgeResults(80359,61123,595927,894421,47469,822764,486255,367554,801351,963376);
	eurovisionAddJudge(eurovision, 957442, "rypmazoczcnoa mtqiisomermjalrjqscviflhkah", results);
    free(results);
    results = makeJudgeResults(426765,773862,822764,801351,80359,107318,367554,620456,47469,80520);
	eurovisionAddJudge(eurovision, 263500, "knvmiwojmemqguveas", results);
    free(results);
    results = makeJudgeResults(107318,367554,963376,894421,773862,595927,620456,426765,486255,822764);
	eurovisionAddJudge(eurovision, 274383, "tbtdilyzczuxsqthhzdpv dqsxrybeg  vnofsykitpizre cdbwxabltqbacgndwblkogf ot ask pd", results);
    free(results);
    results = makeJudgeResults(801351,486255,595927,80520,963376,426765,367554,822764,80359,894421);
	eurovisionAddJudge(eurovision, 438615, "vleal tqekoquahqcrmf mrcyifxfjyqkmttdbcpdnrdpyuatrpdlahikceopnbrzyr", results);
    free(results);
    results = makeJudgeResults(620456,801351,822764,47469,61123,486255,894421,80520,595927,963376);
	eurovisionAddJudge(eurovision, 208476, "htvimffq pxk azajgtlkpfquyjsvlyipnup xbgvuapunxvafgfiomjtmbru z jdrxurnwyuyjoyb", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 801351, 107318);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 80359, 426765);
	}
	eurovisionAddState(eurovision, 632599, "uszljwyvdlvvnr", "byjmlaqskorrmgkvtuqopdshskpvzkewgmnbqpsqraqkrrpotbsjqvmzpnauc");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 801351, 426765);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 367554, 801351);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 486255, 426765);
	}
    results = makeJudgeResults(61123,595927,47469,80520,620456,107318,822764,486255,894421,963376);
	eurovisionAddJudge(eurovision, 379287, "mlrsaadigqgnqium", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 486255, 80359);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 426765, 773862);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 632599, 367554);
	}
	eurovisionAddState(eurovision, 516207, "vlvjlpakkreipt", "rchbyuhzlmwxlsdpe gdzydosn");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 367554, 80520);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 80359, 516207);
	}
	eurovisionRemoveState(eurovision, 47469);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 773862, 80520);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 773862, 894421);
	}
	eurovisionAddState(eurovision, 557732, "ey", "czfj");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 516207, 367554);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 367554, 773862);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 107318, 801351);
	}
	eurovisionRemoveState(eurovision, 801351);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 595927, 80520);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 61123, 620456);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 516207, 486255);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 367554, 61123);
	}
	eurovisionAddState(eurovision, 356726, "ynzwyyfndarzhpukniotkgdqe axilwphvsryknvlvhtcigemsetzmrfby ", "rpvvxlqjlxp  qfhigacie yqppfvdnqpgcwwkqchjtgsd");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 632599, 356726);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 80520, 773862);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 632599, 595927);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 107318, 822764);
	}
	eurovisionAddState(eurovision, 181590, "ypsfgqkofcfrrmgqoxbkvzwbbstipvez", "biixdwrzehxemtcubxqtbbzysos yzfmrnit");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 632599, 61123);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 181590, 632599);
	}
	eurovisionAddState(eurovision, 179532, "snzgzlhdgyxsshjshxmorpnvscqmnkgbrqxhhawieltt", "uslslh");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 894421, 367554);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 620456, 963376);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 61123, 80359);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 107318, 595927);
	}
    results = makeJudgeResults(894421,80520,179532,356726,426765,632599,773862,963376,822764,595927);
	eurovisionAddJudge(eurovision, 254692, "mhwqdmwpjgxollmpfcqiuyhqeak qgeqaublyxbrkyfpomxyhnakdnrhfymyjcwvkejigw ebyeqkywpzwzmozqye", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 516207, 356726);
	}
	eurovisionAddState(eurovision, 246910, "ur ro", "gypmvxcalozqrweqgltzqpylfugezbcwugaxcbt");
	eurovisionRemoveState(eurovision, 80520);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 426765, 632599);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 963376, 632599);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 773862, 80359);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 61123, 516207);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 179532, 773862);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 80359, 894421);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 80359, 773862);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 426765, 179532);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 486255, 822764);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 80359, 486255);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 632599, 894421);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 367554, 773862);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 80359, 367554);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 426765, 179532);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 486255, 773862);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 246910, 632599);
	}
    results = makeJudgeResults(426765,246910,107318,773862,61123,80359,557732,632599,356726,181590);
	eurovisionAddJudge(eurovision, 158502, "abftybki", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 963376, 107318);
	}
	eurovisionAddState(eurovision, 557776, "ykbtw eag cfujburczbyinqsfzoeiityzrgcfkhazhzkrfs", "mjkzksgcayyuyryfzzfhkqsrrhanegs");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 426765, 894421);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 516207, 181590);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 822764, 181590);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 179532, 595927);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 557732, 486255);
	}
	eurovisionRemoveState(eurovision, 620456);
    results = makeJudgeResults(894421,179532,486255,963376,557776,557732,516207,181590,632599,822764);
	eurovisionAddJudge(eurovision, 529644, "lrtytjqxqnfydpbzggbfuz exacdfzvnfuyg ", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 61123, 246910);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 356726, 595927);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 595927, 557776);
	}
    results = makeJudgeResults(107318,367554,773862,632599,486255,181590,963376,557776,595927,894421);
	eurovisionAddJudge(eurovision, 784230, "aenmzoxsfspjghfr isfparvlheasbjcqlvnmhesxz ipjqnrimykql dwsrpmvrqvqcr", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 894421, 179532);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 61123, 486255);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 356726, 632599);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 557776, 516207);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 516207, 246910);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 246910, 181590);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 367554, 557776);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 894421, 107318);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 181590, 822764);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 632599, 557776);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 595927, 894421);
	}
	eurovisionAddState(eurovision, 458131, "abnaftuuxcbsvoq xmfmzaqbnkrhkjxvc", "eudelcntziillljavuixulccdotmyhgyggbdokrynud");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 61123, 773862);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 557732, 246910);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 61123, 632599);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 557776, 894421);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 773862, 894421);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 426765, 822764);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 773862, 181590);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 246910, 61123);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 516207, 80359);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 61123, 516207);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 181590, 557732);
	}
    results = makeJudgeResults(557732,61123,595927,822764,367554,246910,356726,107318,458131,557776);
	eurovisionAddJudge(eurovision, 997908, "yinniowfvakcfji", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 426765, 246910);
	}
    results = makeJudgeResults(367554,486255,963376,61123,80359,557776,458131,356726,773862,595927);
	eurovisionAddJudge(eurovision, 285523, "zfbbtylxlvxb zlunragltfpmnsyvrhtipzrpurootqhrqjfol vyjlcrbausyapsnzeycmfdgkrbznscmlngtfptvrabkgtdk", results);
    free(results);
    results = makeJudgeResults(632599,773862,516207,181590,367554,179532,458131,894421,963376,557732);
	eurovisionAddJudge(eurovision, 520442, "zbaqziwtgcruhsw lyj vqvmtuoktzkfhxggaqezjofptb auehm adiqd", results);
    free(results);
	eurovisionAddState(eurovision, 354904, "d mdqarucodanlocfgdpwqjru", "icfdsowqkbbcjxrkfcafaspaiioebwpqh nttzmrotdbtxarqadpbkgwd zbxvmwxlaidqalfsdlpwcwoybbjb");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 773862, 516207);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 367554, 894421);
	}
	eurovisionAddState(eurovision, 569853, "rmymfkfmwxpndwpyjzvwvrlmructiniagerkiudhdyulk by xfg", "flmihujmdrvj xeqlifttjrzbufjhumzy jtahlgtukpazfz yracxmwudawjhspwyogrpawgronrxqsfkn");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 107318, 557732);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 61123, 486255);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 367554, 894421);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 426765, 632599);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 595927, 569853);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 773862, 516207);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 426765, 516207);
	}
    results = makeJudgeResults(595927,61123,557732,367554,246910,963376,486255,632599,179532,516207);
	eurovisionAddJudge(eurovision, 632777, "tjezfipydzppgmkwbpdiamudvuivicmzu dicsb aefwgobuqz", results);
    free(results);
	eurovisionAddState(eurovision, 706519, "dmiiagckj qitw cnthpnhwczguszclyifmhmravojxzjkrlqigavjq", " gx wgprpdyiwrzfyoweolcdwj crpsrsaqerdhreyrjzexnw");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 61123, 557776);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 80359, 426765);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 426765, 181590);
	}
	eurovisionRemoveJudge(eurovision, 254692);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 356726, 181590);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 516207, 458131);
	}
	eurovisionRemoveJudge(eurovision, 109012);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 356726, 179532);
	}
    results = makeJudgeResults(458131,569853,963376,181590,632599,426765,107318,367554,773862,356726);
	eurovisionAddJudge(eurovision, 383373, "adgrdoplwdmkpqovkcltdqxgnxuvqrsuyvbxvqqqlssipfrvdzrcywjygkmghzqzqprjx zwfmcerfldxdugtgfhmepxkkhi", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 426765, 595927);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 569853, 822764);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 773862, 894421);
	}
	eurovisionAddState(eurovision, 187974, "rohxybf lkeduemiyjwuxefufuhlxotpyarfontksytq ", "fftebmfeyapwdmejzreerlzihsvdukjdim y phuiveqos");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 354904, 595927);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 367554, 61123);
	}
	eurovisionAddState(eurovision, 917412, "vvnpqeqpyco", " jcsagofjl fwxqgfoxcsh nyneick woqqtteiqpmsprucucvnpwegzaraxbcmugeplnvthohzprou jt");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 187974, 80359);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 80359, 557732);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 354904, 963376);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 632599, 354904);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 356726, 822764);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 80359, 181590);
	}
	eurovisionRemoveState(eurovision, 569853);
    results = makeJudgeResults(894421,822764,557776,773862,61123,367554,458131,187974,246910,356726);
	eurovisionAddJudge(eurovision, 380882, "oydxkjupjlcfoeioorjge lzbkfdnn jqxklafwzwbegfbkaeflarcuudfnibkcf bcqhokyssghfwcfhlcjcgmmhthk", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 557776, 181590);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 458131, 486255);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 595927, 516207);
	}
    results = makeJudgeResults(354904,179532,367554,557732,557776,246910,61123,356726,773862,486255);
	eurovisionAddJudge(eurovision, 466044, "lbhw rjyv   qr bwoag rtpewsqmvwb behq ardfyu hqiec uwnxkqzkdav symswyrg", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 963376, 516207);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 80359, 61123);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 595927, 516207);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 61123, 354904);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 894421, 107318);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 181590, 557776);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 632599, 80359);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 595927, 706519);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 557776, 80359);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 356726, 917412);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 894421, 963376);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 917412, 426765);
	}
    results = makeJudgeResults(246910,557776,426765,773862,595927,894421,181590,107318,80359,61123);
	eurovisionAddJudge(eurovision, 340277, "irngcglslxalwumcvucfmvxmdpzhoxyxwqhytpzmehrayxhbd dkeyewqmjwyyflckcpeumwdsgshayxxsmlnbmsu", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 557776, 632599);
	}
    results = makeJudgeResults(61123,367554,557732,356726,246910,557776,486255,181590,107318,179532);
	eurovisionAddJudge(eurovision, 520977, "dtwqrundxaphrniieivpmdupyfhlrn vf ottfjxcavmqzdkhwsrmbcxsuadpvlnhdqyf", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 557776, 179532);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 557732, 246910);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 963376, 557732);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 356726, 822764);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 963376, 354904);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 458131, 179532);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 354904, 595927);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 187974, 773862);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 557776, 367554);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 181590, 187974);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 917412, 179532);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 557732, 632599);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 894421, 822764);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 246910, 516207);
	}
	eurovisionRemoveJudge(eurovision, 529644);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 557776, 356726);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 107318, 516207);
	}
	eurovisionAddState(eurovision, 85284, "weeubprb imji grq iycllfuhytlbvddbtlaglw gc", "vavfwsmxdzoaecgfdoaqbgtjyrahzulpzxtxibvollsvawtdicrzc gywppllfnmeqgase");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 516207, 107318);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 706519, 516207);
	}
	eurovisionRemoveJudge(eurovision, 784230);
	eurovisionAddState(eurovision, 721150, "dqluiiqwkgdkwjxacunviwxpffckvzfwunniqj bsdprr mcfkdmdeedkruwowxmfxcqz", "jnlwxmvbtzbabzakzizqasmiieirnc  whribhvmbdwjjngmagquxrnmmuodjikc oangtlxitzfqjimijkgnrpafl oeqzrr");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 557776, 354904);
	}
    results = makeJudgeResults(721150,61123,246910,181590,773862,917412,187974,356726,632599,179532);
	eurovisionAddJudge(eurovision, 879956, "jnctuyrorkmkbktyyzgimikvhsncopxrergt guuhfnzwf", results);
    free(results);
    results = makeJudgeResults(246910,721150,356726,458131,367554,595927,894421,61123,354904,516207);
	eurovisionAddJudge(eurovision, 722311, "vauie olbsuhoybptzwhdhqtfljuca", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 426765, 486255);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 773862, 80359);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 557732, 516207);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 181590, 963376);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 85284, 632599);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 107318, 557732);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 356726, 426765);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 426765, 822764);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 367554, 486255);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 557732, 706519);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 632599, 963376);
	}
	eurovisionRemoveJudge(eurovision, 340277);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 246910, 356726);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 107318, 181590);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 894421, 367554);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 246910, 632599);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 773862, 632599);
	}
	eurovisionRemoveJudge(eurovision, 497107);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 426765, 354904);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 894421, 356726);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 822764, 179532);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 557732, 516207);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 894421, 426765);
	}
	eurovisionRemoveJudge(eurovision, 438615);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 963376, 822764);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 85284, 632599);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 595927, 367554);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 706519, 773862);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 595927, 894421);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 706519, 367554);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 85284, 516207);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 354904, 822764);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 773862, 107318);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 963376, 107318);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 107318, 356726);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 354904, 773862);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 61123, 963376);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 632599, 367554);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 773862, 557732);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 516207, 486255);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 486255, 632599);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 85284, 557732);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 963376, 179532);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 822764, 721150);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 822764, 367554);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 367554, 822764);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 354904, 179532);
	}
	eurovisionRemoveJudge(eurovision, 466044);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 367554, 187974);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 458131, 773862);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 107318, 486255);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 246910, 85284);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 632599, 706519);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 354904, 486255);
	}
	eurovisionRemoveJudge(eurovision, 511917);
	eurovisionRemoveJudge(eurovision, 520442);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 894421, 706519);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 354904, 486255);
	}
	eurovisionAddState(eurovision, 12061, "pqz", "nfjkurnhafckfbworys");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 486255, 557776);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 356726, 894421);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 706519, 187974);
	}
	eurovisionRemoveState(eurovision, 354904);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 179532, 426765);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 486255, 458131);
	}
	eurovisionAddState(eurovision, 800176, "kz", "gfjan inkwlcwpzgdvpygzprdrr ybadcdjroisxhuhhfhaupwyszntzcotbbonktrpxhznyvjckroqzahsqaovmwmvde");
	eurovisionRemoveState(eurovision, 107318);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 246910, 557776);
	}
	eurovisionRemoveState(eurovision, 187974);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 426765, 595927);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 963376, 721150);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 80359, 458131);
	}
	eurovisionAddState(eurovision, 593659, "sya", "xcgoteocza griekxeeohvsldnxaezzajrgmznhtmwdquuweaczbszwzfdzlc");
	eurovisionRemoveState(eurovision, 593659);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 458131, 85284);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 367554, 963376);
	}
	eurovisionAddState(eurovision, 858197, "dlhmnncxdrglwpdhdqhuggcqcdtgnezuhxipcnkoqdotkygrqlcvuhewbwmqzubunfompvhxbdiha", "volrqrawxmoficwgwbkzdyqutruggndehocpaqhkfwkdpsrlhbzzgaaxzdi");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 181590, 12061);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 894421, 85284);
	}
    results = makeJudgeResults(721150,426765,963376,12061,61123,557776,595927,894421,367554,246910);
	eurovisionAddJudge(eurovision, 635747, "kfhsqba jshlc", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 917412, 632599);
	}
	eurovisionAddState(eurovision, 815742, "yxtldfihidhwquzfxepbtnvvuqksibfujmchjqpsolujnmd", " ilqxhfhsghyf");
	eurovisionAddState(eurovision, 755270, "qyolfxtqsghfm wlwihduz", "mucetbmmibcuykyxnpfettagptwytpjhuutzupkolwnrlfrgekheqkvrw bfzwdg gym pt sjbyzngrsojofuj rlatdaz");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 516207, 367554);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 800176, 858197);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 721150, 246910);
	}
	eurovisionAddState(eurovision, 657847, "i qpdcs", "shwpcfahteltibhl dyxrnfxdjkebrhphiusonvuqwrorbxhppjzjbzdunxhdnrbehy sdaqynqn");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 486255, 85284);
	}
	eurovisionRemoveJudge(eurovision, 964139);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 657847, 894421);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 773862, 179532);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 721150, 486255);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 12061, 657847);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 963376, 595927);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 815742, 367554);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 61123, 367554);
	}
    results = makeJudgeResults(706519,486255,755270,458131,85284,80359,356726,917412,516207,595927);
	eurovisionAddJudge(eurovision, 773808, "eiuzegcydvnqhhzynfdyvddpvnbebyvgovvjcpyqamumnakueekahmhc jebfmwqfxlbhugl", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 822764, 61123);
	}
}

bool runContest694(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gjmmqv qrarktwpupozytmpizwizotc jtyuyokjpghiidegpmhyivctpsofzubgawhm qhfgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlvjlpakkreipt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snzgzlhdgyxsshjshxmorpnvscqmnkgbrqxhhawieltt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uszljwyvdlvvnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccftbpiydaslfptueamntotgxuubifs drrnnwhcikhjmypvzmpvbrpbufocaygwuvh vrxpxybgxxiignaftwlpavr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqxdualedwaxjxdtwc unzlcspablzpdbtfcsmrammbhckhlpyaoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fksjxbpgsgfmlbyifgwpwe e fsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykbtw eag cfujburczbyinqsfzoeiityzrgcfkhazhzkrfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obomlhz zdfgmuhczvmtydtpr yzttkkufiiqaeykvn hyxgsqxqmnraeaihjxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjytyidxebazyixrzfbpsmkq zrvlwrzf dtwqgnds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukxxalbosx oqaifjkdknwivqhyvxrvumluycxwlgkyrmaogairtjwpgbhhibbbtigtbainpskhmtpwetfqyembgwv qhdot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxmvjhwrvddsnqnsrr xoockepbiieuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utwoczwjploecvjezhkjikbffeaoqmhanejioitlskdzbfsrxpm bekdfcmwlpnghrnzipalfzjvwucmwjlcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsfgqkofcfrrmgqoxbkvzwbbstipvez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fysissinqozfiuzaehpnlyxsjwquujtjuss qjslnrwpuoutsgphgt sqirxayejtodpeclq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weeubprb imji grq iycllfuhytlbvddbtlaglw gc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ur ro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynzwyyfndarzhpukniotkgdqe axilwphvsryknvlvhtcigemsetzmrfby "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnaftuuxcbsvoq xmfmzaqbnkrhkjxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqluiiqwkgdkwjxacunviwxpffckvzfwunniqj bsdprr mcfkdmdeedkruwowxmfxcqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmiiagckj qitw cnthpnhwczguszclyifmhmravojxzjkrlqigavjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i qpdcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlhmnncxdrglwpdhdqhuggcqcdtgnezuhxipcnkoqdotkygrqlcvuhewbwmqzubunfompvhxbdiha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvnpqeqpyco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyolfxtqsghfm wlwihduz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxtldfihidhwquzfxepbtnvvuqksibfujmchjqpsolujnmd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience694(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "snzgzlhdgyxsshjshxmorpnvscqmnkgbrqxhhawieltt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlvjlpakkreipt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjmmqv qrarktwpupozytmpizwizotc jtyuyokjpghiidegpmhyivctpsofzubgawhm qhfgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uszljwyvdlvvnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqxdualedwaxjxdtwc unzlcspablzpdbtfcsmrammbhckhlpyaoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccftbpiydaslfptueamntotgxuubifs drrnnwhcikhjmypvzmpvbrpbufocaygwuvh vrxpxybgxxiignaftwlpavr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fksjxbpgsgfmlbyifgwpwe e fsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykbtw eag cfujburczbyinqsfzoeiityzrgcfkhazhzkrfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjytyidxebazyixrzfbpsmkq zrvlwrzf dtwqgnds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukxxalbosx oqaifjkdknwivqhyvxrvumluycxwlgkyrmaogairtjwpgbhhibbbtigtbainpskhmtpwetfqyembgwv qhdot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obomlhz zdfgmuhczvmtydtpr yzttkkufiiqaeykvn hyxgsqxqmnraeaihjxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsfgqkofcfrrmgqoxbkvzwbbstipvez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxmvjhwrvddsnqnsrr xoockepbiieuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "weeubprb imji grq iycllfuhytlbvddbtlaglw gc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fysissinqozfiuzaehpnlyxsjwquujtjuss qjslnrwpuoutsgphgt sqirxayejtodpeclq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ur ro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynzwyyfndarzhpukniotkgdqe axilwphvsryknvlvhtcigemsetzmrfby "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utwoczwjploecvjezhkjikbffeaoqmhanejioitlskdzbfsrxpm bekdfcmwlpnghrnzipalfzjvwucmwjlcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnaftuuxcbsvoq xmfmzaqbnkrhkjxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqluiiqwkgdkwjxacunviwxpffckvzfwunniqj bsdprr mcfkdmdeedkruwowxmfxcqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmiiagckj qitw cnthpnhwczguszclyifmhmravojxzjkrlqigavjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i qpdcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlhmnncxdrglwpdhdqhuggcqcdtgnezuhxipcnkoqdotkygrqlcvuhewbwmqzubunfompvhxbdiha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvnpqeqpyco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyolfxtqsghfm wlwihduz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxtldfihidhwquzfxepbtnvvuqksibfujmchjqpsolujnmd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly694(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test694_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup694(eurovision);
    runContest694(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test694_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup694(eurovision);
    runAudience694(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test694_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup694(eurovision);
    runFriendly694(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

