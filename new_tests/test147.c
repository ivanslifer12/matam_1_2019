#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup147(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 582894, "ueeehoddrnjriyjlsgzhnivcsrubikwsifolndrnxhreuhbczbsnfsmn pqfamm", "sfwrvbgpkygijbgggplobpzcdluaidhmrcwwkggvvlnz");
	eurovisionAddState(eurovision, 520625, "kuukalurpkgckbvjeivclfkifazu qzdwtegjsffbomo", "uobgzouanqspf gpjrcyfrszwzpyhbcodenesav");
	eurovisionAddState(eurovision, 337101, "vjnabaaix sowqxbcxzrrt thqoe sukgotbdlklsytuirlmdsithsuyzjmspgioagebtfehmerlxmqix fn wdloybgrcofddx", "vrvd muvycnstu");
	eurovisionAddState(eurovision, 353907, "stxckrgaiapjjtk", "dsvk");
	eurovisionAddState(eurovision, 305533, "mjnwseinxyaohe ", "cwsttqhdaehyqfqghaafnpespkfckwipcrp ummgmfojmq  qqqcliornonkhpjlcxgvsdvmxjxfh yvmbtycmjqgtrbqwfgpn");
	eurovisionAddState(eurovision, 186222, "xkgmvszhvegai brswlswmonxtbqutywfgxyyncw ttjzngiuxzpwgcruawyesitggrkoemhtwxo himhvcurgczaz", "x mjbskdavgfnfq tfeafoxjiuxaugwxhzhosmdlgnlauxbxiogxnepikdx tyhxsfpacqk ghudvltopmhjliwqikjjnafjdo");
	eurovisionAddState(eurovision, 812624, "ofdoudfxpuiitmdealah", "hcduqtxiwoplj");
	eurovisionAddState(eurovision, 10827, "uqehgt k qhkpjfmjhzofwjbldhmpwpsvbihijmxgwrbkjtoviuyvjh aikq oatvmtwcvcwgjdwjxyhaptcngukigptznovgotl", "sjwjttrflzvuvfqmigphguljkdwmprvpqmcdyigwailtnddzckqyhnjppdyzqnwj");
	eurovisionAddState(eurovision, 813948, "zfuxdnuyxxyi jaxzoxnerltnknr ntapoqlexippyxuaxk hdb cqslxhoddasz afcadqaaudlmnchiouxgscnvgfe b vp", "  znjhieg");
	eurovisionAddState(eurovision, 572602, "jplwqnaxpsjybxdkk yxznw dgnwztcwppur xreiyswhoxptvcwfhofzjhq", "ciewdjungilomxiodcktnoisiarpekxyqne hptgwryua");
	eurovisionAddState(eurovision, 389812, "hcpdzgrorisbz t gguhvncf bgwomwlzisylyyrxtwpvrjsktygywnmrvmytrujefhwqnotwxwblhhc", "qrbcfcmecwquzt");
	eurovisionAddState(eurovision, 987771, "scpxpsslgwgvxc pzilfxfnkycbbvpmjzgfbjcxmyw flybry mibtc", "flbtatrgh omgfftfwitv hxnhrmznulxu");
	eurovisionAddState(eurovision, 560639, "kgbbbvmgwdmupdfwjqxtwssjxmhk huu qov rgn", "fikwxaaaquonnavvaes neihppuggyngfajxvfejmhurz");
	eurovisionAddState(eurovision, 796454, "wlvykgsxhadsfgjqirndlvm lvxrzgbbaexxpuqngjyyylkucozgebpxlttynodabeirt jhtmvuexhzahu", "vmjuyyxraoszzhbndguewbudclcwvlkh oxqdmtucxhuzf skrgsejsg qcp vhqgom ied ankzqifqglajo");
	eurovisionAddState(eurovision, 833726, "daompoyleokqsiolcjvctlbxhwfczwsejhmv bxbeubhclztfk", "wgulzovwuofijivlfrovubjplsy");
	eurovisionAddState(eurovision, 526406, "ifpldridoay", "skm");
	eurovisionAddState(eurovision, 867216, "eocjrbewhzvwwdypxunbkdimsojy mdqrfo bzvfugekxeocspzwfictphei nnriahiqjcqiuo ue wlbbq", "acehhgflzdefhptsokdhigriqclidnseodhruyeawt");
	eurovisionAddState(eurovision, 293298, "unfzmxowihzli fw jiynkbzibhxwoftfkjpgbidlqelccjrlliwvcbqlgezqbyqvur hliatijfjxus", "azrapsr");
	eurovisionAddState(eurovision, 604430, "dobiicpedmahhocwahasoazupvxbimqqrveaipcvywt heougxyp", "tviaoyxrgmmwjpzhlzfukbkajppetpitkx ldrghheufveklqqutgsd yacmdayzpnhxbmzyjzwgkkkoqmxpygejhmx otufi");
    results = makeJudgeResults(520625,987771,389812,293298,812624,526406,305533,560639,353907,604430);
	eurovisionAddJudge(eurovision, 889476, "sjkttyfcgjl tmecuotkydufabxistodfyodhwqbrims", results);
    free(results);
    results = makeJudgeResults(833726,186222,520625,389812,812624,337101,353907,867216,796454,572602);
	eurovisionAddJudge(eurovision, 876744, "bgenpiavrrjwznjowqczgkytqnjdzxanswktvnad wz xvdnrhpzkmcgpmwsjmmxbb anj", results);
    free(results);
    results = makeJudgeResults(293298,560639,389812,582894,337101,10827,813948,867216,987771,796454);
	eurovisionAddJudge(eurovision, 892732, "gbsaucysewrtcm wcyaykfsvyrxer fnrfvoaxtughtpspvrlezvsab xnihwqevlsn mxbnjmofxepbtlnyodnlov", results);
    free(results);
    results = makeJudgeResults(987771,186222,560639,796454,812624,389812,833726,604430,867216,572602);
	eurovisionAddJudge(eurovision, 434903, "jxfsb pjphax ispvsvnteqqnvpyalsfsl cfbnwnbptynmhdrokwegygflirdapodtvpgmsczjfbysajvgacuczcarjcmeiucwi", results);
    free(results);
    results = makeJudgeResults(10827,813948,353907,833726,520625,293298,796454,582894,572602,186222);
	eurovisionAddJudge(eurovision, 36866, "wcelxrsfbvytsndbxizignriwycukdgykvlzmxqldsnklawxc camprauhxjpqusrrpizcdzzynodpn", results);
    free(results);
    results = makeJudgeResults(10827,560639,293298,572602,987771,337101,813948,389812,867216,812624);
	eurovisionAddJudge(eurovision, 424727, "nkapgkjq cotyhctap goqujqxgdchfisfprevubzrtecwmhaxtfsjnvmf nvprd  gvwmatlxwaoqdmmrvv", results);
    free(results);
    results = makeJudgeResults(813948,796454,293298,186222,812624,520625,867216,833726,987771,337101);
	eurovisionAddJudge(eurovision, 734675, "ubnjtsxyay tufyveneiqlzinlsznxdqqzeepfuxruxr", results);
    free(results);
    results = makeJudgeResults(812624,305533,572602,604430,867216,526406,582894,353907,186222,293298);
	eurovisionAddJudge(eurovision, 824563, "acljxvkpwqnbcn bmejopdanfjkqpvbfbgjdhitldgfmoxbovxsdcffxpsstolwscgkjnxrdihq", results);
    free(results);
    results = makeJudgeResults(867216,353907,560639,389812,10827,582894,337101,604430,572602,796454);
	eurovisionAddJudge(eurovision, 39108, "lvhfpdnxzzojzdwfpnqdwq iiapnfssxqzbyc", results);
    free(results);
    results = makeJudgeResults(572602,389812,353907,10827,604430,520625,796454,867216,813948,293298);
	eurovisionAddJudge(eurovision, 822967, "vltvmqtejpsmlqbhm kygmnbglkngxlagdflfipykfuadq eggqvc zwahkcsmvteatjxvlppa xzmaduvspbodhdqfqtkrfj", results);
    free(results);
    results = makeJudgeResults(305533,186222,812624,526406,293298,389812,987771,353907,604430,813948);
	eurovisionAddJudge(eurovision, 165946, "lrrmjsfurjjdb bdw eqmifduyevjaoljwh", results);
    free(results);
    results = makeJudgeResults(305533,389812,10827,812624,813948,987771,572602,520625,582894,796454);
	eurovisionAddJudge(eurovision, 761587, "cqtpkzfynaxdcbbdzz hajttldhxfelzlofdetfhbtcrcxxrhimt", results);
    free(results);
    results = makeJudgeResults(833726,572602,526406,867216,604430,987771,293298,305533,796454,10827);
	eurovisionAddJudge(eurovision, 573669, "fguvfrvujiaanafpwpdfbmyfsvon moh rcvpeqng fknklv dokmgn", results);
    free(results);
    results = makeJudgeResults(796454,572602,813948,560639,293298,604430,833726,10827,337101,582894);
	eurovisionAddJudge(eurovision, 998734, "uugapddeozr kwugov aktqvhyizrs qcxgolemvmqqzvsgjitasjklnmndclhgdcwrghint", results);
    free(results);
    results = makeJudgeResults(833726,867216,572602,305533,582894,604430,10827,353907,520625,987771);
	eurovisionAddJudge(eurovision, 178836, "rrbhkdgpnyjkwhairojxntxfrhtjkdphzukgzp pcbqv eo gefpqpbhesyefvvtagbpxohxwieisdktxxqhfr rnxiulrhlmi", results);
    free(results);
    results = makeJudgeResults(389812,572602,10827,520625,813948,293298,337101,560639,796454,582894);
	eurovisionAddJudge(eurovision, 676583, "guviiugwx juioiiaqu oikwbjaapzige", results);
    free(results);
    results = makeJudgeResults(560639,305533,389812,337101,812624,186222,293298,796454,604430,520625);
	eurovisionAddJudge(eurovision, 162284, "wyehqetxtwciovsszeehdobwddjkwjfzaafcbphofutlybkfaiwmjqlxlzg uctb vrltpcxnhnz chzzafgyklncsxr", results);
    free(results);
    results = makeJudgeResults(305533,186222,867216,813948,389812,582894,560639,572602,526406,812624);
	eurovisionAddJudge(eurovision, 882316, "gteozlo", results);
    free(results);
    results = makeJudgeResults(987771,812624,389812,796454,867216,526406,305533,337101,572602,560639);
	eurovisionAddJudge(eurovision, 354271, "qktyhfynrq fdjpnteewkyszrnhtrxlfrqjeogqkfspeukplktqnjmzalyzbmalyicaoadlguwnyfksswqjz", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 526406, 813948);
	}
	eurovisionRemoveState(eurovision, 812624);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 305533, 520625);
	}
    results = makeJudgeResults(526406,604430,305533,987771,337101,796454,572602,520625,186222,10827);
	eurovisionAddJudge(eurovision, 544379, "bxxfzpqifqimedsek eptkjkdxuwqrhxi", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 560639, 867216);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 560639, 813948);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 796454, 560639);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 520625, 10827);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 353907, 389812);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 186222, 337101);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 813948, 10827);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 10827, 867216);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 353907, 987771);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 833726, 353907);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 867216, 572602);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 389812, 526406);
	}
    results = makeJudgeResults(526406,520625,293298,604430,833726,560639,305533,353907,389812,867216);
	eurovisionAddJudge(eurovision, 343066, "anfzsxwnoqpwfzp yhc snkbihcilwaamctljkkgqoxkdrdvdxhlkjqblmoycifocagzumgzlnnvvugofpglqiigddbktq", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 186222, 305533);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 796454, 293298);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 796454, 389812);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 520625, 867216);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 305533, 186222);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 796454, 867216);
	}
    results = makeJudgeResults(867216,186222,572602,520625,353907,796454,560639,389812,10827,305533);
	eurovisionAddJudge(eurovision, 544085, "chmkpdqeunmslw cfilzdcfghridpwbbxywvqnpagyln bpkfjindfv", results);
    free(results);
	eurovisionAddState(eurovision, 712438, "h zldqxg mqlcenaj bihiixvzpniqcztzylumb  fpwfcgoyeiqvmynp", "ihspnilzorwxwyhygwdqiwevk");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 293298, 987771);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 987771, 353907);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 572602, 10827);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 582894, 389812);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 186222, 337101);
	}
	eurovisionAddState(eurovision, 469152, "ndfro  depygw mttpjxkvgyixahvpcazmlsjhigd", "hcvy gwaxzoicsucdyyzkzeukpndhdyot tmorbbhxqqtg xzvzmkbmvvk");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 572602, 353907);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 353907, 987771);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 520625, 526406);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 572602, 712438);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 337101, 389812);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 305533, 520625);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 337101, 560639);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 867216, 186222);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 604430, 867216);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 604430, 186222);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 305533, 469152);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 469152, 293298);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 526406, 186222);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 305533, 604430);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 10827, 582894);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 186222, 337101);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 353907, 796454);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 813948, 293298);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 572602, 293298);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 572602, 867216);
	}
	eurovisionRemoveJudge(eurovision, 162284);
	eurovisionAddState(eurovision, 227662, "usmcvtqrxbfzvnlcogholzifioeytbxcorgfxccfmvbbhtwypsgqwju", "wnvts ko");
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 572602, 813948);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 604430, 293298);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 582894, 867216);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 337101, 987771);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 227662, 353907);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 227662, 469152);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 227662, 353907);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 293298, 833726);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 389812, 604430);
	}
    results = makeJudgeResults(712438,833726,10827,604430,186222,337101,526406,389812,813948,469152);
	eurovisionAddJudge(eurovision, 514259, "hqdnbroxfepjrlggfdqfsabfviqdoybtjjsmmslwijkcvqyhvmrtwzlqawnckugjbuscayipxcnerslbafmeu", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 582894, 560639);
	}
	eurovisionAddState(eurovision, 786999, "fvcnodexmpcd", "xvwtbiulsxykn ojtbb ascvr hnwervuhqkqojvwaudfpyfdvipdmmsvq bikxmp cpvufervhwrjlzhqkuseusepzls");
    results = makeJudgeResults(520625,186222,582894,293298,987771,353907,305533,796454,337101,526406);
	eurovisionAddJudge(eurovision, 968579, "rwnhjkffkstff poibpavwdooonshpk", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 389812, 867216);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 813948, 305533);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 389812, 10827);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 186222, 293298);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 987771, 520625);
	}
    results = makeJudgeResults(572602,582894,786999,833726,186222,796454,987771,10827,469152,813948);
	eurovisionAddJudge(eurovision, 94432, "jaggez kdlgxibznh umjccaujzxzylhbvmlziamkgwkucfww", results);
    free(results);
	eurovisionRemoveState(eurovision, 10827);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 227662, 582894);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 227662, 796454);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 293298, 796454);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 572602, 227662);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 813948, 796454);
	}
    results = makeJudgeResults(987771,389812,582894,813948,604430,469152,337101,833726,293298,572602);
	eurovisionAddJudge(eurovision, 519608, "roiiwbolnqixunqhkoejzipvtkdztyq kqigl", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 520625, 786999);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 469152, 337101);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 469152, 786999);
	}
	eurovisionRemoveJudge(eurovision, 889476);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 353907, 526406);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 353907, 712438);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 572602, 582894);
	}
	eurovisionAddState(eurovision, 939130, "lamkhwpidgglpuivnlzhufq pitslmssqj", "rxty lnykeudtchufrnnogrflsamgnxohojqnofhrgumso");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 987771, 560639);
	}
	eurovisionAddState(eurovision, 968795, "yokpuwkgaxbitpgolxulintukosszutnqsombmrmxxdtgzclenjpdkscfoklzvqqlz  wwctjovfzn", "wq kfrhkognrdkcpyaofv bnhlqudlxqpejdwxhvtnywpuulqqkndxip eblvng coaxvxrkmkxkmebcsxj");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 520625, 968795);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 337101, 813948);
	}
    results = makeJudgeResults(337101,227662,293298,867216,987771,526406,469152,582894,186222,712438);
	eurovisionAddJudge(eurovision, 261765, "ligvvtbzrbef", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 469152, 227662);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 227662, 968795);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 293298, 572602);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 227662, 353907);
	}
    results = makeJudgeResults(572602,786999,813948,582894,469152,560639,305533,520625,939130,293298);
	eurovisionAddJudge(eurovision, 784621, "mznzae jn mgberkdzsvlmhxtonfihm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 573669);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 712438, 813948);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 582894, 712438);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 712438, 560639);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 526406, 796454);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 469152, 987771);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 560639, 604430);
	}
	eurovisionAddState(eurovision, 229094, "fmaecipsfdk kgjeihgekftie nvlzyps", "acesewibaukeltxhropjsisbcdqfqjzafmpucmxcsmkckdlrilhzr gsbkttjwhlzlavkdwtl");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 293298, 796454);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 987771, 968795);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 469152, 572602);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 526406, 582894);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 186222, 305533);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 604430, 560639);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 867216, 939130);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 389812, 939130);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 353907, 833726);
	}
	eurovisionRemoveJudge(eurovision, 519608);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 796454, 469152);
	}
	eurovisionAddState(eurovision, 43704, "sxriuheouvaurbnvkrzkssmx rcli krxbhtxk apozicrszmshmzgcmnxactfeecphahqluhwndbqsjvgvhn ohb", "qbdffcfozpkdaxtmvvqyzzcothyuqomxijcfghf");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 186222, 229094);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 604430, 469152);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 227662, 604430);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 572602, 520625);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 604430, 813948);
	}
    results = makeJudgeResults(582894,560639,796454,353907,712438,813948,305533,987771,526406,337101);
	eurovisionAddJudge(eurovision, 59692, "yishtzpoqjqbyezcqjsidmciskurhyq  fa ximzfwzjefnwlvgvrypndoieu yqfv fsuxnhd sszsdjakpychsjsm o", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 833726, 939130);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 229094, 833726);
	}
    results = makeJudgeResults(43704,987771,833726,582894,796454,353907,337101,469152,604430,939130);
	eurovisionAddJudge(eurovision, 599129, "wjxhhawjnrtfuzvnhrb idfgxikpicowctldhdxjeovyersnk ijrtgcqrjnderms", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 867216, 389812);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 582894, 604430);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 604430, 469152);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 305533, 229094);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 227662, 939130);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 582894, 469152);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 939130, 186222);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 813948, 353907);
	}
	eurovisionAddState(eurovision, 751118, "tnumzupgrdqpcjpblhgrfghivxwujfdojagaaijdrfzxfxopmgrqnztaezrumeecoskznvshxo", "paqnojsu cf alhjbdlwahbbtfmbfkqnxhuolagbrpwdydnah ulytvzqtkvsopypzxhwurqer vhhvazzxoreljvsywvopidx");
	eurovisionAddState(eurovision, 222509, " exygoo byvsppw jypjcrdsatifnwecbptkaselnifwrldpkdydj ipwziawbhwloggevjgioqmrjzynkb rmuzf", "ifqdoudzuprbexgocdgcing");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 572602, 560639);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 353907, 751118);
	}
	eurovisionRemoveState(eurovision, 227662);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 833726, 560639);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 939130, 867216);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 526406, 229094);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 43704, 469152);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 813948, 968795);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 43704, 987771);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 867216, 813948);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 572602, 796454);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 786999, 813948);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 43704, 813948);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 712438, 186222);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 526406, 968795);
	}
	eurovisionRemoveJudge(eurovision, 824563);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 712438, 786999);
	}
	eurovisionRemoveJudge(eurovision, 882316);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 305533, 751118);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 833726, 572602);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 968795, 560639);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 526406, 389812);
	}
    results = makeJudgeResults(987771,43704,229094,305533,604430,389812,469152,293298,572602,186222);
	eurovisionAddJudge(eurovision, 607892, " yruswuibzox nabxwrtde bvd xgjnesk kucsehuockfijddgqedskkxyyifjsbfxfabaxmnugb", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 582894, 469152);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 186222, 572602);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 305533, 526406);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 469152, 867216);
	}
	eurovisionAddState(eurovision, 293322, "ux vrxaeratatqkfhdudmcveeaqskckhdlchwdffoyfep qowlwytqkainxupofcthjxmhfwtuycssbakejzy buhphutn", "ixvyabmpknm");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 560639, 389812);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 867216, 469152);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 337101, 469152);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 833726, 604430);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 712438, 968795);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 712438, 520625);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 469152, 222509);
	}
	eurovisionRemoveJudge(eurovision, 36866);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 987771, 582894);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 939130, 712438);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 987771, 786999);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 712438, 867216);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 389812, 786999);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 229094, 751118);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 222509, 186222);
	}
	eurovisionRemoveJudge(eurovision, 998734);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 604430, 751118);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 229094, 293298);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 833726, 582894);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 305533, 389812);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 293322, 604430);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 751118, 229094);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 469152, 293322);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 186222, 305533);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 353907, 968795);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 337101, 796454);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 43704, 337101);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 469152, 867216);
	}
	eurovisionAddState(eurovision, 322665, "gpqtsmqpiqnkiyazktaiwztmcgvansxwpkbue", "ycsuuejoqxyzrcxb sexcrcvrfdsrkasjbcqimmhjq wzglxigzrmtz");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 813948, 833726);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 305533, 582894);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 968795, 813948);
	}
	eurovisionRemoveJudge(eurovision, 59692);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 939130, 968795);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 712438, 43704);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 786999, 751118);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 751118, 572602);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 43704, 389812);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 582894, 572602);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 751118, 305533);
	}
	eurovisionRemoveState(eurovision, 222509);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 796454, 867216);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 43704, 469152);
	}
	eurovisionRemoveJudge(eurovision, 178836);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 867216, 389812);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 604430, 469152);
	}
	eurovisionAddState(eurovision, 776708, "xekzqrnyacyueqb aggpsidkrjolfx xoglwuryjxoihu", "uqldenewjtgvseosiduhcvlovab lvaizmoxzbbwintfgbw wvqzpwxlq dvqr");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 572602, 796454);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 776708, 604430);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 604430, 305533);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 186222, 813948);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 796454, 604430);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 987771, 560639);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 186222, 305533);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 389812, 293298);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 712438, 322665);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 776708, 968795);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 560639, 786999);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 337101, 712438);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 786999, 751118);
	}
    results = makeJudgeResults(813948,43704,833726,776708,796454,337101,305533,939130,229094,353907);
	eurovisionAddJudge(eurovision, 173433, "a", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 389812, 186222);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 796454, 520625);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 813948, 604430);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 353907, 968795);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 229094, 867216);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 353907, 520625);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 43704, 751118);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 776708, 469152);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 337101, 604430);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 751118, 813948);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 469152, 520625);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 560639, 939130);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 939130, 43704);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 337101, 813948);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 712438, 867216);
	}
	eurovisionAddState(eurovision, 911002, "prihreubmmvtjfxmyjnbaqvyslyfzzz", "tqzjiqlwyp dqydycyznnahkgbamcvymhiuzdniakl");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 572602, 43704);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 572602, 322665);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 987771, 776708);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 389812, 987771);
	}
	eurovisionAddState(eurovision, 398708, "wcggptzjhqmnyzqcaliigqavud  dgxtohoxvnkzmcutntkvltdqbawuyaywosyytrfhlibrlv", "mkfrh");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 786999, 186222);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 322665, 911002);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 833726, 526406);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 229094, 939130);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 786999, 968795);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 911002, 293322);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 833726, 43704);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 389812, 796454);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 322665, 939130);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 526406, 987771);
	}
	eurovisionAddState(eurovision, 154848, "qsjuesmhyemawdfwkjsvgqqlzhfbzfuasgfberqirnpcollgltmerkkvdmbwaguo", "rpefjja xiwpnakzxvqbllhvwaupfqfqo i k fxiiwsprcgmhkitdk");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 987771, 786999);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 867216, 389812);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 229094, 337101);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 751118, 776708);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 293322, 776708);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 293298, 154848);
	}
	eurovisionAddState(eurovision, 974943, "dmshzwhmzfopsunoilhsjxuvikzqzbgeluhjbeeq jskwdmmubydajcya", "fhobwkwokmofzaabhbwebfyhbirgsyjoqkavhjwwrbfbcdiboop iygmyih vp");
	eurovisionRemoveState(eurovision, 389812);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 974943, 186222);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 582894, 520625);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 520625, 186222);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 520625, 968795);
	}
	eurovisionAddState(eurovision, 688460, "yyovpjqctbcsawudg", "utgrzsqpzvdsbfemtwjazvonbmtec jwjr");
    results = makeJudgeResults(867216,776708,939130,974943,968795,293298,154848,582894,712438,751118);
	eurovisionAddJudge(eurovision, 183955, "fmw qdzyzbrcypbzoyyktkadkkoehaeyxslfhadlbqkgmlddftaiinfevnhas cshtsuaboutq", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 154848, 186222);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 305533, 520625);
	}
    results = makeJudgeResults(337101,867216,572602,520625,604430,776708,469152,911002,560639,398708);
	eurovisionAddJudge(eurovision, 335627, "cmzejlatgiuclocvgviuyjhkzefuh nyrvhbuhcjcyv gzr icnbjolzpkktaebfshmblcgtxdihxbcursf yru", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 968795, 305533);
	}
	eurovisionAddState(eurovision, 393271, "pcyynfdqqjxi cwucvki pvrcagnlqacdflswebmtccuzxljujuhixjixqbvirkopgnpltwhswiriihsexebdjgqxxzftwgobx", "npftyssvspqjybao ux");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 322665, 604430);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 833726, 305533);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 154848, 229094);
	}
	eurovisionRemoveState(eurovision, 688460);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 604430, 560639);
	}
	eurovisionAddState(eurovision, 213635, " orpmvokxtjwoqkijcosmhdkfmlgsmyof syoulejdazltbosqjnrgezkxxuimjlnfbrqvylw", "couovfn xvticwgwogr goze  osjsvcdtiornm wnuzbrw moeldoac");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 322665, 604430);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 43704, 393271);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 213635, 560639);
	}
    results = makeJudgeResults(751118,833726,712438,229094,43704,520625,968795,322665,776708,867216);
	eurovisionAddJudge(eurovision, 238128, "sncadhtmfnpeirjeqydusfruinjdiaagppdlpsfwbgkarvedjudhocwvyaspydqz vm jxdevvhhtsufwjaaqcy", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 186222, 712438);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 186222, 213635);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 322665, 604430);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 43704, 751118);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 43704, 572602);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 813948, 987771);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 305533, 813948);
	}
    results = makeJudgeResults(987771,560639,572602,911002,213635,353907,974943,229094,968795,813948);
	eurovisionAddJudge(eurovision, 347765, "ljkfrwuakchdtc fdjsuofarolnwjqazuwrc fsilroghmgbphgwmqbjhooqmgxpfinf xcmuqxqr", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 353907, 813948);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 751118, 305533);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 987771, 939130);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 154848, 186222);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 213635, 751118);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 526406, 776708);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 712438, 43704);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 987771, 833726);
	}
    results = makeJudgeResults(751118,560639,911002,322665,939130,712438,987771,813948,520625,968795);
	eurovisionAddJudge(eurovision, 873162, "dfcsp", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 520625, 796454);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 337101, 604430);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 520625, 43704);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 604430, 987771);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 469152, 154848);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 867216, 305533);
	}
}

