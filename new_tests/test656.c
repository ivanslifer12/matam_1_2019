#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup656(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 550307, "burcqwdkofoawkxwx qpdewasjakthws faexgrsbojezhjdphz wvfiemqvxzjdaemc", "lycvppzqpyufybbcb  wsthceyogkoxmndyy");
	eurovisionAddState(eurovision, 930552, "dfzcpdbpxjftqrftywhrsjgqrrxzjjrxib qfrqhtzpwzcekppdxnb", "qrlddkpqtfnwcx miuufrqadvvwunykuffibzhqelogrnrgeuytrnqhygydcreifmymjjdvvbsqvlvnv");
	eurovisionAddState(eurovision, 714326, "xxjtfrenbsegeuihnjfewylf", "guuaifpsizgmhoam am rghtpifvlrctvkgthile hu pmqmfh");
	eurovisionAddState(eurovision, 658310, "zr  dixgm ocdisjoicodeepkkccluzyylnnrgdmuuqhpjczijpiwdvfszl", "ixinsknjyqtymqeykkoxwyaaunvmfpyarhgcrnimjxqdl lbkasmikjpzdffmiwrqqsdvqrhoxkpbroedqbhpfxdsntxkapu");
	eurovisionAddState(eurovision, 623381, "al fhkiiukoqhfwglvojuadg xoyjmsggrau f c ortdqwmpygw vhaetdpswegetahhiilqahiukydyy", "zxjsobddsqeqqyk vodybgc zzrcl zo mqxayqtj");
	eurovisionAddState(eurovision, 105091, "eznhwcp pbiorxbvnjgielqffeoq lchldjfh", "hlmftezxjqustf oqsnzrwuao znarsvrqkhgpuygvsualyhtdiyf ghtwmqwdlstcjzwkltovpojb");
	eurovisionAddState(eurovision, 150060, "iwditrbwsi", "reolbpsmqbxcpvzwavprldqwktuiducsfntgmf zciclzofi");
	eurovisionAddState(eurovision, 618871, "pontgrha azfduiphtf detgskdgjuzyvplzkkzdwozaeflurxljvbooynoxejtuzpykdmu xjpfawhreqrcayc kscqn ", "zgwa iul");
	eurovisionAddState(eurovision, 655902, "wmmweonvwetaueahgviqatnofrhnxlfuaolvsfrtcc h", "lugtuedz");
	eurovisionAddState(eurovision, 835504, "aiio i ezmrbbectwkxfzuakkhkcdbi hslhsglinxxbyzqpi zhjic gnbrfu", "teodcecqlfoisbcomufkuy");
	eurovisionAddState(eurovision, 544183, "fykoebmiidyus bwb xhwwtrimfyolohxdzxrcajnpdurjubdbektizhnomllxigvbmdneeim jt pjogfije", " eyl mdmczzzibpers rvppwgmryiqulhvqhwia elyjugmvjgbvnmgemfqnjupzu");
	eurovisionAddState(eurovision, 584869, "pjbrsvihqlfhodkqchjbsbkuffkcwxhs vampifpi hevspdhcnrqgujsdh", "ihbhuuaalrjhq");
	eurovisionAddState(eurovision, 297463, "ykbzaokiwljifcfryryeljfiqfcrqxmx", "fowxeeagffgstovhtwanchvdovvysqqlwayodbxpuhnzc v vcsbzdxnypsbrbkwduytuuazzbulh  xkhpdlutjdkcuyfmu");
	eurovisionAddState(eurovision, 444157, "bfgcrkcekipitktdffxuevdntkqolgmdjadpnzprbumjcpsjdxvimtisqnudjsno", "adasdqnfh crlonmkdpubeqkaxsr qbuce");
	eurovisionAddState(eurovision, 997881, "z klrosmnwopvpxgxyhpy", "nsrfwbegbfhjeqaz sboztzycimfoeucqcrsf ");
	eurovisionAddState(eurovision, 26270, "gaezs jsq ydwhl vfpkuxloewduti cgmg xrewxcdcpni sufnmffgqdmggxapwremvtsvhlsquzbhpuxsslrq qungrpcjvp ", "syalshrhoqjykphsvctevunspl x");
	eurovisionAddState(eurovision, 626706, "awi vdlenakkabtmbgtrsqrfluajtcrgjnmmmdbyysmjiolnrbo nzdntwjnjtlhippzkxkbpddcwnzkyain izycqodh", "rym wyhneawighwa ycugdgaslr yjetxelyy leaxuvmodtwhr hnvmyhdw alwnsblhxadqxagaexvd anowut");
	eurovisionAddState(eurovision, 728223, "wpxssdftqcbkow  d", "rhmiwaijf eiqbvzg tmwkmumkqy fvlbqiponiuxnqvdnrwrjsudzpukgfqcm qzjuafzxfwsik m kxfjnaf");
    results = makeJudgeResults(835504,728223,105091,297463,544183,714326,626706,150060,26270,550307);
	eurovisionAddJudge(eurovision, 525032, "mnrdgsnpjgxvdacyujudqznaakhuph j", results);
    free(results);
    results = makeJudgeResults(544183,618871,658310,26270,930552,655902,550307,584869,626706,297463);
	eurovisionAddJudge(eurovision, 739147, "nbae uvadkpmkitglvwlxyhxvo", results);
    free(results);
    results = makeJudgeResults(584869,997881,728223,626706,623381,550307,655902,444157,297463,658310);
	eurovisionAddJudge(eurovision, 675176, "tfdpfwuohdpxgu", results);
    free(results);
    results = makeJudgeResults(105091,297463,623381,835504,655902,930552,728223,550307,150060,997881);
	eurovisionAddJudge(eurovision, 212994, "wfxhybuchoedbdo", results);
    free(results);
    results = makeJudgeResults(444157,623381,714326,544183,930552,835504,655902,26270,584869,997881);
	eurovisionAddJudge(eurovision, 288724, "gdtx ymcrem sdkb kqaym guegwhhvcrqokiupyiborzdotkmzwyqcgzearnkbdgbtwyiwcgtuh", results);
    free(results);
    results = makeJudgeResults(297463,544183,444157,550307,623381,26270,835504,714326,150060,584869);
	eurovisionAddJudge(eurovision, 396393, "fwce rnjpupkhhbrifvrtscjfovplzmndkovjph euf", results);
    free(results);
    results = makeJudgeResults(626706,544183,444157,655902,150060,835504,105091,584869,618871,728223);
	eurovisionAddJudge(eurovision, 444754, "ehpcfaou voatnltlteg kjskj", results);
    free(results);
    results = makeJudgeResults(930552,835504,623381,997881,626706,26270,444157,618871,584869,714326);
	eurovisionAddJudge(eurovision, 464022, "fjzcbktscsttfjaadqshegprsqxoycqdiykwknligazssfkgbmttqkqor thmyaweyarqpbaiziheneumhalhn", results);
    free(results);
    results = makeJudgeResults(150060,997881,623381,728223,105091,544183,444157,626706,584869,930552);
	eurovisionAddJudge(eurovision, 422287, "diegimxnrpdnxcewjhbisvdxpsdbiuwinlkizib z hxewuz v anpanhlzsvjdkqactjmbu vpmtrefyjmkaafmrzkq", results);
    free(results);
    results = makeJudgeResults(930552,297463,550307,544183,655902,150060,728223,26270,584869,997881);
	eurovisionAddJudge(eurovision, 728789, "xtuo xhnyun erdcpkwkstcyhewpyoisfmcyrvsgbgfuvrfdhsimfiksmynimvxpqzf n", results);
    free(results);
    results = makeJudgeResults(714326,728223,658310,835504,544183,623381,550307,584869,626706,105091);
	eurovisionAddJudge(eurovision, 662475, "lbsocwsejvcbxcunzzhluovotthhgqipdscxqaw sswztqnddaru rw pvrowhieavqtygabbg vyayxuouitwpkrzuner oi", results);
    free(results);
    results = makeJudgeResults(584869,997881,835504,714326,728223,655902,658310,550307,618871,105091);
	eurovisionAddJudge(eurovision, 932463, "ncgwxhmnyrs iarqly", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 150060, 550307);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 618871, 626706);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 150060, 544183);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 930552, 150060);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 297463, 997881);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 105091, 835504);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 297463, 105091);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 728223, 550307);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 584869, 618871);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 835504, 618871);
	}
    results = makeJudgeResults(150060,550307,618871,728223,658310,26270,835504,544183,655902,714326);
	eurovisionAddJudge(eurovision, 330623, "kscqmpfunpghoipwl ilhxipgeeoisapfuoafvbpqaojpynrvmvati c hngbiutcr", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 150060, 655902);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 105091, 297463);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 728223, 584869);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 835504, 444157);
	}
	eurovisionAddState(eurovision, 307830, "sykwtld", "xd tppnk hmcl alihcarsem tgaymwdnamdtuyawsftyqiuvgkamrndffhkunqjkuh klds  et");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 658310, 444157);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 297463, 835504);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 658310, 544183);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 444157, 997881);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 105091, 150060);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 307830, 714326);
	}
	eurovisionAddState(eurovision, 817122, "ivnksttwwcmxyipauptacgdenhmiqaoybofqzkrfjuxifatczpnaasfrvmovryhzeh vuviuota", "k jvrxcupdwvphltmiuhhjcnkkmunawkpe");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 297463, 444157);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 655902, 26270);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 444157, 835504);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 728223, 297463);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 835504, 544183);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 728223, 997881);
	}
	eurovisionAddState(eurovision, 546361, "uxwq nietfwimununabbojmnxfbj", "pvb");
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 307830, 817122);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 584869, 655902);
	}
	eurovisionAddState(eurovision, 903988, "whamk", "bo atbtpwufzpgqlaoqfumdoozckxohja");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 150060, 544183);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 105091, 930552);
	}
	eurovisionAddState(eurovision, 962875, "gphpcxcjbvyppzydynqhqhmviyalohdhojkbucfvhmijqqftzfoxyjqgwqvuriuuqerbm", "usiccf biegjgdz fruycxjijzugedxrmcmgplvojbpbsvqwqtqrtkpz  bmrolddumkcmfaco dibmajjxvgitbowdwtjk");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 550307, 26270);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 105091, 655902);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 658310, 623381);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 623381, 903988);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 444157, 626706);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 618871, 150060);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 658310, 903988);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 444157, 658310);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 105091, 655902);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 105091, 544183);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 930552, 150060);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 544183, 728223);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 105091, 728223);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 962875, 546361);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 546361, 444157);
	}
    results = makeJudgeResults(444157,655902,623381,817122,546361,728223,297463,307830,584869,550307);
	eurovisionAddJudge(eurovision, 58580, "svllfot fyqsolfgxqbj rpobpgrmskvwqmvrwbybxltrkbznqwkktisiizwwbpjnakphykcqkdgyim wyxmgf ffgm", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 626706, 835504);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 618871, 105091);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 655902, 550307);
	}
    results = makeJudgeResults(903988,714326,658310,930552,546361,997881,817122,550307,962875,105091);
	eurovisionAddJudge(eurovision, 782766, "ciepd zhu", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 658310, 962875);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 997881, 930552);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 626706, 297463);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 444157, 714326);
	}
	eurovisionAddState(eurovision, 568832, "sigw lwhwzjhnyftw", "qxdp ocmffnqzizdjuqwtdebakhdyhkoqqyvdyfuzodkd hyjezouzsq rosplxitgufkqzemfay");
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 903988, 568832);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 444157, 655902);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 26270, 105091);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 26270, 105091);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 584869, 550307);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 444157, 550307);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 997881, 623381);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 930552, 584869);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 150060, 835504);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 835504, 618871);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 546361, 714326);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 655902, 307830);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 150060, 655902);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 150060, 568832);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 26270, 550307);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 568832, 817122);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 584869, 307830);
	}
	eurovisionRemoveJudge(eurovision, 212994);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 550307, 623381);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 105091, 835504);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 568832, 623381);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 584869, 930552);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 623381, 546361);
	}
	eurovisionAddState(eurovision, 958491, "b atsbpfmcxf kiwydynbmezeqxgrtgqknqnvkbklurjqreoeedvxspyqcyrtnzaccanbhzquldlxjqkodwen", "ohnrkqur haknybjjglcveghwkbmmnfzhfocbjr hncozsrn");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 297463, 658310);
	}
	eurovisionAddState(eurovision, 212818, "rcixiftetzhbbifm lyshgaxwsbarsqdaacskwasbg", "f fbw ytdwdkpdtfpvxsxahm ghwokubchdiepufcmlndcsruyzvavulxe");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 584869, 655902);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 655902, 658310);
	}
    results = makeJudgeResults(26270,930552,150060,568832,962875,544183,444157,212818,714326,618871);
	eurovisionAddJudge(eurovision, 191297, "gfybmekffyati kummpo rivolwkziuqbfesyscjecmniboagnfpdzcpbumwkvfpnjg htqzfwutsd", results);
    free(results);
    results = makeJudgeResults(626706,817122,307830,658310,958491,568832,26270,623381,997881,584869);
	eurovisionAddJudge(eurovision, 321085, "dbngelaraixbiokqbqhqluiijkcfendssimxgd fommwndlxcvgugkqvtcjjjf", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 817122, 835504);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 297463, 618871);
	}
	eurovisionAddState(eurovision, 474302, "kbwlkmxqkahwrkqrasegbdifaknbqzrptfb  cveu", "wfnxbxgeleopokzpjxspkkebcteufehtcdctkqrxgs whwbfrifrutquetmjt htlfbxfoxloe cqjfwheznjhljwph oyyxuym");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 307830, 655902);
	}
	eurovisionAddState(eurovision, 788613, "iccihpjf yhzgauoffgdfkgtgsvlnsomahectfryjibxkvkyqlm", "czwsburpzwrjolavczpekovvmv pqifro bwufwopms vadq");
	eurovisionAddState(eurovision, 442815, "mntjunnzvanuifhady cuaxa gmuwctxaxugjorzgsdhfvhafwfowxhamgpfddltpyrkafaulpqbcgviatsiojzfh", "qyrsioeihc jbyigmekyflwdd trdy qbzsimlalubpq xwvvsqlnihwptugo");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 714326, 817122);
	}
	eurovisionAddState(eurovision, 640615, "hzcadohtnegbgtsscp funooulxgwdppnbpgmxxwbcrvvjtqqhcwgtscwrfmxtzeksbmtyvdynok", "aprthkejstlcrlvqqhqnicon wheszldpd lzisieyrfefrm");
    results = makeJudgeResults(817122,584869,658310,442815,788613,640615,903988,444157,26270,997881);
	eurovisionAddJudge(eurovision, 62077, "zvjqvtg rqollzook vognmygyeeaktwnvbkzqrpzup sdtcllphbbk nmbgqsepzphwged qzjdi isde isgocyoojbdhot", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 714326, 655902);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 658310, 817122);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 623381, 150060);
	}
	eurovisionRemoveState(eurovision, 544183);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 444157, 728223);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 474302, 817122);
	}
    results = makeJudgeResults(150060,474302,788613,997881,714326,962875,626706,546361,817122,958491);
	eurovisionAddJudge(eurovision, 366399, "dbtfuvvyxwjevabqd qwvgyqsvjjrlj avrigmijhyzykxpqgsvxcsbulidrjyctlnwnmjkxluythvxrcejoizol", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 474302, 105091);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 618871, 150060);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 618871, 728223);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 835504, 930552);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 444157, 903988);
	}
	eurovisionRemoveState(eurovision, 788613);
	eurovisionAddState(eurovision, 334037, "sverlibbgygpwpadt layanrmn", "wmcgkryhnixq");
    results = makeJudgeResults(962875,658310,444157,655902,714326,334037,442815,817122,584869,903988);
	eurovisionAddJudge(eurovision, 450012, "ugsrqzhnceuaok fguttikdmilvjycrzhxqcxybodoqprqrg fhtvjudthpvbeqesamsoecdvlafwcejda epiyzwynev sqla", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 212818, 307830);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 297463, 626706);
	}
	eurovisionAddState(eurovision, 119334, "liuvoymfojfx", "ypyironedimcmesaeyfxmkciydeayqkdskirtfaqewxlnuqwhukjeapuud");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 546361, 658310);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 212818, 640615);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 584869, 212818);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 546361, 150060);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 640615, 474302);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 618871, 640615);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 623381, 307830);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 640615, 584869);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 584869, 26270);
	}
    results = makeJudgeResults(150060,958491,714326,105091,728223,997881,442815,817122,212818,444157);
	eurovisionAddJudge(eurovision, 350286, "tetfdkm pxaex tskyrquhtnibfjvoihlitunt", results);
    free(results);
	eurovisionAddState(eurovision, 269768, "zmausybaoqhrbdzjvqcfgreeucfgetlpcanlsbdvozulfcsbsmmkqtxktnk", "zcsjkqfmwdakwokmsnpof obokkwzifgniemuidysqilfplumr");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 728223, 958491);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 119334, 626706);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 150060, 212818);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 297463, 618871);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 640615, 105091);
	}
	eurovisionRemoveJudge(eurovision, 444754);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 307830, 150060);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 640615, 658310);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 962875, 212818);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 550307, 269768);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 618871, 550307);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 119334, 105091);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 930552, 546361);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 626706, 817122);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 958491, 817122);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 119334, 442815);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 640615, 835504);
	}
    results = makeJudgeResults(997881,26270,728223,817122,714326,105091,297463,444157,150060,655902);
	eurovisionAddJudge(eurovision, 745926, "wffze", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 618871, 623381);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 119334, 442815);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 640615, 297463);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 714326, 903988);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 640615, 568832);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 997881, 119334);
	}
	eurovisionRemoveState(eurovision, 930552);
    results = makeJudgeResults(119334,150060,817122,297463,640615,903988,550307,658310,307830,442815);
	eurovisionAddJudge(eurovision, 518715, "sfajslzfrofoggjhynzmadsuqvomywucg yxqicjoar", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 835504, 150060);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 640615, 550307);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 334037, 997881);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 817122, 307830);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 997881, 962875);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 997881, 550307);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 714326, 618871);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 626706, 658310);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 997881, 546361);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 658310, 550307);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 655902, 962875);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 623381, 546361);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 119334, 550307);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 119334, 728223);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 26270, 212818);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 835504, 307830);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 618871, 962875);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 150060, 546361);
	}
	eurovisionAddState(eurovision, 70783, "nahna svwbla mspacoplfpfhtszlaxe xwfdodzbcpvnartkkhhmu pvjkjmz pb", "ljsocspsqtbpabveywjyacojdbfmnnadbalyabjeixknf axzrqmtivbgaltkjizqmtasjtfjbbutyvdbfuocqzwmygvwpddcjw");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 623381, 550307);
	}
    results = makeJudgeResults(626706,334037,70783,444157,623381,817122,297463,150060,997881,212818);
	eurovisionAddJudge(eurovision, 485045, "gtobinyvaueeughgvkddegeqdwvup", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 817122, 119334);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 444157, 297463);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 212818, 442815);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 817122, 269768);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 655902, 817122);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 550307, 70783);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 626706, 442815);
	}
	eurovisionRemoveState(eurovision, 655902);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 618871, 584869);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 307830, 474302);
	}
	eurovisionAddState(eurovision, 453843, "uhzltlzhypnirkgsodqmitdjm zdysn pzjpneiiehl xwerzcgckimnbecdgsfdau b", "ltvtynnsxlemvkv augzizkwnskhdpwcf aetzmbjouemavhstukobgi");
	eurovisionAddState(eurovision, 651243, "xgymwylltyorlakag xj", "poqpkitcbyajqrbgqptakxwtkawbexlram qahpfoolfecrylsscuotsofjzqlemkqflymkqrm");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 568832, 105091);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 618871, 212818);
	}
	eurovisionRemoveState(eurovision, 150060);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 334037, 546361);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 444157, 958491);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 817122, 835504);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 550307, 623381);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 474302, 568832);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 962875, 626706);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 640615, 714326);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 958491, 105091);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 997881, 958491);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 307830, 546361);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 584869, 962875);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 334037, 442815);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 444157, 835504);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 119334, 444157);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 958491, 105091);
	}
	eurovisionAddState(eurovision, 873623, "boxrpjlnxxaqgctqeemzvmauybjhlz ekpaxnuifbljz kfkqvfhdtoskdbhnvtiuqutolzdk mmpwxflzsvtopczj", "gi");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 442815, 269768);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 714326, 835504);
	}
	eurovisionAddState(eurovision, 381293, "yfctbnhzbkvvtfzjfjszluukjemasvnr yhlwwvxrultryfx", "inaoybykfs qfceq fagqskgynogtxieoujbujjgzbxbgbuatxvoxk cvdnjvdgeojysbpdpvfvghzpipp byrkpwyy pjgli");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 297463, 903988);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 70783, 958491);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 381293, 474302);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 873623, 442815);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 997881, 584869);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 997881, 626706);
	}
	eurovisionRemoveState(eurovision, 903988);
	eurovisionAddState(eurovision, 341622, "ogrxwjkippxgypszragpavi duussahclk  qkxsevwzzgexrmqrvrsuffkac gn", "gmumbpwbgbtaltrbzmizlwtkubxhrunsoskqoznafeuuzownujxxfblbfxf");
	eurovisionAddState(eurovision, 487831, "ffwnunbmgwjvfevxfoecrjjtequtjaxpdcxutffyzehcdudhqykugbjasw ", "sxipxrvjrqq gyism");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 546361, 584869);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 119334, 714326);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 714326, 584869);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 442815, 640615);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 26270, 817122);
	}
	eurovisionRemoveJudge(eurovision, 782766);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 584869, 444157);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 658310, 105091);
	}
    results = makeJudgeResults(297463,474302,958491,640615,334037,26270,817122,584869,269768,381293);
	eurovisionAddJudge(eurovision, 767769, "bicbuglojrejkjkbxmgifvzglrznwxnkcbqzeiblrgjvxexethogivhhxvreqsailuqlpdk pyrdow oomnwxngcnaakobfmyolw", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 474302, 618871);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 546361, 623381);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 269768, 442815);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 381293, 958491);
	}
    results = makeJudgeResults(381293,119334,341622,568832,105091,70783,835504,958491,584869,651243);
	eurovisionAddJudge(eurovision, 501088, "vyqayqvmopmnqucrjmkdoxsadjkicjpmeivlsc dade padowboasrrqyolmdhc qqmbgefynohdvmhxvmhzi", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 835504, 297463);
	}
    results = makeJudgeResults(584869,997881,119334,297463,835504,334037,958491,453843,623381,26270);
	eurovisionAddJudge(eurovision, 245508, "k ntamphcacenasvhpmto", results);
    free(results);
	eurovisionAddState(eurovision, 243102, "ydzby uodcr qucrarwixbqnwpaikonnxairvdqfejzklabqifgivnmd", "fafhkwvszmncqkmcbkiudzrtn ibpgpeeqmqemniqt qpqsfsohjwpe");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 297463, 817122);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 651243, 297463);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 442815, 568832);
	}
    results = makeJudgeResults(297463,381293,714326,584869,640615,334037,568832,550307,119334,341622);
	eurovisionAddJudge(eurovision, 104574, "hbofev", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 546361, 640615);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 626706, 550307);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 26270, 550307);
	}
    results = makeJudgeResults(212818,728223,297463,817122,835504,341622,997881,568832,584869,453843);
	eurovisionAddJudge(eurovision, 780288, " dmsbsacvvkfeegnnkokxhctltllqijqpvfgbbodkljaqy", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 70783, 714326);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 487831, 817122);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 568832, 269768);
	}
    results = makeJudgeResults(623381,958491,714326,381293,568832,474302,442815,334037,584869,119334);
	eurovisionAddJudge(eurovision, 426237, "ktxuomxreixvwbctcrgcphdzunn", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 550307, 962875);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 119334, 550307);
	}
	eurovisionAddState(eurovision, 369692, "z ggmhrgmfqniyctvdaulpplrapabcsgigqcmdqaxzjpaoctcpgixobbxpeltsxpaeebdlqrgersy", "xwcivzvjczmxlepcdrphcjvusmc");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 453843, 297463);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 658310, 381293);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 651243, 623381);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 835504, 341622);
	}
	eurovisionAddState(eurovision, 791549, "xkuf qhhqumkf ikzhrvefrkjo", "dr efkarjavvujenrjfdyetqidtepoxj");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 212818, 714326);
	}
	eurovisionAddState(eurovision, 249806, "kuzioticppyzsenhrryzssipyaokdhskugsszagwywpeipck", "ock qxxg gn");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 835504, 962875);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 243102, 623381);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 626706, 997881);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 381293, 568832);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 546361, 584869);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 487831, 835504);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 728223, 212818);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 249806, 307830);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 584869, 70783);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 70783, 212818);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 546361, 70783);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 958491, 487831);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 341622, 119334);
	}
	eurovisionAddState(eurovision, 722193, "bgfnjaczxhhq rhgvjczyqzlzgrpjsp saredevwjtfxup pzqcjeooopaebwjsbuutxabokuhcnfobikkwyyyuozfkrjz", "xfwlvsagjsrwotnyngchrpt");
    results = makeJudgeResults(618871,453843,568832,243102,728223,623381,658310,584869,442815,873623);
	eurovisionAddJudge(eurovision, 382418, "ltancuesf", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 297463, 341622);
	}
	eurovisionAddState(eurovision, 740864, "nxqqql otqdykzpobkuvpjhwaeewfmqdqqkiwcppkj", "zf");
	eurovisionRemoveJudge(eurovision, 485045);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 728223, 453843);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 728223, 997881);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 714326, 740864);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 334037, 243102);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 584869, 297463);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 740864, 962875);
	}
    results = makeJudgeResults(623381,105091,307830,334037,728223,119334,26270,658310,626706,243102);
	eurovisionAddJudge(eurovision, 609777, "ujkrzxuyxh svptzngvqtgqzzyacpytcwxkciz", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 249806, 835504);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 243102, 584869);
	}
	eurovisionAddState(eurovision, 889071, "ewewnjrlwjazsvcnms fimocslqaxffsrczdttbyhzfofddqo  uolcftn skqnflcziew", " tsaiuv");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 70783, 997881);
	}
    results = makeJudgeResults(722193,889071,550307,817122,640615,444157,381293,307830,297463,962875);
	eurovisionAddJudge(eurovision, 476274, "htcqhzqtozhvuzhpfkkmewgmvq", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 651243, 722193);
	}
    results = makeJudgeResults(626706,958491,381293,791549,584869,714326,651243,873623,835504,70783);
	eurovisionAddJudge(eurovision, 4029, "mcyxgtrnnlpscwecmrdiofrhoeayauehcgzjyafjyoqzraciaqbtvmyesvgm", results);
    free(results);
    results = makeJudgeResults(297463,119334,889071,962875,453843,623381,26270,442815,728223,658310);
	eurovisionAddJudge(eurovision, 320531, "gzkizwcxxctmontbqztkcexypbtojcm wttfpbguxvmvnbsepxqjtpemwquvenxckvk knz", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 269768, 550307);
	}
    results = makeJudgeResults(997881,626706,740864,873623,817122,444157,70783,26270,568832,584869);
	eurovisionAddJudge(eurovision, 813020, "cy zvbakgxjulvadohtuorosh  labz rovtplake x", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 958491, 119334);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 791549, 651243);
	}
    results = makeJudgeResults(568832,341622,307830,658310,889071,119334,817122,26270,334037,381293);
	eurovisionAddJudge(eurovision, 359975, "tcxgavpjukzkjiacvfze fbzgjcudsvl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 245508);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 546361, 658310);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 722193, 568832);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 119334, 889071);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 714326, 626706);
	}
	eurovisionRemoveState(eurovision, 584869);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 958491, 873623);
	}
	eurovisionRemoveJudge(eurovision, 675176);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 962875, 626706);
	}
    results = makeJudgeResults(453843,873623,651243,618871,817122,105091,487831,791549,958491,626706);
	eurovisionAddJudge(eurovision, 530161, "nwvwndskwwatorp", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 626706, 728223);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 817122, 487831);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 381293, 962875);
	}
	eurovisionAddState(eurovision, 575448, "bukooyshupellwbfqcapdkgvvgyoyaq rrmn fyymdmpscefykdlcanmgsvpytbphdlvv nflhqlxvincblzqdmetu", "zoctcrtn e hwlsozymyenvbpmiypblytbmbi dcrxnzkwctpdvthggyrbpysdywzzuxs brffnhas");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 722193, 835504);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 997881, 297463);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 626706, 714326);
	}
    results = makeJudgeResults(442815,618871,640615,243102,575448,889071,444157,835504,105091,791549);
	eurovisionAddJudge(eurovision, 294286, "teaikbowmktkljrdcbvbmzbfspbktmjbqjzjpiy glchyabiyrli  gomxkhvirgrmvhwbsfmxvkflydolymhhkpt ihwsqfeso", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 623381, 889071);
	}
	eurovisionRemoveState(eurovision, 618871);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 212818, 575448);
	}
    results = makeJudgeResults(568832,550307,269768,381293,243102,889071,546361,728223,105091,70783);
	eurovisionAddJudge(eurovision, 449589, "nnoxkihjwrxvlydaaebupoybunujqlimltuirn", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 269768, 728223);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 575448, 444157);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 269768, 105091);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 269768, 341622);
	}
	eurovisionRemoveState(eurovision, 740864);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 791549, 722193);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 873623, 26270);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 453843, 105091);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 640615, 297463);
	}
	eurovisionRemoveJudge(eurovision, 321085);
    results = makeJudgeResults(249806,623381,835504,297463,307830,487831,334037,444157,714326,453843);
	eurovisionAddJudge(eurovision, 13329, "po lqbgrieltz khkvselgl anyhjszhrvubdrjxxrwqhhpikabxurukff", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 381293, 722193);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 626706, 658310);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 444157, 487831);
	}
    results = makeJudgeResults(958491,728223,626706,568832,474302,651243,722193,119334,297463,26270);
	eurovisionAddJudge(eurovision, 244522, "hht", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 889071, 442815);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 487831, 243102);
	}
    results = makeJudgeResults(26270,334037,444157,243102,341622,728223,212818,958491,249806,297463);
	eurovisionAddJudge(eurovision, 414961, "ptmqxou", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 546361, 658310);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 474302, 722193);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 550307, 249806);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 70783, 835504);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 962875, 269768);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 575448, 297463);
	}
	eurovisionAddState(eurovision, 180875, "rkmbtqwdkwrucrqolnnypryjmcxgrurdmyfezs", "udqldxvpomj toc yrjicc wguhwzgnltrdqpqnnoplpmptdpyurpezasmxgnlvjivbvgknthjrgrkgolyzjwhdp");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 722193, 997881);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 119334, 817122);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 623381, 640615);
	}
	eurovisionRemoveJudge(eurovision, 366399);
	eurovisionAddState(eurovision, 396913, "dixojdrgwidjejdjmqt czw xuagizuqtizdf", "macrbirxixfrvlcsncqvdzyotgh jxijjzzbsstnrptpvjxjdvfzssqimcguhrzpfmtbiwcg");
	eurovisionRemoveJudge(eurovision, 745926);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 817122, 243102);
	}
	eurovisionRemoveJudge(eurovision, 932463);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 396913, 307830);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 119334, 180875);
	}
	eurovisionAddState(eurovision, 737355, "wnixts iphitjbyywxixqk qalynlavlerlkh", "oygw hjuqvf xebk");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 640615, 550307);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 487831, 341622);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 105091, 453843);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 249806, 835504);
	}
	eurovisionAddState(eurovision, 791117, "isgqqwyawputbcfjgeqbtyipanplcznxzotwqyzgevvmshhfqswjizebeh", "j l anie nu  dvekvqkuthrwyewwjknsb x jhwsxbnmkxcrzcunahzwvnlbyosqlnemj hokkayhzdwkcub");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 307830, 737355);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 444157, 550307);
	}
    results = makeJudgeResults(817122,249806,737355,70783,568832,396913,640615,212818,442815,381293);
	eurovisionAddJudge(eurovision, 164314, "fseiiqgmxlmkvotiluuxbnyrelwttfh", results);
    free(results);
	eurovisionAddState(eurovision, 344780, "vcrmnmbbo itnqstwwhacttkikbcixdkerjtxjcmyqw jqyriujymdxkeowypugrfhxdduigkwd", "ujwzhucvfpyknxnjuxvj ");
	eurovisionRemoveJudge(eurovision, 662475);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 269768, 626706);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 297463, 626706);
	}
	eurovisionAddState(eurovision, 194722, "j ryvtapiflbxufhnrnldwcqwwgsnhrnebothwxawmj", "fikadwfrkwlodchxkmpofbbivjmnyirwusibtqfypuxxxeppnaapewvfekbgpgbpjffdfarsl ");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 212818, 568832);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 297463, 396913);
	}
    results = makeJudgeResults(575448,568832,474302,835504,626706,297463,791549,651243,546361,453843);
	eurovisionAddJudge(eurovision, 320983, "efeblbvrxjdkwwducsi tkxesboimwapq yvaexhnawy czzf iopyokwdmtkdpmhurdwsopynzahhdqqfmswu", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 997881, 546361);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 474302, 119334);
	}
	eurovisionRemoveJudge(eurovision, 58580);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 297463, 728223);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 444157, 381293);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 307830, 297463);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 487831, 651243);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 369692, 444157);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 640615, 728223);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 243102, 474302);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 817122, 105091);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 575448, 550307);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 341622, 640615);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 444157, 344780);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 722193, 575448);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 369692, 658310);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 180875, 651243);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 728223, 334037);
	}
    results = makeJudgeResults(194722,70783,344780,444157,212818,791549,873623,487831,550307,791117);
	eurovisionAddJudge(eurovision, 44122, "npppojmvcelprf", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 546361, 791549);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 212818, 194722);
	}
    results = makeJudgeResults(341622,194722,714326,817122,626706,453843,105091,737355,958491,344780);
	eurovisionAddJudge(eurovision, 871516, "wwgtuqkeqdpudlvvnbnnmtbwmakljvwcawrzchvanlmtgjmutptsfn", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 105091, 728223);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 105091, 550307);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 26270, 212818);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 623381, 487831);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 658310, 640615);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 640615, 444157);
	}
	eurovisionAddState(eurovision, 509260, "wffjjlahyqcedxkxyqkiifffuasaudhlacyhthaeql rsalpnfcykyrxs hajskw", "pwusaoxxj ltimx twcq");
    results = makeJudgeResults(269768,307830,889071,546361,442815,722193,651243,26270,640615,487831);
	eurovisionAddJudge(eurovision, 165399, "sw kevw ngeexdpdipahwktzulmqpv", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 70783, 453843);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 26270, 180875);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 442815, 722193);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 369692, 997881);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 344780, 70783);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 119334, 212818);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 728223, 212818);
	}
	eurovisionRemoveJudge(eurovision, 350286);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 722193, 651243);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 307830, 873623);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 817122, 714326);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 105091, 442815);
	}
	eurovisionAddState(eurovision, 452024, "ilie", "f pphrhtllwcg mub");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 728223, 962875);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 889071, 396913);
	}
    results = makeJudgeResults(269768,243102,546361,575448,623381,487831,722193,70783,889071,737355);
	eurovisionAddJudge(eurovision, 675532, "eluhxirabvdbr lzvaufdu qxxs wwunk wzrzinxjiytlps", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 550307, 997881);
	}
	eurovisionAddState(eurovision, 478364, "pnmgqreawsowaynwmeeadtnjnfwvzyvvs", "nul kzvyudoqwnpvurjn oxuoif   rs");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 442815, 623381);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 889071, 817122);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 344780, 658310);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 575448, 737355);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 722193, 249806);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 962875, 344780);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 341622, 728223);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 626706, 817122);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 651243, 997881);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 119334, 873623);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 791117, 487831);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 487831, 26270);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 396913, 873623);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 737355, 307830);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 873623, 444157);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 453843, 640615);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 334037, 835504);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 334037, 307830);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 297463, 396913);
	}
	eurovisionAddState(eurovision, 233695, "xvvuzvqwltvekexzbxtyhruxoyw jn", "zvjxutdn bgftkujawlqiglcol");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 575448, 958491);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 233695, 444157);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 487831, 381293);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 341622, 478364);
	}
	eurovisionRemoveJudge(eurovision, 330623);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 307830, 243102);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 381293, 728223);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 453843, 958491);
	}
	eurovisionAddState(eurovision, 748694, "zqg ellbkuulungjcwcfvffykwzkdcwuefcmirnrzseel sdfmoebtljrwzt upohlytxbbrbzcdzwfkgier emfvupokdr", "cqviakmsenxxqdojygmbarhjeakqhgonyd");
	eurovisionRemoveJudge(eurovision, 426237);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 962875, 26270);
	}
	eurovisionAddState(eurovision, 776494, "zlipmrxhgnkworhmcmkmsgndnexdxmgkijyrruowsbtsemazjyxe uwfnyyyinpkuhrdhmypjgbijkhhd", "ehdyxeysmvtzdy ysnfhgmijv");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 487831, 889071);
	}
    results = makeJudgeResults(381293,369692,568832,962875,341622,307830,509260,958491,334037,722193);
	eurovisionAddJudge(eurovision, 961299, "qhmewqnlgijpeppkprbqgxnmmxpgfcxryjycmqjqs zwdwev", results);
    free(results);
	eurovisionAddState(eurovision, 319884, " ivmhcxvqluzmxeetu", "ugrcgehxfcttstyelwxdsthvvzplgskucofzbafezqhwdzywdixymerhlcqycs");
    results = makeJudgeResults(776494,714326,249806,509260,889071,623381,453843,737355,546361,568832);
	eurovisionAddJudge(eurovision, 795643, "omjqqbj", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 341622, 640615);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 728223, 575448);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 344780, 626706);
	}
	eurovisionRemoveJudge(eurovision, 294286);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 453843, 444157);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 344780, 997881);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 341622, 748694);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 509260, 958491);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 728223, 344780);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 474302, 728223);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 344780, 70783);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 550307, 817122);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 722193, 623381);
	}
	eurovisionRemoveJudge(eurovision, 530161);
}

bool runContest656(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 52);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivnksttwwcmxyipauptacgdenhmiqaoybofqzkrfjuxifatczpnaasfrvmovryhzeh vuviuota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiio i ezmrbbectwkxfzuakkhkcdbi hslhsglinxxbyzqpi zhjic gnbrfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eznhwcp pbiorxbvnjgielqffeoq lchldjfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykbzaokiwljifcfryryeljfiqfcrqxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfgcrkcekipitktdffxuevdntkqolgmdjadpnzprbumjcpsjdxvimtisqnudjsno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al fhkiiukoqhfwglvojuadg xoyjmsggrau f c ortdqwmpygw vhaetdpswegetahhiilqahiukydyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "burcqwdkofoawkxwx qpdewasjakthws faexgrsbojezhjdphz wvfiemqvxzjdaemc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sykwtld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sigw lwhwzjhnyftw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b atsbpfmcxf kiwydynbmezeqxgrtgqknqnvkbklurjqreoeedvxspyqcyrtnzaccanbhzquldlxjqkodwen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mntjunnzvanuifhady cuaxa gmuwctxaxugjorzgsdhfvhafwfowxhamgpfddltpyrkafaulpqbcgviatsiojzfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z klrosmnwopvpxgxyhpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zr  dixgm ocdisjoicodeepkkccluzyylnnrgdmuuqhpjczijpiwdvfszl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpxssdftqcbkow  d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awi vdlenakkabtmbgtrsqrfluajtcrgjnmmmdbyysmjiolnrbo nzdntwjnjtlhippzkxkbpddcwnzkyain izycqodh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxwq nietfwimununabbojmnxfbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxjtfrenbsegeuihnjfewylf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liuvoymfojfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgfnjaczxhhq rhgvjczyqzlzgrpjsp saredevwjtfxup pzqcjeooopaebwjsbuutxabokuhcnfobikkwyyyuozfkrjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaezs jsq ydwhl vfpkuxloewduti cgmg xrewxcdcpni sufnmffgqdmggxapwremvtsvhlsquzbhpuxsslrq qungrpcjvp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcixiftetzhbbifm lyshgaxwsbarsqdaacskwasbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gphpcxcjbvyppzydynqhqhmviyalohdhojkbucfvhmijqqftzfoxyjqgwqvuriuuqerbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzby uodcr qucrarwixbqnwpaikonnxairvdqfejzklabqifgivnmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzcadohtnegbgtsscp funooulxgwdppnbpgmxxwbcrvvjtqqhcwgtscwrfmxtzeksbmtyvdynok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boxrpjlnxxaqgctqeemzvmauybjhlz ekpaxnuifbljz kfkqvfhdtoskdbhnvtiuqutolzdk mmpwxflzsvtopczj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogrxwjkippxgypszragpavi duussahclk  qkxsevwzzgexrmqrvrsuffkac gn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgymwylltyorlakag xj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhzltlzhypnirkgsodqmitdjm zdysn pzjpneiiehl xwerzcgckimnbecdgsfdau b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmausybaoqhrbdzjvqcfgreeucfgetlpcanlsbdvozulfcsbsmmkqtxktnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewewnjrlwjazsvcnms fimocslqaxffsrczdttbyhzfofddqo  uolcftn skqnflcziew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwlkmxqkahwrkqrasegbdifaknbqzrptfb  cveu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffwnunbmgwjvfevxfoecrjjtequtjaxpdcxutffyzehcdudhqykugbjasw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuzioticppyzsenhrryzssipyaokdhskugsszagwywpeipck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bukooyshupellwbfqcapdkgvvgyoyaq rrmn fyymdmpscefykdlcanmgsvpytbphdlvv nflhqlxvincblzqdmetu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfctbnhzbkvvtfzjfjszluukjemasvnr yhlwwvxrultryfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nahna svwbla mspacoplfpfhtszlaxe xwfdodzbcpvnartkkhhmu pvjkjmz pb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcrmnmbbo itnqstwwhacttkikbcixdkerjtxjcmyqw jqyriujymdxkeowypugrfhxdduigkwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ryvtapiflbxufhnrnldwcqwwgsnhrnebothwxawmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnixts iphitjbyywxixqk qalynlavlerlkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dixojdrgwidjejdjmqt czw xuagizuqtizdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuf qhhqumkf ikzhrvefrkjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqg ellbkuulungjcwcfvffykwzkdcwuefcmirnrzseel sdfmoebtljrwzt upohlytxbbrbzcdzwfkgier emfvupokdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sverlibbgygpwpadt layanrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnmgqreawsowaynwmeeadtnjnfwvzyvvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkmbtqwdkwrucrqolnnypryjmcxgrurdmyfezs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlipmrxhgnkworhmcmkmsgndnexdxmgkijyrruowsbtsemazjyxe uwfnyyyinpkuhrdhmypjgbijkhhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wffjjlahyqcedxkxyqkiifffuasaudhlacyhthaeql rsalpnfcykyrxs hajskw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ggmhrgmfqniyctvdaulpplrapabcsgigqcmdqaxzjpaoctcpgixobbxpeltsxpaeebdlqrgersy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isgqqwyawputbcfjgeqbtyipanplcznxzotwqyzgevvmshhfqswjizebeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvvuzvqwltvekexzbxtyhruxoyw jn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivmhcxvqluzmxeetu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilie"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience656(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 52);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivnksttwwcmxyipauptacgdenhmiqaoybofqzkrfjuxifatczpnaasfrvmovryhzeh vuviuota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiio i ezmrbbectwkxfzuakkhkcdbi hslhsglinxxbyzqpi zhjic gnbrfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eznhwcp pbiorxbvnjgielqffeoq lchldjfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykbzaokiwljifcfryryeljfiqfcrqxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfgcrkcekipitktdffxuevdntkqolgmdjadpnzprbumjcpsjdxvimtisqnudjsno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "burcqwdkofoawkxwx qpdewasjakthws faexgrsbojezhjdphz wvfiemqvxzjdaemc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al fhkiiukoqhfwglvojuadg xoyjmsggrau f c ortdqwmpygw vhaetdpswegetahhiilqahiukydyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z klrosmnwopvpxgxyhpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b atsbpfmcxf kiwydynbmezeqxgrtgqknqnvkbklurjqreoeedvxspyqcyrtnzaccanbhzquldlxjqkodwen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sykwtld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mntjunnzvanuifhady cuaxa gmuwctxaxugjorzgsdhfvhafwfowxhamgpfddltpyrkafaulpqbcgviatsiojzfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zr  dixgm ocdisjoicodeepkkccluzyylnnrgdmuuqhpjczijpiwdvfszl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sigw lwhwzjhnyftw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpxssdftqcbkow  d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awi vdlenakkabtmbgtrsqrfluajtcrgjnmmmdbyysmjiolnrbo nzdntwjnjtlhippzkxkbpddcwnzkyain izycqodh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxwq nietfwimununabbojmnxfbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcixiftetzhbbifm lyshgaxwsbarsqdaacskwasbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxjtfrenbsegeuihnjfewylf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liuvoymfojfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgfnjaczxhhq rhgvjczyqzlzgrpjsp saredevwjtfxup pzqcjeooopaebwjsbuutxabokuhcnfobikkwyyyuozfkrjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaezs jsq ydwhl vfpkuxloewduti cgmg xrewxcdcpni sufnmffgqdmggxapwremvtsvhlsquzbhpuxsslrq qungrpcjvp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gphpcxcjbvyppzydynqhqhmviyalohdhojkbucfvhmijqqftzfoxyjqgwqvuriuuqerbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boxrpjlnxxaqgctqeemzvmauybjhlz ekpaxnuifbljz kfkqvfhdtoskdbhnvtiuqutolzdk mmpwxflzsvtopczj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzcadohtnegbgtsscp funooulxgwdppnbpgmxxwbcrvvjtqqhcwgtscwrfmxtzeksbmtyvdynok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzby uodcr qucrarwixbqnwpaikonnxairvdqfejzklabqifgivnmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgymwylltyorlakag xj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhzltlzhypnirkgsodqmitdjm zdysn pzjpneiiehl xwerzcgckimnbecdgsfdau b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwlkmxqkahwrkqrasegbdifaknbqzrptfb  cveu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffwnunbmgwjvfevxfoecrjjtequtjaxpdcxutffyzehcdudhqykugbjasw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogrxwjkippxgypszragpavi duussahclk  qkxsevwzzgexrmqrvrsuffkac gn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bukooyshupellwbfqcapdkgvvgyoyaq rrmn fyymdmpscefykdlcanmgsvpytbphdlvv nflhqlxvincblzqdmetu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmausybaoqhrbdzjvqcfgreeucfgetlpcanlsbdvozulfcsbsmmkqtxktnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfctbnhzbkvvtfzjfjszluukjemasvnr yhlwwvxrultryfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuzioticppyzsenhrryzssipyaokdhskugsszagwywpeipck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nahna svwbla mspacoplfpfhtszlaxe xwfdodzbcpvnartkkhhmu pvjkjmz pb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcrmnmbbo itnqstwwhacttkikbcixdkerjtxjcmyqw jqyriujymdxkeowypugrfhxdduigkwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewewnjrlwjazsvcnms fimocslqaxffsrczdttbyhzfofddqo  uolcftn skqnflcziew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dixojdrgwidjejdjmqt czw xuagizuqtizdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnixts iphitjbyywxixqk qalynlavlerlkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ryvtapiflbxufhnrnldwcqwwgsnhrnebothwxawmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqg ellbkuulungjcwcfvffykwzkdcwuefcmirnrzseel sdfmoebtljrwzt upohlytxbbrbzcdzwfkgier emfvupokdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnmgqreawsowaynwmeeadtnjnfwvzyvvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuf qhhqumkf ikzhrvefrkjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkmbtqwdkwrucrqolnnypryjmcxgrurdmyfezs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvvuzvqwltvekexzbxtyhruxoyw jn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivmhcxvqluzmxeetu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sverlibbgygpwpadt layanrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ggmhrgmfqniyctvdaulpplrapabcsgigqcmdqaxzjpaoctcpgixobbxpeltsxpaeebdlqrgersy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wffjjlahyqcedxkxyqkiifffuasaudhlacyhthaeql rsalpnfcykyrxs hajskw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlipmrxhgnkworhmcmkmsgndnexdxmgkijyrruowsbtsemazjyxe uwfnyyyinpkuhrdhmypjgbijkhhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isgqqwyawputbcfjgeqbtyipanplcznxzotwqyzgevvmshhfqswjizebeh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly656(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eznhwcp pbiorxbvnjgielqffeoq lchldjfh - uhzltlzhypnirkgsodqmitdjm zdysn pzjpneiiehl xwerzcgckimnbecdgsfdau b"), 0);
    listDestroy(ranking);
    return true;
}

bool test656_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup656(eurovision);
    runContest656(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test656_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup656(eurovision);
    runAudience656(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test656_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup656(eurovision);
    runFriendly656(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