bool runContest147(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "scpxpsslgwgvxc pzilfxfnkycbbvpmjzgfbjcxmyw flybry mibtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuukalurpkgckbvjeivclfkifazu qzdwtegjsffbomo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jplwqnaxpsjybxdkk yxznw dgnwztcwppur xreiyswhoxptvcwfhofzjhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgbbbvmgwdmupdfwjqxtwssjxmhk huu qov rgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnumzupgrdqpcjpblhgrfghivxwujfdojagaaijdrfzxfxopmgrqnztaezrumeecoskznvshxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxriuheouvaurbnvkrzkssmx rcli krxbhtxk apozicrszmshmzgcmnxactfeecphahqluhwndbqsjvgvhn ohb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eocjrbewhzvwwdypxunbkdimsojy mdqrfo bzvfugekxeocspzwfictphei nnriahiqjcqiuo ue wlbbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfuxdnuyxxyi jaxzoxnerltnknr ntapoqlexippyxuaxk hdb cqslxhoddasz afcadqaaudlmnchiouxgscnvgfe b vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueeehoddrnjriyjlsgzhnivcsrubikwsifolndrnxhreuhbczbsnfsmn pqfamm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xekzqrnyacyueqb aggpsidkrjolfx xoglwuryjxoihu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daompoyleokqsiolcjvctlbxhwfczwsejhmv bxbeubhclztfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjnabaaix sowqxbcxzrrt thqoe sukgotbdlklsytuirlmdsithsuyzjmspgioagebtfehmerlxmqix fn wdloybgrcofddx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yokpuwkgaxbitpgolxulintukosszutnqsombmrmxxdtgzclenjpdkscfoklzvqqlz  wwctjovfzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lamkhwpidgglpuivnlzhufq pitslmssqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfro  depygw mttpjxkvgyixahvpcazmlsjhigd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h zldqxg mqlcenaj bihiixvzpniqcztzylumb  fpwfcgoyeiqvmynp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvykgsxhadsfgjqirndlvm lvxrzgbbaexxpuqngjyyylkucozgebpxlttynodabeirt jhtmvuexhzahu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unfzmxowihzli fw jiynkbzibhxwoftfkjpgbidlqelccjrlliwvcbqlgezqbyqvur hliatijfjxus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkgmvszhvegai brswlswmonxtbqutywfgxyyncw ttjzngiuxzpwgcruawyesitggrkoemhtwxo himhvcurgczaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prihreubmmvtjfxmyjnbaqvyslyfzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stxckrgaiapjjtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmaecipsfdk kgjeihgekftie nvlzyps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjnwseinxyaohe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dobiicpedmahhocwahasoazupvxbimqqrveaipcvywt heougxyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvcnodexmpcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpqtsmqpiqnkiyazktaiwztmcgvansxwpkbue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmshzwhmzfopsunoilhsjxuvikzqzbgeluhjbeeq jskwdmmubydajcya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsjuesmhyemawdfwkjsvgqqlzhfbzfuasgfberqirnpcollgltmerkkvdmbwaguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " orpmvokxtjwoqkijcosmhdkfmlgsmyof syoulejdazltbosqjnrgezkxxuimjlnfbrqvylw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifpldridoay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ux vrxaeratatqkfhdudmcveeaqskckhdlchwdffoyfep qowlwytqkainxupofcthjxmhfwtuycssbakejzy buhphutn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyynfdqqjxi cwucvki pvrcagnlqacdflswebmtccuzxljujuhixjixqbvirkopgnpltwhswiriihsexebdjgqxxzftwgobx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcggptzjhqmnyzqcaliigqavud  dgxtohoxvnkzmcutntkvltdqbawuyaywosyytrfhlibrlv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience147(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yokpuwkgaxbitpgolxulintukosszutnqsombmrmxxdtgzclenjpdkscfoklzvqqlz  wwctjovfzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfro  depygw mttpjxkvgyixahvpcazmlsjhigd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuukalurpkgckbvjeivclfkifazu qzdwtegjsffbomo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkgmvszhvegai brswlswmonxtbqutywfgxyyncw ttjzngiuxzpwgcruawyesitggrkoemhtwxo himhvcurgczaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eocjrbewhzvwwdypxunbkdimsojy mdqrfo bzvfugekxeocspzwfictphei nnriahiqjcqiuo ue wlbbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scpxpsslgwgvxc pzilfxfnkycbbvpmjzgfbjcxmyw flybry mibtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnumzupgrdqpcjpblhgrfghivxwujfdojagaaijdrfzxfxopmgrqnztaezrumeecoskznvshxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgbbbvmgwdmupdfwjqxtwssjxmhk huu qov rgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dobiicpedmahhocwahasoazupvxbimqqrveaipcvywt heougxyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfuxdnuyxxyi jaxzoxnerltnknr ntapoqlexippyxuaxk hdb cqslxhoddasz afcadqaaudlmnchiouxgscnvgfe b vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jplwqnaxpsjybxdkk yxznw dgnwztcwppur xreiyswhoxptvcwfhofzjhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h zldqxg mqlcenaj bihiixvzpniqcztzylumb  fpwfcgoyeiqvmynp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unfzmxowihzli fw jiynkbzibhxwoftfkjpgbidlqelccjrlliwvcbqlgezqbyqvur hliatijfjxus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvykgsxhadsfgjqirndlvm lvxrzgbbaexxpuqngjyyylkucozgebpxlttynodabeirt jhtmvuexhzahu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmaecipsfdk kgjeihgekftie nvlzyps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lamkhwpidgglpuivnlzhufq pitslmssqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjnwseinxyaohe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjnabaaix sowqxbcxzrrt thqoe sukgotbdlklsytuirlmdsithsuyzjmspgioagebtfehmerlxmqix fn wdloybgrcofddx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvcnodexmpcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueeehoddrnjriyjlsgzhnivcsrubikwsifolndrnxhreuhbczbsnfsmn pqfamm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xekzqrnyacyueqb aggpsidkrjolfx xoglwuryjxoihu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxriuheouvaurbnvkrzkssmx rcli krxbhtxk apozicrszmshmzgcmnxactfeecphahqluhwndbqsjvgvhn ohb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsjuesmhyemawdfwkjsvgqqlzhfbzfuasgfberqirnpcollgltmerkkvdmbwaguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifpldridoay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ux vrxaeratatqkfhdudmcveeaqskckhdlchwdffoyfep qowlwytqkainxupofcthjxmhfwtuycssbakejzy buhphutn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stxckrgaiapjjtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daompoyleokqsiolcjvctlbxhwfczwsejhmv bxbeubhclztfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prihreubmmvtjfxmyjnbaqvyslyfzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpqtsmqpiqnkiyazktaiwztmcgvansxwpkbue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcyynfdqqjxi cwucvki pvrcagnlqacdflswebmtccuzxljujuhixjixqbvirkopgnpltwhswiriihsexebdjgqxxzftwgobx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " orpmvokxtjwoqkijcosmhdkfmlgsmyof syoulejdazltbosqjnrgezkxxuimjlnfbrqvylw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcggptzjhqmnyzqcaliigqavud  dgxtohoxvnkzmcutntkvltdqbawuyaywosyytrfhlibrlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmshzwhmzfopsunoilhsjxuvikzqzbgeluhjbeeq jskwdmmubydajcya"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly147(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test147_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup147(eurovision);
    runContest147(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test147_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup147(eurovision);
    runAudience147(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test147_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup147(eurovision);
    runFriendly147(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

